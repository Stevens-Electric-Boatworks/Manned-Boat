import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import MotorData # type: ignore

import random
import json

class MotorNode(Node):
    def __init__(self):
        super().__init__('motor_node')
        self.publisher_ = self.create_publisher(MotorData, '/motors/all_sensors', 10)
        timer_period = random.random() * 0.2
        self._logger.info("Sending test data at a period of " + str(timer_period))
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = MotorData()
        msg.rpm_a = random.randint(800, 1800)
        msg.rpm_b = random.randint(800, 1800)
        # Make sure it is a float, or else you will get an eror without a stacktrace
        msg.propulsion_angle = float(random.randint(-90, 90))

        self.publisher_.publish(msg)


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotorNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
