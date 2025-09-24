import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import MotionData, BoatAlarm # type: ignore

import random
import json

class MotionNode(Node):
    def __init__(self):
        super().__init__('motion_node_test')
        self.publisher_ = self.create_publisher(MotionData, '/motion/all_sensors', 10)
        self.alarm_publisher_ = self.create_publisher(BoatAlarm, '/all_alarms', 10)
        timer_period = random.random() * 0.2
        self._logger.info("Sending test data at a period of " + str(timer_period))
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.alarm_timer = self.create_timer(8, self.alarm_callback)


    def timer_callback(self):
        msg = MotionData()
        msg.heading = random.randint(0, 360)
        msg.speed = 0 + random.randint(0, 30)
        msg.gps_lat = -8 + random.random() * 16
        msg.gps_long = -8 + random.random() * 16
        msg.gps_alt = -8 + random.random() * 16

        msg.imu_x = -90 + random.random() * 180
        msg.imu_y = -90 + random.random() * 180
        msg.imu_z = -90 + random.random() * 180

        self.publisher_.publish(msg)

    def alarm_callback(self):
        msg = BoatAlarm()
        msg.error_code = 4 # Motion Node Example Error
        msg.timestamp = self.get_clock().now().to_msg()
        self.alarm_publisher_.publish(msg)


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotionNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
