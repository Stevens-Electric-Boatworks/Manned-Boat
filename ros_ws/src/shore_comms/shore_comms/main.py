from builtin_interfaces.msg import Time
from websockets.exceptions import ConnectionClosed, InvalidStatus
import rclpy
from rclpy.executors import ExternalShutdownException
import rclpy.logging
from rclpy.node import Node

from boat_common_libs.alarm_lib.alarms import Alarm
from boat_data_interfaces.msg import ElectricalData, MotionData, BoatAlarm, \
    CANMotorData, CANBusStatus
from rcl_interfaces.msg import Log, ParameterDescriptor, SetParametersResult
from boat_common_libs.alarm_lib import alarm_helper

#Websockets
import asyncio
from websockets.client import connect
from websockets.client import WebSocketClientProtocol
import json
import threading


SHORE_URI = "wss://shore.stevenseboat.org/api"
# SHORE_URI = "ws://localhost:5001/api"

def get_time_in_ms(time:Time):
    return time.sec * 1000 + (time.nanosec / 1e+6)


class ShoreDataCollector(Node):
    
    def __init__(self):
        super().__init__('shore_comms')

        self.websocket:WebSocketClientProtocol = None
        self.data = {}
        self.logs = []
        self.alarms = []
        self.can_bus_state = CANBusStatus.OFFLINE

        self.alarm_publisher = alarm_helper.create_alarm_publisher(self)
        self.create_sub(Log, "/rosout", self.logs_collector)
        self.create_sub(BoatAlarm, "/alarm/shore/publish", self.alarms_collector)
        self.create_sub(ElectricalData, "/electrical/all_sensors", self.electrical_collector)
        self.create_sub(MotionData, "/motion/all_sensors", self.motion_collector)
        self.create_sub(CANMotorData, "/motors/can_motor_data", self.motor_collector)
        self.create_sub(CANBusStatus, "/motors/can_bus_state", self.bus_state_collector)
        self.wss_watchdog = self.create_timer(5, self.watchdog_callback)

        self.declare_parameter("data_send", 0.1, ParameterDescriptor(description='How often shore_comms should send data to the shore server.'))
        self.add_on_set_parameters_callback(self.on_param_change_callback)

        threading.Thread(target=self._run_asyncio_loop, daemon=True).start()

    def on_param_change_callback(self, param_list):
        self._logger.info("Data send rate was changed to " + str(param_list[0].value) + "s via a parameter callback")
        return SetParametersResult(successful=True)

    
    def create_sub(self, data_type, topic, callback):
        self._logger.info("Logging <" + topic + "> with custom msg of <" + data_type.__name__ + ">")
        self.create_subscription(data_type, topic, callback, 10)

    def _run_asyncio_loop(self):
        asyncio.run(self.start_background_shore_sender())
    
    def add_data(self, data_name, data):
        """
        Adds data to be sent to the shore server.
         param data_name - The name of the data as required by the ShoreAPI
         param data - The actual data to send
        """
        self.data[data_name] = data

    def add_alarm(self, error_code: int, timestamp):
        """
        Queues an alarm to be sent to the shore server.
         param error_code - The error code based on the spreadsheet
         param timestamp - The timestamp of when the alarm was issued
        """
        self.alarms.append((error_code, timestamp))


    async def start_background_shore_sender(self):
        """
        Starts the background task to send the data to the shore server. Is automatically called every DATA_SEND ms
        """
        self._logger.info(f"Attempting to connect to the Shore Server via a Websocket at {SHORE_URI}")
        async for self.websocket in connect(SHORE_URI):
            try:
                if not self.websocket.open:
                    self._logger.error("Unable to open a connect to the shore server.")
                    self._logger.error(f"Attempted URI: {SHORE_URI}. SHUTTING DOWN...")
                    self.alarm_publisher.publish_alarm(Alarm.WEBSOCKET_INITIAL_CONNECTION_FAILURE) # ALARM:
                    # Shore Comms Node Shutdown
                    self.destroy_node()
                    return
                await self.send_data_to_shore(False)
                self._logger.info(f"Connected to the websocket at {SHORE_URI} ✅")
                self._logger.info(f"Data will be sent every {self.get_parameter("data_send").value}s")
                while True:
                    await self.send_data_to_shore(True)
                    await self.send_alarms_to_shore(True)
                    await self.send_logs_to_shore()
                    await self.send_bus_state_to_shore()
                    await asyncio.sleep(self.get_parameter("data_send").value)
            except ConnectionClosed as e:
                # Will retry on some kind of failure
                self._logger.error(f"Websocket error: {e.reason}")
                self.alarm_publisher.publish_alarm(Alarm.WEBSOCKET_CONNECTION_CLOSED)
                continue
    
    def watchdog_callback(self):
        self._logger.debug("[Websocket Watchdog] running callback")
        if not hasattr(self, "websocket") or self.websocket is None:
            self._logger.warn("[Websocket Watchdog] Websocket is not opened yet...")
            self.alarm_publisher.publish_alarm(Alarm.WEBSOCKET_IS_NOT_INITIALLY_OPENED_YET) # ALARM:
            # Shore Comms Websocket failure

        elif not self.websocket.open:
            self._logger.error("[Websocket Watchdog] The shore server is not connected to the websocket.")
            self.alarm_publisher.publish_alarm(Alarm.WEBSOCKET_NOT_OPENED) # ALARM: Shore Comms Websocket failure

    async def send_data_to_shore(self, ignore_empty):
        if len(self.data) == 0 and ignore_empty:
            return
        output_data = {
            "type": "data",
            "payload" : self.data
        }
        await self.websocket.send(json.dumps(output_data))
        self.data.clear()

    async def send_alarms_to_shore(self, ignore_empty):
        if len(self.alarms) == 0 and ignore_empty:
            return
        #go through all alarms in the queue

        for alarm in self.alarms:
            output_data = {
            "type": "alarm",
            "action": "set",
            "payload" : {
                "id": alarm[0],
                "timestamp": alarm[1],
                "message": "<Check faults.csv for more information>",
                "type": "error"
                }   
            }
            try:
                await self.websocket.send(json.dumps(output_data))
                await self.websocket.ensure_open()
            except ConnectionClosed or InvalidStatus:
                self.alarm_publisher.publish_alarm(Alarm.WEBSOCKET_CONNECTION_CLOSED)
                # Keep alarms because data wasn’t sent
                return

        self.alarms.clear()

    async def send_logs_to_shore(self):
        if len(self.logs) == 0:
            return

        output_data = {
            "type": "log",
            "payload": self.logs
        }
        try:
            await self.websocket.send(json.dumps(output_data))
            await self.websocket.ensure_open()
        except ConnectionClosed or InvalidStatus:
            self.alarm_publisher.publish_alarm(Alarm.WEBSOCKET_CONNECTION_CLOSED)
            # Keep logs because data wasn’t sent
            return

        self.logs.clear()

    async def send_bus_state_to_shore(self):
        output_data = {
            "type": "can_bus",
            "state": self.can_bus_state
        }
        await self.websocket.send(json.dumps(output_data))


                    # IMPORTANT: Parameter name MUST be "msg"
    def electrical_collector(self, msg:ElectricalData):
        self.add_data("vbat", msg.vbat)
        self.add_data("vebat", msg.vebat)
        self.add_data("temp_bat", msg.temp_bat)
        self.add_data("battery_percent", msg.battery_percent)
        self.add_data("current_bat", msg.current_bat)
        self.add_data("bms_temp", msg.bms_temp)
        self.add_data("can_bus_util_percent", msg.can_bus_util_percent)

    def motion_collector(self, msg:MotionData):
        self.add_data("heading", msg.heading)
        self.add_data("gps_lat", msg.gps_lat)
        self.add_data("gps_alt", msg.gps_lat)
        self.add_data("gps_long", msg.gps_long)
        self.add_data("imu_x", msg.imu_x)
        self.add_data("imu_y", msg.imu_y)
        self.add_data("imu_z", msg.imu_z)
        self.add_data("speed", msg.speed)

    def motor_collector(self, msg:CANMotorData):
        self.add_data("voltage", msg.voltage)
        self.add_data("throttle_mv", msg.throttle_mv)
        self.add_data("throttle_percentage", msg.throttle_mv)
        self.add_data("rpm", msg.rpm)
        self.add_data("torque", msg.torque)
        self.add_data("motor_temp", msg.motor_temp)
        self.add_data("current", msg.current)
        self.add_data("power", msg.power)

    def bus_state_collector(self, msg:CANBusStatus):
        self.can_bus_state = msg.bus_state


    def alarms_collector(self, msg:BoatAlarm):
        self.add_alarm(msg.error_code, get_time_in_ms(msg.timestamp))

    def logs_collector(self, msg:Log):
        logged_data = {
            "timestamp": get_time_in_ms(msg.stamp),
            "msg": msg.msg,
            "file": msg.file,
            "function": msg.function,
            "line": msg.line,
            "level": msg.level,
            "name": msg.name
        }
        self.logs.append(logged_data)


def main(args=None):
    try:
        with rclpy.init(args=args):
            minimal_subscriber = ShoreDataCollector()
            rclpy.spin(minimal_subscriber)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass




if __name__ == '__main__':
    main()