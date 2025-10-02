import rclpy
from rcl_interfaces.msg import ParameterDescriptor
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import MotorData, BoatAlarm, CANMotorData  # type: ignore

import os

from motor_node import old_can_program


class MotorNode(Node):
    def __init__(self):
        super().__init__('motor_node')
        self._logger.warn("This node is using the code that was developed for the 2023 Boat. We should migrate to using ros2_canopen...")
        self.sensor_publisher_ = self.create_publisher(MotorData, '/motors/all_sensors', 10)
        self.can_motor_publisher_ = self.create_publisher(CANMotorData, '/motors/can_motor_data', 10)
        self.alarm_publisher_ = self.create_publisher(BoatAlarm, '/all_alarms', 10)
        description = ParameterDescriptor(description='Defines where to find the exact file the dummy epf data is')
        self.declare_parameter('dummy_epf', '/data/dummy.epf', description)

        file_path = self.get_parameter('dummy_epf').get_parameter_value().string_value
        old_can = old_can_program.OldCanProgram(self._logger, os.path.expanduser(file_path), self.can_motor_publisher_)
        old_can.setup_can()


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotorNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
