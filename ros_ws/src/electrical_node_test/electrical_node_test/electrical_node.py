import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import ElectricalData # type: ignore

import random
import json

class ElectricalNode(Node):
    def __init__(self):
        super().__init__('electrical_node')
        self.publisher_ = self.create_publisher(ElectricalData, 'electrical/all_sensors', 10)
        timer_period = random.random() * 0.75
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = ElectricalData()
        msg.vbat = random.randint(0, 72)
        msg.vebat = random.randint(0, 72)
        msg.temp_bat = -8 + random.random() * 16
        msg.battery_percent = random.randint(0, 100)
        msg.current_bat = random.randint(0, 750)
        msg.bms_temp = -8 + random.random() * 16
        msg.can_bus_util_percent = random.randint(0, 100)

        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % json.dumps(msg))


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(ElectricalNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
