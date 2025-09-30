import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import ElectricalData # type: ignore

import random
import json

class ElectricalNode(Node):
    def __init__(self):
        super().__init__('electrical_node_test')
        self.publisher_ = self.create_publisher(ElectricalData, '/electrical/all_sensors', 10)
        timer_period = random.random() * 0.2
        self._logger.info("Sending test data at a period of " + str(timer_period))
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.vbat = 191
        self.vebat = 121
        self.temp_bat = 56
        self.battery_percent = 100.0
        self.current_bat = 150
        self.bms_temp = 48
        self.can_bus_util_percent = 77

    def timer_callback(self):
        msg = ElectricalData()
        self.vbat += float(random.randint(-3, 3))
        self.vebat += float(random.randint(-3, 3))
        self.temp_bat += float(random.randint(-2, 2))
        self.battery_percent -= random.random() * 0.1
        self.current_bat += random.randint(-10, 10)
        self.bms_temp += random.randint(-2, 2)
        self.can_bus_util_percent += random.randint(-1, 1)

        msg.vbat = self.vbat
        msg.vebat = self.vebat
        msg.temp_bat = self.temp_bat
        msg.battery_percent = int(self.battery_percent)
        msg.current_bat = self.current_bat
        msg.bms_temp = self.bms_temp
        msg.can_bus_util_percent = abs(self.can_bus_util_percent)

        self.publisher_.publish(msg)    

def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(ElectricalNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
