import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import ElectricalData # type: ignore

import random
import json

from boat_common_libs.smooth_random import SmoothRandom

class ElectricalNode(Node):
    def __init__(self):
        super().__init__('electrical_node_test')
        self.publisher_ = self.create_publisher(ElectricalData, '/electrical/all_sensors', 10)
        timer_period = random.random() * 0.1
        self._logger.info("Sending test data at a period of " + str(timer_period))
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.vbat = SmoothRandom(start=191.0, step=1.5, low=180.0, high=200.0)
        self.vebat = SmoothRandom(start=121.0, step=1.5, low=110.0, high=130.0)
        self.temp_bat = SmoothRandom(start=56.0, step=1.0, low=40.0, high=70.0)
        self.battery_percent = SmoothRandom(start=100.0, step=-0.3, low=0.0, high=100.0)
        self.current_bat = SmoothRandom(start=150.0, step=5.0, low=0.0, high=255.0) # Range for uint8
        self.bms_temp = SmoothRandom(start=48.0, step=1.0, low=40.0, high=60.0)
        self.can_bus_util_percent = SmoothRandom(start=77.0, step=2.0, low=0.0, high=100.0)

    def timer_callback(self):
        """
        This function is called periodically to publish new sensor data,
        ensuring all values match the required message data types.
        """
        msg = ElectricalData()

        # Target: float32 vbat
        msg.vbat = self.vbat.next()

        # Target: float32 vebat
        msg.vebat = self.vebat.next()

        # Target: float32 temp_bat
        msg.temp_bat = self.temp_bat.next()
        
        # Target: uint8 battery_percent
        msg.battery_percent = int(self.battery_percent.next())
        
        # Target: uint8 current_bat
        msg.current_bat = int(self.current_bat.next())
        
        # Target: int16 bms_temp
        msg.bms_temp = int(self.bms_temp.next())
        
        # Target: uint8 can_bus_util_percent
        msg.can_bus_util_percent = int(self.can_bus_util_percent.next())
        
        self.publisher_.publish(msg)

def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(ElectricalNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
