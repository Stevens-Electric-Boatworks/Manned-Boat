import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from gpio_interfaces.msg import GPIOResult # type: ignore

#Websockets
import asyncio
from websockets.client import connect
import json


class MinimalSubscriber(Node):
    
    def __init__(self):
        super().__init__('shore_subscriber')
        self.subscription = self.create_subscription(
            GPIOResult,
            '/gpio_result',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.runWebSocket()
    
    def runWebSocket(self):
        asyncio.run(self.connect_to_websocket_server())
    

    def listener_callback(self, msg: GPIOResult):
        self.get_logger().info('I heard: "%s"' % msg.temp)
        
    
    async def connect_to_websocket_server(self):
        uri = "wss://eboat.thiagoja.com/api" 
        async with connect(uri) as websocket:
            while True:
                data = {"type": "data",
                "payload": {
                    "speed": 28
                    }
                }
                print("sent + " + str(data))
                await websocket.send(json.dumps(data))

def main(args=None):
    try:
        with rclpy.init(args=args):
            minimal_subscriber = MinimalSubscriber()

            rclpy.spin(minimal_subscriber)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass




if __name__ == '__main__':
    main()