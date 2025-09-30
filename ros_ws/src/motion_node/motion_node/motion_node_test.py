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
        self.heading = 0
        self.speed = 15
        self.gps_lat = 0
        self.gps_long = 0
        self.gps_alt = 0
        self.imu_x = 0
        self.imu_y = 0
        self.imu_z = 0


    def timer_callback(self):
        msg = MotionData()
        self.heading += random.randint(-3, 3)
        self.speed += random.randint(-1, 1)
        self.gps_lat += abs(random.randint(-1, 1))
        self.gps_long += abs(random.randint(-1, 1))
        self.gps_alt += abs(random.randint(-1, 1))

        self.imu_x = random.randint(-1, 1) % 360
        self.imu_y = random.randint(-1, 1) % 360
        self.imu_z = random.randint(-1, 1) % 360

        msg.heading = self.heading
        msg.speed = abs(self.speed)
        msg.gps_lat = float(self.gps_lat)
        msg.gps_long = float(self.gps_long)
        msg.gps_alt = float(self.gps_alt)
        msg.imu_x = float(self.imu_x)
        msg.imu_y = float(self.imu_y)
        msg.imu_z = float(self.imu_z)

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
