import json
import os
import rclpy
from rcl_interfaces.msg import ParameterDescriptor
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import BoatAlarm # type: ignore

import csv


class AlarmsWatchdog(Node):
    def __init__(self):
        super().__init__('alarms_watchdog')
        description = ParameterDescriptor(description='Defines where to find the exact file for the fault codes csv')
        self.declare_parameter('faults_file', '~/eboat_src/data/FAULTS.csv', description)
        # Error Code, Type, Message
        self.codes = {}
        self.load_csv_file()
        self.create_subscription(BoatAlarm, "/all_alarms", callback=self.on_alarm, qos_profile=10)
    
    def on_alarm(self, msg:BoatAlarm):
        if not self.codes.__contains__(msg.error_code):
            self._logger.error("An unknown alarm was raised with error code " + str(msg.error_code))
            return
        error_type = self.codes[msg.error_code][0]
        error_message = self.codes[msg.error_code][1]
        if error_type == "FAULT":
            self._logger.error("Alarm was raised:\n\tError Code: " + str(msg.error_code) + "\n\tDescription: " + error_message + "\n\tSeverity: " + error_type)
        else:
            self._logger.warn("Alarm was raised:\n\tError Code: " + str(msg.error_code) + "\tDescription: " + error_message + "\tSeverity: " + error_type)
        pass


    def load_csv_file(self):
        file_path = self.get_parameter('faults_file').get_parameter_value().string_value
        file_path = os.path.expanduser(file_path)
        self._logger.info("Attempting to load " + file_path)
        with open(file_path, 'r') as file:
            reader = csv.DictReader(file)
            i = 0
            for row in reader:
                self.codes[int(row["ID"])] = (row['Type'], row['Message'])
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
