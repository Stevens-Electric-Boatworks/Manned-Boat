import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from boat_common_libs.smooth_random import SmoothRandom
from boat_data_interfaces.msg import MotionData, BoatAlarm # type: ignore

import random
import json

class MotionNode(Node):
    def __init__(self):
        super().__init__('motion_node_test')
        self.publisher_ = self.create_publisher(MotionData, '/motion/all_sensors', 10)
        timer_period = random.random() * 0.1
        self._logger.info("Sending test data at a period of " + str(timer_period))
        self.timer = self.create_timer(timer_period, self.timer_callback)
        # NOTE: int8 is a very small range (-128 to 127) for a heading.
        # The data will be clamped within this range.
        self.heading = SmoothRandom(start=0, step=2, low=0, high=360)

        # uint8 range is 0-255.
        self.speed = SmoothRandom(start=15, step=1, low=0, high=50)

        # GPS coordinates initialized near Hoboken, NJ for realistic test data.
        # The step is very small to simulate realistic movement.
        self.gps_lat = SmoothRandom(start=40.744, step=0.0001, low=40.74, high=40.75)
        self.gps_long = SmoothRandom(start=-74.032, step=0.0001, low=-74.04, high=-74.02)
        self.gps_alt = SmoothRandom(start=10, step=0.5, low=5, high=15)

        # IMU data simulated as small fluctuations around 0.
        self.imu_x = SmoothRandom(start=0, step=0.5, low=-5, high=5)
        self.imu_y = SmoothRandom(start=0, step=0.5, low=-5, high=5)
        self.imu_z = SmoothRandom(start=0, step=0.5, low=-5, high=5)

    def timer_callback(self):
        msg = MotionData()

        # Get next value and cast to the correct message type

        # Target: int8 heading
        msg.heading = int(self.heading.next())

        # Target: uint8 speed
        msg.speed = int(self.speed.next())

        # Target: float32 gps_lat, gps_long, gps_alt
        msg.gps_lat = float(self.gps_lat.next())
        msg.gps_long = float(self.gps_long.next())
        msg.gps_alt = float(self.gps_alt.next())

        # Target: float32 imu_x, imu_y, imu_z
        msg.imu_x = float(self.imu_x.next())
        msg.imu_y = float(self.imu_y.next())
        msg.imu_z = float(self.imu_z.next())

        self.publisher_.publish(msg)


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotionNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
