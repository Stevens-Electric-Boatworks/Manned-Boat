import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from builtin_interfaces.msg import Time
from boat_data_interfaces.msg import MotorData, BoatAlarm  # type: ignore

import random
import json


class MotorNode(Node):
    def __init__(self):
        super().__init__('motor_node')
        self.sensor_publisher_ = self.create_publisher(MotorData, '/motors/all_sensors', 10)
        self.alarm_publisher_ = self.create_publisher(BoatAlarm, '/all_alarms', 10)

    


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotorNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
