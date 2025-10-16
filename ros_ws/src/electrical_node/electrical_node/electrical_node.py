import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from boat_data_interfaces.msg import CoolantData

# pip install pyserial (should be installed by default)
import serial


class ElectricalNode(Node):
    def __init__(self):
        super().__init__('electrical_node')
        self._publisher = self.create_publisher(CoolantData, '/electrical/temp_sensors', 10)
        # Verify serial directory with pi
        self.ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
        self.ser.flush()

        self.create_timer(0.05, self.read_temp_data)
        self._logger.info("running the timer")

    def read_temp_data(self):
        if self.ser.in_waiting > 0:
            data = self.ser.readline().decode('utf-8').strip()
            result = data.split(',')
            msg = CoolantData()
            msg.inlet_temp = float(result[0])
            msg.outlet_temp = float(result[1])
            
            self._logger.info(f"Publishing {result[0]} and {result[1]}")
            self._publisher.publish(msg)


def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(ElectricalNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()