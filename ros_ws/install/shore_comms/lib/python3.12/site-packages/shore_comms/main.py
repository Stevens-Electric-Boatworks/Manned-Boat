import atexit
import datetime

from websockets.exceptions import ConnectionClosed
import rclpy
from rclpy.executors import ExternalShutdownException
import rclpy.logging
from rclpy.node import Node

from boat_data_interfaces.msg import ElectricalData, MotionData, MotorData, GPIOData, BoatAlarm  # type: ignore | caused by ide unable to find msg (??)

#Websockets
import asyncio
from websockets.client import connect
import json
import threading



SHORE_URI = "wss://eboat.thiagoja.com/api"
DATA_SEND = 0.4

class ShoreDataCollector(Node):
    
    def __init__(self):
        super().__init__('shore_subscriber')
        self.websocket = None
        self.data = {}
        self.alarms:websocket = []
        self.alarm_publisher = self.create_publisher(BoatAlarm, "/all_alarms", 10)
        self.create_sub(BoatAlarm, "/all_alarms", self.alarms_collector)
        self.create_sub(ElectricalData, "/electrical/all_sensors", self.electrical_collector)
        self.create_sub(MotionData, "/motion/all_sensors", self.motion_collector)
        self.create_sub(MotorData, "/motors/all_sensors", self.motor_collector)
        self.wss_watchdog = self.create_timer(5, self.watchdog_callback)

        threading.Thread(target=self.run_asyncio_loop, daemon=True).start()

    
    def create_sub(self, data_type, topic, callback):
        self.get_logger().info("Logging " + topic + " with custom msg of " + str(type(data_type)))
        self.create_subscription(data_type, topic, callback, 10)

    def run_asyncio_loop(self):
        asyncio.run(self.start_background_shore_sender())

    
    def add_data(self, data_name, data):
        """
        Adds data to be sent to the shore server.
        :param data_name - The name of the data as required by the ShoreAPI
        :param data - The actual data to send
        """
        self.data[data_name] = data
    
    def add_alarm(self, error_code: int, timestamp):
        """
        Queues an alarm to be sent to the shore server.
        :param error_code - The error code based on the spreadsheet
        :param timestamp - The timestamp of when the alarm was issued
        """
        self.alarms.append((error_code, timestamp))

    def declare_alarm(self, error_code):
        msg = BoatAlarm()
        msg.error_code = error_code
        msg.timestamp = self.get_clock().now().to_msg()
        self.alarm_publisher.publish(msg)


    async def start_background_shore_sender(self):
        """
        Starts the background task to send the data to the shore server. Is automatically called every DATA_SEND ms
        """
        self.get_logger().info(f"Attempting to connect to the Shore Server via a Websocket at {SHORE_URI}")
        async for self.websocket in connect(SHORE_URI):
            try:
                if not self.websocket.open:
                    self.get_logger().error("Unable to open a connect to the shore server.")
                    self.get_logger().error(f"Attempted URI: {SHORE_URI}. SHUTTING DOWN...")
                    self.declare_alarm(3) # ALARM: Shore Comms Node Shutdown
                    self.destroy_node()
                    return
                await self.send_data_to_shore(False)
                self.get_logger().info(f"Connected to the websocket at {SHORE_URI} ✅")
                while True:
                    await self.send_data_to_shore(True)
                    await self.send_alarms_to_shore(True)
                    await asyncio.sleep(DATA_SEND)
            except ConnectionClosed as e:
                self.get_logger().error(f"Unable to start the connection: {e.reason}")
                continue
    
    def watchdog_callback(self):
        self._logger.debug("[Websocket Watchdog] running callback")
        if self.websocket is None:
            self._logger.warn("[Websocket Watchdog] Websocket is not opened yet...")
            self.declare_alarm(2) # ALARM: Shore Comms Websocket failure

        elif not self.websocket.open:
            self._logger.error("[Websocket Watchdog] The shore server is not connected to the websocket.")
            self.declare_alarm(2) # ALARM: Shore Comms Websocket failure

    

    async def on_exit(self):
        self._logger.info("Shutting down the websocket.")
        if hasattr(self, "websocket"):
            await self.send_data_to_shore(False)
            await self.websocket.close()


    
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
                "message": "This is a test alarm",
                "type": "error"
                }   
            }
            self._logger.debug("The output data from sendAlarms() " + json.dumps(output_data))
            await self.websocket.send(json.dumps(output_data))
        self.alarms.clear()


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

    def motor_collector(self, msg:MotorData):
        self.add_data("rpm_a", msg.rpm_a)
        self.add_data("rpm_b", msg.rpm_b)
        self.add_data("propulsion_angle", msg.propulsion_angle)
    
    def alarms_collector(self, msg:BoatAlarm):
        self.add_alarm(msg.error_code, msg.timestamp.sec * 1000.0)
    



def main(args=None):
    try:
        with rclpy.init(args=args):
            minimal_subscriber = ShoreDataCollector()
            atexit.register(minimal_subscriber.on_exit)
            rclpy.spin(minimal_subscriber)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass




if __name__ == '__main__':
    main()