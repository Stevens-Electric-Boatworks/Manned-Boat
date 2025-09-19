// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/electrical_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__TRAITS_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boat_data_interfaces/msg/detail/electrical_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boat_data_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ElectricalData & msg,
  std::ostream & out)
{
  out << "{";
  // member: vbat
  {
    out << "vbat: ";
    rosidl_generator_traits::value_to_yaml(msg.vbat, out);
    out << ", ";
  }

  // member: vebat
  {
    out << "vebat: ";
    rosidl_generator_traits::value_to_yaml(msg.vebat, out);
    out << ", ";
  }

  // member: temp_bat
  {
    out << "temp_bat: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_bat, out);
    out << ", ";
  }

  // member: battery_percent
  {
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << ", ";
  }

  // member: current_bat
  {
    out << "current_bat: ";
    rosidl_generator_traits::value_to_yaml(msg.current_bat, out);
    out << ", ";
  }

  // member: bms_temp
  {
    out << "bms_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temp, out);
    out << ", ";
  }

  // member: can_bus_util_percent
  {
    out << "can_bus_util_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.can_bus_util_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ElectricalData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vbat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vbat: ";
    rosidl_generator_traits::value_to_yaml(msg.vbat, out);
    out << "\n";
  }

  // member: vebat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vebat: ";
    rosidl_generator_traits::value_to_yaml(msg.vebat, out);
    out << "\n";
  }

  // member: temp_bat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_bat: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_bat, out);
    out << "\n";
  }

  // member: battery_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << "\n";
  }

  // member: current_bat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_bat: ";
    rosidl_generator_traits::value_to_yaml(msg.current_bat, out);
    out << "\n";
  }

  // member: bms_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temp, out);
    out << "\n";
  }

  // member: can_bus_util_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_bus_util_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.can_bus_util_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ElectricalData & msg, bool use_flow_style = false)
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
  const boat_data_interfaces::msg::ElectricalData & msg,
  std::ostream & out, size_t indentation = 0)
{
  boat_data_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boat_data_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const boat_data_interfaces::msg::ElectricalData & msg)
{
  return boat_data_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boat_data_interfaces::msg::ElectricalData>()
{
  return "boat_data_interfaces::msg::ElectricalData";
}

template<>
inline const char * name<boat_data_interfaces::msg::ElectricalData>()
{
  return "boat_data_interfaces/msg/ElectricalData";
}

template<>
struct has_fixed_size<boat_data_interfaces::msg::ElectricalData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boat_data_interfaces::msg::ElectricalData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boat_data_interfaces::msg::ElectricalData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__TRAITS_HPP_
