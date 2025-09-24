import atexit
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
from datetime import datetime

import threading



SHORE_URI = "wss://eboat.thiagoja.com/api"
DATA_SEND = 0.4

class ShoreDataCollector(Node):
    
    def __init__(self):
        super().__init__('shore_subscriber')
        self.data = {}
        self.alarms = []
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

    
    def addData(self, dataName, data):
        """
        Adds data to be sent to the shore server.
        :param dataName - The name of the data as required by the ShoreAPI
        :param data - The actual data to send
        """
        self.data[dataName] = data
    
    def addAlarm(self, error_code: int, timestamp):
        """
        Queues an alarm to be sent to the shore server.
        :param error_code - The error code based on the spreadsheet
        :param timestamp - The timestamp of when the alarm was issued
        """
        self.alarms.append((error_code, timestamp))


    async def start_background_shore_sender(self):
        """
        Starts the background task to send the data to the shore server. Is automatically called every DATA_SEND ms
        """
        self.get_logger().info(f"Attempting to connect to the Shore Server via a Websocket at {SHORE_URI}")
        async for self.websocket in connect(SHORE_URI):
            try:
                if self.websocket.open == False:
                    self.get_logger().error("Unable to open a connect to the shore server.")
                    self.get_logger().error(f"Attempted URI: {SHORE_URI}. SHUTTING DOWN...")
                    self.destroy_node()
                    return
                await self.sendData(False)
                self.get_logger().info(f"Connected to the websocket at {SHORE_URI} ✅")
                while(True):
                    await self.sendData(True)
                    await self.sendAlarms(True)
                    await asyncio.sleep(DATA_SEND)
            except ConnectionClosed as e:
                self.get_logger().error(f"Unable to start the connection: {e.reason}")
                continue
    
    def watchdog_callback(self):
        self._logger.debug("[Websocket Watchdog] running callback")
        if not hasattr(self, "websocket"):
            self._logger.warn("[Websocket Watchdog] Websocket is not opened yet...")
            
        elif not self.websocket.open:
            self._logger.error("[Websocket Watchdog] The shore server is not connected to the websocket.")
    
    def on_exit(self):
        self._logger.info("Shutting down the websocket.")
        if hasattr(self, "websocket"):
            v = self.sendData(False)
            v = self.websocket.close()


    
    async def sendData(self, ignore_empty):
        if len(self.data) == 0 and ignore_empty:
            return
        outputData = {
            "type": "data",
            "payload" : self.data
        }
        await self.websocket.send(json.dumps(outputData))
        self.data.clear()

    async def sendAlarms(self, ignore_empty):
        if len(self.alarms) == 0 and ignore_empty:
            return
        #go through all alarms in the queue
        for alarm in self.alarms:
            outputData = {
            "type": "alarm",
            "action": "set",
            "payload" : {
                "id": alarm[0],
                "timestamp": alarm[1],
                "message": "This is a test alarm",
                "type": "error"
                }   
            }
            self._logger.debug("The output data from sendAlarms() " + json.dumps(outputData))
            await self.websocket.send(json.dumps(outputData))
        self.alarms.clear()



                    # IMPORTANT: Parameter name MUST be "msg"
    def electrical_collector(self, msg:ElectricalData):
        self.addData("vbat", msg.vbat)
        self.addData("vebat", msg.vebat)
        self.addData("temp_bat", msg.temp_bat)
        self.addData("battery_percent", msg.battery_percent)
        self.addData("current_bat", msg.current_bat)
        self.addData("bms_temp", msg.bms_temp)
        self.addData("can_bus_util_percent", msg.can_bus_util_percent)

    def motion_collector(self, msg:MotionData):
        self.addData("heading", msg.heading)
        self.addData("gps_lat", msg.gps_lat)
        self.addData("gps_alt", msg.gps_lat)
        self.addData("gps_long", msg.gps_long)
        self.addData("imu_x", msg.imu_x)
        self.addData("imu_y", msg.imu_y)
        self.addData("imu_z", msg.imu_z)
        self.addData("speed", msg.speed)

    def motor_collector(self, msg:MotorData):
        self.addData("rpm_a", msg.rpm_a)
        self.addData("rpm_b", msg.rpm_b)
        self.addData("propulsion_angle", msg.propulsion_angle)
    
    def alarms_collector(self, msg:BoatAlarm):
        self.addAlarm(msg.error_code, msg.timestamp.sec * 1000.0)
    



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