import rclpy
from rcl_interfaces.msg import ParameterDescriptor
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from boat_common_libs.alarms import Alarm
from boat_data_interfaces.msg import MotorData, BoatAlarm, CANMotorData, CANBusStatus  # type: ignore

import os

from motor_node.old_can_program import OldCanProgram


class MotorNode(Node):
    def __init__(self):
        super().__init__('motor_node')
        self._logger.warn("This node is using the code that was developed for the 2023 Boat. We should migrate to using ros2_canopen...")
        self.can_motor_publisher_ = self.create_publisher(CANMotorData, '/motors/can_motor_data', 10)
        self._alarm_publisher = self.create_publisher(BoatAlarm, '/all_alarms', 10)
        self.can_bus_status_publisher = self.create_publisher(CANBusStatus, '/motors/can_bus_state', 10)
        description = ParameterDescriptor(description='Defines where to find the exact file the dummy epf data is')
        self.declare_parameter('dummy_epf', '~/eboat_src/data/dummy.epf', description)

        file_path = self.get_parameter('dummy_epf').get_parameter_value().string_value
        self.old_can = OldCanProgram(self._logger, os.path.expanduser(file_path), self.can_motor_publisher_, self.context.ok, self.declare_alarm, rclpy.shutdown)
        self.old_can.setup_can()
        self.create_timer(0.5, self.publish_bus_state)

    def publish_bus_state(self):
        msg = CANBusStatus()
        msg.bus_state = self.old_can.get_bus_state()
        self.can_bus_status_publisher.publish(msg)


    def declare_alarm(self, error_code:Alarm):
        msg = BoatAlarm()
        msg.error_code = error_code.value
        msg.timestamp = self.get_clock().now().to_msg()
        self._alarm_publisher.publish(msg)

def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotorNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
