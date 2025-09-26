// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boat_data_interfaces:msg/CANMotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/can_motor_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__TRAITS_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boat_data_interfaces/msg/detail/can_motor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boat_data_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CANMotorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: throttle_mv
  {
    out << "throttle_mv: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_mv, out);
    out << ", ";
  }

  // member: throttle_percentage
  {
    out << "throttle_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_percentage, out);
    out << ", ";
  }

  // member: rpm
  {
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << ", ";
  }

  // member: motor_temp
  {
    out << "motor_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temp, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CANMotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: throttle_mv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_mv: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_mv, out);
    out << "\n";
  }

  // member: throttle_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_percentage, out);
    out << "\n";
  }

  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << "\n";
  }

  // member: motor_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temp, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CANMotorData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace boat_data_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use boat_data_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boat_data_interfaces::msg::CANMotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  boat_data_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boat_data_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const boat_data_interfaces::msg::CANMotorData & msg)
{
  return boat_data_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boat_data_interfaces::msg::CANMotorData>()
{
  return "boat_data_interfaces::msg::CANMotorData";
}

template<>
inline const char * name<boat_data_interfaces::msg::CANMotorData>()
{
  return "boat_data_interfaces/msg/CANMotorData";
}

template<>
struct has_fixed_size<boat_data_interfaces::msg::CANMotorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boat_data_interfaces::msg::CANMotorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boat_data_interfaces::msg::CANMotorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__TRAITS_HPP_
