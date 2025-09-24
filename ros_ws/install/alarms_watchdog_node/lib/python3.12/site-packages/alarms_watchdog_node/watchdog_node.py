import json
import os
import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from boat_data_interfaces.msg import BoatAlarm # type: ignore

import csv
from ament_index_python import get_package_share_directory


class AlarmsWatchdog(Node):
    def __init__(self):
        super().__init__('alarms_watchdog')
        # Error Code, Type, Message
        self.codes = {}
        self.loadCSVFile()
        self.create_subscription(BoatAlarm, "/all_alarms", callback=self.onAlarm, qos_profile=10)
    
    def onAlarm(self, msg:BoatAlarm):
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


    def loadCSVFile(self):
        self._logger.info("Attempting to load FAULTS.csv")
        
        cwd = os.getcwd()
        file_path = os.path.join(cwd,'src/alarms_watchdog_node/data/FAULTS.csv')
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
