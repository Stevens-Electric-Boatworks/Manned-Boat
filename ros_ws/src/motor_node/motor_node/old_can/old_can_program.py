from threading import Thread

import canopen

import serial
import math
import time

from boat_data_interfaces.msg import CANMotorData


# GatherData.py

# This program is for reading serial data from the arduino
# Any new sensor or data being read, must be added to the dictionaries below.
# All you must do is make sure the order in which it is getting printed corresponsd to the loop below



# They are using serial?

# == Ishaan

# ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1)


# def read_serial():
#     try:
#         line = ser.readline().decode('utf-8').strip()  # Read a line from the serial port
#         values = line.split(",")  # Split the line by commas
#
#         # Ensure we have the expected number of values before proceeding
#         if len(values) != 7:
#             return {
#                 'yaw': 0,
#                 'pitch': 0,
#                 'roll': 0,
#                 'ax': 0,
#                 'ay': 0,
#                 'az': 0,
#                 'heading': 0
#             }
#
#         # loop mentioned in desctiption
#         yaw, pitch, roll, ax, ay, az, heading = [float(v) for v in values]
#         #         print("good data:", values)
#         return {
#             'yaw': yaw,
#             'pitch': pitch,
#             'roll': roll,
#             'ax': ax,
#             'ay': ay,
#             'az': az,
#             'heading': heading
#         }
#     except UnicodeDecodeError:
#         print("Received invalid byte sequence. Skipping...")
#         return {'yaw': 0,
#                 'pitch': 0,
#                 'roll': 0,
#                 'ax': 0,
#                 'ay': 0,
#                 'az': 0,
#                 'heading': 0
#                 }
#     except ValueError:
#         print("Error in converting values. Skipping...")
#         return {'yaw': 0,
#                 'pitch': 0,
#                 'roll': 0,
#                 'ax': 0,
#                 'ay': 0,
#                 'az': 0,
#                 'heading': 0
#                 }


class OldCanProgram:
    def __init__(self):
        self.start_time = None
        self.can_thread = None
        self.node = None
        self.publisher = None

    def setup_can(self, logger, dummy_efp, publisher):
        self.publisher = publisher
        # Start with creating a new network representing one CAN bus
        network = canopen.Network()

        # Connect to the CAN bus
        network.connect(channel='0', bustype='kvaser')

        # Subscribe to messages
        network.subscribe(0, logger)

        # You can create a node with a known node-ID
        node_id = 6  # Replace with your node ID
        self.node = canopen.BaseNode402(node_id, canopen.import_od(dummy_efp)
                                        )  # Use a dummy EDS here
        network.add_node(self.node)

        self.can_thread = Thread(
            target=self.read_can_messages, args=publisher, daemon=True)
        self.can_thread.start()

    def read_can_messages(self, publisher):
        # Start with creating a new network representing one CAN bus
        self.start_time = round(time.time() * 1000)
        print("finished waiting: ", self.trial_num)
        while self.running_event.is_set():
            try:
                self.get_sdo_obj(self, publisher)
                time.sleep(0.1)
            except Exception as e:
                time.sleep(0.1)
                print(f"Error reading CAN message: {e}")

    # The SDO index (or address) is found in the parameters.csv file.
    def read_and_log_sdo(self, index, subindex):

        try:
            value = self.sdo[index][subindex].raw
            return value
        except Exception as e:
            print(f"Error reading SDO [{hex(index)}:{subindex}]: {e}")
            return 0

    # These are SDOs retrieved from the controller via CANbus using above function
    # There is a wide list of sensor data that can be read, but these are the useful ones.
    # Feel free to browse the parameter list which is in testing/parameters.csv
    def get_sdo_obj(self, publisher) -> dict:
        voltage = self.read_and_log_sdo(self.node, 0x2030, 2)  # Volts
        throttle_mv = self.read_and_log_sdo(self.node, 0x2013, 1)  # mV
        rpm = self.read_and_log_sdo(self.node, 0x2001, 2)  # rpm
        current = self.read_and_log_sdo(self.node, 0x2073, 1)  # Arms
        temperature = self.read_and_log_sdo(self.node, 0x2040, 2)  # deg C

        throttle_percent = throttle_mv / 2800  # %

        # this torque must be converted to lb*ft, because it is preferred
        torque = current * 0.15  # Nm

        power = (torque * rpm) * math.pi / 30000  # kW

        msg = CANMotorData()
        msg.voltage = voltage
        msg.throttle_mv = throttle_mv
        msg.throttle_percentage = throttle_percent
        msg.rpm = rpm
        msg.torque = torque
        msg.motor_temp = temperature
        msg.current = current
        msg.power = power

        publisher.publish(msg)

        sdo_data = {
            'voltage': voltage,
            'throttle_mv': throttle_mv,
            'throttle_percentage': throttle_percent,
            'RPM': rpm,
            'torque': torque,
            'motor_temp': temperature,
            'current': current,
            'power': power
        }
        return sdo_data
