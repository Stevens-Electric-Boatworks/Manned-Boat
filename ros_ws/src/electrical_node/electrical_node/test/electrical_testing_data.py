import random

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException

from boat_common_libs.smooth_random import SmoothRandom
from boat_data_interfaces.msg import CANMotorData, CANBusStatus, CoolantData


class ElectricalTestingDataNode(Node):
    def __init__(self):
        super().__init__("electrical_testing_data")
        self._logger.info("Sending test data for /electrical/temp_sensors")
        self.randoms = {
            "inlet_temp": SmoothRandom(20, 0.8, -30, 50),
            "outlet_temp": SmoothRandom(30, 0.5, -30, 50),
        }
        self._temp_publisher = self.create_publisher(CoolantData, '/electrical/temp_sensors', 10)
        self.create_timer(0.5, self.publish_test_data)

    def publish_test_data(self):
        msg = CoolantData()
        msg.inlet_temp = int(self.randoms["inlet_temp"].next())
        msg.outlet_temp = int(self.randoms["outlet_temp"].next())

        self._temp_publisher.publish(msg)

def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(ElectricalTestingDataNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()