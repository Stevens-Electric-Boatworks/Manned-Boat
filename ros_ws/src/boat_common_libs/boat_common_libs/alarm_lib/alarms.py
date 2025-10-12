from enum import Enum

class Alarm(Enum):
    """Enumeration of system alarms and faults."""

    UNKNOWN_FAULT = -1
    """FAULT: Unknown Fault — Only if there is an unknown fault code that is published."""

    UNKNOWN_WARNING = 0
    """WARN: Unknown Warning — Only if there is an unknown warning code that is published."""

    WEBSOCKET_INITIAL_CONNECTION_FAILURE = 1
    """FAULT: Websocket Initial Connection Failure — Unable to open a connection to the shore server."""

    WEBSOCKET_CONNECTION_CLOSED = 2
    """FAULT: Websocket Connection Closed — The websocket connection unexpectedly closed."""

    WEBSOCKET_IS_NOT_INITIALLY_OPENED_YET = 3
    """WARN: Websocket Is Not Initially Opened Yet — Websocket is still waiting to be opened."""

    WEBSOCKET_NOT_OPENED = 4
    """FAULT: Websocket Not Opened — Websocket is reported as no longer open."""

    CAN_MOTOR_NODE_SHUTDOWN = 10
    """FAULT: CAN Motor Node Shutdown — The motor node had to shut down due to a fatal error."""

    CAN0_INTERFACE_NOT_UP = 11
    """FAULT: 'can0' Interface Not Up — If `ip link status can0` does not have `status UP`."""

    INVALID_CAN_PACKET_READ = 12
    """WARN: Invalid CAN Packet Read — A `canerror` was thrown by the underlying `canopen` library."""

    ERROR_READING_CAN_SDO = 13
    """WARN: Error Reading CAN SDO — Caused by an invalid CAN SDO."""

    FAILED_CAN_NETWORK_INIT = 14
    """FAULT: Failed CAN Network Init — Failed to initialize `canopen.Network()`."""
