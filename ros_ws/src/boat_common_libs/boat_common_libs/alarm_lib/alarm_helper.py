from enum import Enum

import rclpy
from rclpy.node import Node

from boat_common_libs.alarm_lib.alarms import Alarm
from boat_data_interfaces.msg import BoatAlarm
from boat_data_interfaces.srv import AlarmRaise


class AlarmResult(Enum):
    STICKY_NOT_RAISED_BEFORE=0
    """
    Means that this alarm is a sticky alarm, but has not been raised yet. 
    As such, it will be published to the shore computer
    """
    STICKY_ALREADY_RAISED=1
    """
    Means that this alarm is a sticky alarm, but HAS been raised before.
    As such, it will NOT be published to the shore computer
    """

    RAISED=2
    """
    Means that this is a basic alarm that has been raised.
    As such, it will be published to the shore computer
    """

    UNKNOWN = -1
    """
    The alarm is not known, but is still logged as occuring.
    As such, it will NOT be published to the shore computer
    """

class AlarmPublisher:
    def __init__(self, node: Node):
        self._node = node
        self._publisher = node.create_client(AlarmRaise, "/alarm/publish")
        connect_attempts = 3
        while not self._publisher.wait_for_service(timeout_sec=1.0) and connect_attempts > 0:
            node.get_logger().info(f'[ALARM LIB] Alarm Service not available, waiting again ({connect_attempts} attempts remaining)...')
            connect_attempts -= 1


    def publish_alarm(self, alarm: Alarm, ignore_result:bool = True) -> AlarmResult | None:
        """
        Publishes an alarm with the specified Alarm. It will then return the result of the alarm if ignore_result = false
        If ignore_result == true, then the method will return None
        If ignore_result == false, then the method will return AlarmResult
        """

        # https://docs.ros.org/en/kilted/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html
        req = AlarmRaise.Request()
        alarm_msg = BoatAlarm()
        alarm_msg.timestamp = self._node.get_clock().now().to_msg()
        alarm_msg.error_code = alarm.value
        req.alarm = alarm_msg

        if ignore_result:
            self._publisher.call_async(req)
            return None
        else:
            future = self._publisher.call_async(req)
            rclpy.spin_until_future_complete(self._node, future)
            response:AlarmRaise.Response = future.result()
            return AlarmResult(response.result)


def create_alarm_publisher(node: Node) -> AlarmPublisher:
    return AlarmPublisher(node)
