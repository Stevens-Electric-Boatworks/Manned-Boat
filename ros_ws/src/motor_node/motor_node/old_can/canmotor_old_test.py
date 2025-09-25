import canopen
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
        self._logger.warn("This node is using the code that was developed for the 2023 Boat. We should migrate to using ros2_canopen...")
        self.sensor_publisher_ = self.create_publisher(MotorData, '/motors/all_sensors', 10)
        self.alarm_publisher_ = self.create_publisher(BoatAlarm, '/all_alarms', 10)

    def setup_can(self):
        network = canopen.Network()
        # Start with creating a new network representing one CAN bus
        network = canopen.Network()

        # Connect to the CAN bus
        network.connect(channel='0', bustype='kvaser')

        # Subscribe to messages
        network.subscribe(0, self._logger.info)

        # You can create a node with a known node-ID
        node_id = 6  # Replace with your node ID
        node = canopen.BaseNode402(node_id, canopen.import_od('/home/pi/Manned_PEP/testing/69GUS222C00x05.epf')
                                   )  # Use a dummy EDS here
        network.add_node(node)


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotorNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
