import pynmea2
import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from boat_data_interfaces.msg import MotionData, BoatAlarm, GPSData

import random
import json
import serial

#pip install --break-system-packages pynmea2

class MotionNode(Node):
    def __init__(self):
        super().__init__('motion_node')
        self.publisher_ = self.create_publisher(GPSData, '/motion/gps', 10)
        self._logger.info("Attempting to read REAL GPS Data")
        self.create_timer(0.01, self.timer_callback)
        self.ser = serial.Serial(
            port='/dev/ttyUSB1',
            baudrate=115200,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
            bytesize=serial.EIGHTBITS,
            timeout=1
        )

    def timer_callback(self):
        if self.ser.in_waiting > 0:
            received_data = self.ser.readline().decode('utf-8').strip()
            if received_data.startswith("$GPGGA"):
                msg = pynmea2.parse(received_data)
                if msg.lat != '':
                    lat = self._truncate(float(msg.lat) / 100, 5)
                    lon = self._truncate(float(msg.lon) / 100, 5)
                    msg = GPSData()
                    msg.lat = lat
                    msg.lon = lon
                    self.publisher_.publish(msg)
                else:
                    msg = GPSData()
                    msg.lat = float(0)
                    msg.lon = float(0)
                    self.publisher_.publish(msg)

    def _truncate(self, float, shift):
        shifted_number = float * (10 ** shift)

        # Truncate using int() to remove the fractional part
        truncated_integer = int(shifted_number)

        # Divide by 100 to shift the decimal places back
        truncated_float = truncated_integer / (10 ** shift)
        return float(truncated_float)


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotionNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
