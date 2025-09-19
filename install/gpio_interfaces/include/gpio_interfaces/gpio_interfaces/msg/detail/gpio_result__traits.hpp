// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpio_interfaces/msg/gpio_result.hpp"


#ifndef GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__TRAITS_HPP_
#define GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gpio_interfaces/msg/detail/gpio_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gpio_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPIOResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
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
    out << ", ";
  }

  // member: gps_lat
  {
    out << "gps_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_lat, out);
    out << ", ";
  }

  // member: gps_lon
  {
    out << "gps_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_lon, out);
    out << ", ";
  }

  // member: gps_alt
  {
    out << "gps_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_alt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GPIOResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
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

  // member: gps_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_lat, out);
    out << "\n";
  }

  // member: gps_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_lon, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPIOResult & msg, bool use_flow_style = false)
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

}  // namespace gpio_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gpio_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gpio_interfaces::msg::GPIOResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  gpio_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gpio_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gpio_interfaces::msg::GPIOResult & msg)
{
  return gpio_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gpio_interfaces::msg::GPIOResult>()
{
  return "gpio_interfaces::msg::GPIOResult";
}

template<>
inline const char * name<gpio_interfaces::msg::GPIOResult>()
{
  return "gpio_interfaces/msg/GPIOResult";
}

template<>
struct has_fixed_size<gpio_interfaces::msg::GPIOResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gpio_interfaces::msg::GPIOResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gpio_interfaces::msg::GPIOResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__TRAITS_HPP_
