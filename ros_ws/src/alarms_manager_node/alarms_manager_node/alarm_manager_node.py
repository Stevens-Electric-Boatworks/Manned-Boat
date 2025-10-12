import json
import os
import rclpy
from rcl_interfaces.msg import ParameterDescriptor
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from boat_data_interfaces.msg import BoatAlarm

import csv

from boat_data_interfaces.srv import AlarmRaise

class AlarmsWatchdog(Node):
    def __init__(self):
        super().__init__('alarms_watchdog')
        description = ParameterDescriptor(description='Defines where to find the exact file for the fault codes csv')
        self.declare_parameter('faults_file', '~/eboat_src/data/FAULTS.csv', description)
        # Error Code, Type, Message
        self.codes = {}
        self.load_csv_file()
        self.raised_sticky_alarms = set({})

        self.create_service(AlarmRaise, "/alarm/publish", self.on_alarm_raise)
        self.shore_pub = self.create_publisher(BoatAlarm, "/alarm/shore/publish", 10)


    def on_alarm_raise(self, request:AlarmRaise.Request, response: AlarmRaise.Response) -> AlarmRaise.Response:
        alarm = request.alarm
        if not self.codes.__contains__(alarm.error_code):
            self._logger.error("An unknown alarm was raised with error code " + str(alarm.error_code))
            response.result = AlarmRaise.Response.UNKNOWN
            return response

        error_code = alarm.error_code
        error_type = self.codes[alarm.error_code][0]
        error_message = self.codes[alarm.error_code][1]
        sticky = self.codes[alarm.error_code][3]
        if error_type == "FAULT":
            self._logger.error("Alarm was raised:\n\tError Code: " + str(error_code) + "\n\tDescription: " + error_message + "\n\tSeverity: " + error_type)
        else:
            self._logger.warn("Alarm was raised:\n\tError Code: " + str(error_code) + "\tDescription: " + error_message + "\tSeverity: " + error_type)

        already_raised = self.raised_sticky_alarms.__contains__(error_code)
        if sticky and already_raised:
            self._logger.info(f"Alarm ID {error_code} is sticky, and has already been raised")
            response.result = AlarmRaise.Response.STICKY_ALREADY_RAISED
            return response
        elif sticky and not already_raised:
            response.result = AlarmRaise.Response.STICKY_NOT_RAISED_BEFORE
            self.raised_sticky_alarms.add(error_code)
        else:
            response.result = AlarmRaise.Response.RAISED

        self.shore_pub.publish(alarm)
        return response




    def load_csv_file(self):
        file_path = self.get_parameter('faults_file').get_parameter_value().string_value
        file_path = os.path.expanduser(file_path)
        self._logger.info("Attempting to load " + file_path)
        with open(file_path, 'r') as file:
            reader = csv.DictReader(file)
            i = 0
            for row in reader:
                if len(row["ID"]) == 0:
                    continue
                self.codes[int(row["ID"])] = (row['Type'], row['Message'], row['Condition'], row['Sticky'])
                i += 1
        
        self._logger.info("Loaded " + str(i) + " error codes from faults.csv")
        self._logger.info("All Error Codes: " + json.dumps(self.codes, indent=2))



def main(args=None):
    try:
        with rclpy.init(args=args):
            rclpy.spin(AlarmsWatchdog())
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    print("Starting!!")
    main()
