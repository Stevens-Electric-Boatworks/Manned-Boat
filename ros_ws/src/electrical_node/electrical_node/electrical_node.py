import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from boat_data_interfaces.msg import CoolantData


class ElectricalNode(Node):
    def __init__(self):
        super().__init__('electrical_node')
        self._publisher = self.create_publisher(CoolantData, '/electrical/temp_sensors', 10)
        self.create_timer(0.5, self.read_temp_data)

    def read_temp_data(self):
        msg = CoolantData()
        msg.inlet_temp = 5
        msg.outlet_temp = 10
        self._publisher.publish(msg)

def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(ElectricalNode())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
