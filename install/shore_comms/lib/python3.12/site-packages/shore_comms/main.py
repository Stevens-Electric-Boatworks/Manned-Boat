import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from gpio_interfaces.msg import GPIOResult # type: ignore

#Websockets
import asyncio
from websockets.client import connect
import json
from datetime import datetime



SHORE_URI = "wss://eboat.thiagoja.com/api"

class ShoreDataCollector(Node):
    
    def __init__(self):
        super().__init__('shore_subscriber')
        self.data = {};
        self.create_subscription(GPIOResult, '/gpio_result', self.gpioCollector, 10)
    
    def addData(self, dataName, data):
        """
        Adds data to be sent to the shore server.
        :param dataName - The name of the data as required by the ShoreAPI
        :param data - The actual data to send
        """
        self.data[dataName] = data

    
    async def startBackgroundShoreSender(self):
        """
        Starts the background task to send the data to the shore server. Is automatically called every 100ms
        """
 
        async with connect(SHORE_URI) as websocket:
            while True:
                outputData = {
                    "type": "data",
                    "payload" : self.data
                }
                self.data.clear()
                await websocket.send(json.dumps(outputData))
                await asyncio.sleep(0.1)

        
    def gpioCollector(self, data:GPIOResult):
        self.addData("coolant_temp", data.temp)
        # self.addData
        pass



def main(args=None):
    try:
        with rclpy.init(args=args):
            minimal_subscriber = ShoreDataCollector()

            rclpy.spin(minimal_subscriber)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass




if __name__ == '__main__':
    main()