// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boat_data_interfaces:msg/BoatAlarm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/boat_alarm.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__TRAITS_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boat_data_interfaces/msg/detail/boat_alarm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace boat_data_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoatAlarm & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoatAlarm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoatAlarm & msg, bool use_flow_style = false)
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
  const boat_data_interfaces::msg::BoatAlarm & msg,
  std::ostream & out, size_t indentation = 0)
{
  boat_data_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boat_data_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const boat_data_interfaces::msg::BoatAlarm & msg)
{
  return boat_data_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boat_data_interfaces::msg::BoatAlarm>()
{
  return "boat_data_interfaces::msg::BoatAlarm";
}

template<>
inline const char * name<boat_data_interfaces::msg::BoatAlarm>()
{
  return "boat_data_interfaces/msg/BoatAlarm";
}

template<>
struct has_fixed_size<boat_data_interfaces::msg::BoatAlarm>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<boat_data_interfaces::msg::BoatAlarm>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<boat_data_interfaces::msg::BoatAlarm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__TRAITS_HPP_
