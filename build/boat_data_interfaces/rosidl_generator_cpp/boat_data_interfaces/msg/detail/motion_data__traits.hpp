// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motion_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__TRAITS_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boat_data_interfaces/msg/detail/motion_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boat_data_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: gps_lat
  {
    out << "gps_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_lat, out);
    out << ", ";
  }

  // member: gps_long
  {
    out << "gps_long: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_long, out);
    out << ", ";
  }

  // member: gps_alt
  {
    out << "gps_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_alt, out);
    out << ", ";
  }

  // member: imu_x
  {
    out << "imu_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_x, out);
    out << ", ";
  }

  // member: imu_y
  {
    out << "imu_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_y, out);
    out << ", ";
  }

  // member: imu_z
  {
    out << "imu_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: gps_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_lat, out);
    out << "\n";
  }

  // member: gps_long
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_long: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_long, out);
    out << "\n";
  }

  // member: gps_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_alt, out);
    out << "\n";
  }

  // member: imu_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_x, out);
    out << "\n";
  }

  // member: imu_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_y, out);
    out << "\n";
  }

  // member: imu_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionData & msg, bool use_flow_style = false)
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
  const boat_data_interfaces::msg::MotionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  boat_data_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boat_data_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const boat_data_interfaces::msg::MotionData & msg)
{
  return boat_data_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boat_data_interfaces::msg::MotionData>()
{
  return "boat_data_interfaces::msg::MotionData";
}

template<>
inline const char * name<boat_data_interfaces::msg::MotionData>()
{
  return "boat_data_interfaces/msg/MotionData";
}

template<>
struct has_fixed_size<boat_data_interfaces::msg::MotionData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boat_data_interfaces::msg::MotionData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boat_data_interfaces::msg::MotionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__TRAITS_HPP_
