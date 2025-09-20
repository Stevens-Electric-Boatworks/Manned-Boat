import rclpy
from rclpy.executors import ExternalShutdownException
import rclpy.logging
from rclpy.node import Node

from boat_data_interfaces.msg import ElectricalData, MotionData

#Websockets
import asyncio
from websockets.client import connect
import json
from datetime import datetime

import threading



SHORE_URI = "wss://eboat.thiagoja.com/api"
DATA_SEND = 0.35

class ShoreDataCollector(Node):
    
    def __init__(self):
        super().__init__('shore_subscriber')
        self.data = {};
        self.create_sub(ElectricalData, "/electrical/all_sensors", self.electrical_collector)
        self.create_sub(MotionData, "/motion/all_sensors", self.motion_collector)
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


    async def start_background_shore_sender(self):
        """
        Starts the background task to send the data to the shore server. Is automatically called every 100ms
        """
        self.get_logger().info("Started the background task to send logging data to the shore.")

        self.websocket = await connect(SHORE_URI)
        if self.websocket.open == False:
            self.get_logger().error("Unable to open a connect to the shore server.")
            self.get_logger().error("Attempted URI: " + SHORE_URI + ". SHUTTING DOWN...")
            self.destroy_node()

        while(True):
            await self.sendData()
            await asyncio.sleep(DATA_SEND)
    
    async def sendData(self):
        if len(self.data) == 0:
            return
        outputData = {
            "type": "data",
            "payload" : self.data
        }
        await self.websocket.send(json.dumps(outputData))
        self.data.clear()


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



def main(args=None):
    try:
        with rclpy.init(args=args):
            minimal_subscriber = ShoreDataCollector()
            rclpy.spin(minimal_subscriber)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass




if __name__ == '__main__':
    main()