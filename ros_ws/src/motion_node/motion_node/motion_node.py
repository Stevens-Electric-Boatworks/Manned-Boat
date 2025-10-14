import pynmea2
import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from boat_data_interfaces.msg import MotionData, BoatAlarm # type: ignore

import random
import json
import serial

#pip install --break-system-packages pynmea2

class MotionNode(Node):
    def __init__(self):
        super().__init__('motion_node')
        self.publisher_ = self.create_publisher(MotionData, '/motion/all_sensors', 10)
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
        msg = MotionData()


        if self.ser.in_waiting > 0:
            received_data = self.ser.readline().decode('utf-8').strip()
            if received_data.startswith("$GPGGA"):
                msg = pynmea2.parse(received_data)
                if msg.lat != '':
                    lat = float(msg.lat) / 100
                else:
                    lat = ''
                    
                if msg.lon != '':
                    long = float(msg.lon) / 100
                else:
                    long = ''
                
                self._logger.info(f"Received: {received_data}")
                self._logger.info(f"LAT: {lat}")
                self._logger.info(f"LONG: {long}")
                self._logger.info(f"TIME: {msg.timestamp}")
                

        # self.publisher_.publish(msg)
        
        


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(MotionNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
