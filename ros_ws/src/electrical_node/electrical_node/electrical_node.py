import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

# pip install pyserial (should be installed by default)
import serial

from boat_data_interfaces.msg import InletCoolantData, OutletCoolantData


class ElectricalNode(Node):
    def __init__(self):
        super().__init__('electrical_node')
        self._out_pub = self.create_publisher(OutletCoolantData, '/electrical/temp_sensors/out', 10)
        self._in_pub = self.create_publisher(InletCoolantData, '/electrical/temp_sensors/in', 10)
        # Verify serial directory with pi
        self.serA = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
        self.serB = serial.Serial('/dev/ttyACM1', 115200, timeout=1)
        self.serA.flush()
        self.serB.flush()

        self.out_temp = float(-275.4)
        self.in_temp = float(-275.4)
        self.create_timer(0.1, self.read_a)
        self.create_timer(0.1, self.read_b)
        self._logger.info("running the timer")

    def read_a(self):
        if self.serA.in_waiting > 0:
            data = self.serA.readline().decode('utf-8').strip()
            self.pub_data(data)

    def read_b(self):
        if self.serB.in_waiting > 0:
            data = self.serB.readline().decode('utf-8').strip()
            self.pub_data(data)

    def pub_data(self, data):
        if data[0] == 'I':
            self.in_temp = float(data[1])
            self._in_pub.publish(InletCoolantData(inlet_temp=self.in_temp))
        elif data[0] == 'O':
            self.out_temp = float(data[1])
            self._out_pub.publish(OutletCoolantData(outlet_temp=self.out_temp))

def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(ElectricalNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()