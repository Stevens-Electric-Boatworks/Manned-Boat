// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpio_interfaces/msg/gpio_result.hpp"


#ifndef GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__BUILDER_HPP_
#define GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpio_interfaces/msg/detail/gpio_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpio_interfaces
{

namespace msg
{

namespace builder
{

class Init_GPIOResult_gps_alt
{
public:
  explicit Init_GPIOResult_gps_alt(::gpio_interfaces::msg::GPIOResult & msg)
  : msg_(msg)
  {}
  ::gpio_interfaces::msg::GPIOResult gps_alt(::gpio_interfaces::msg::GPIOResult::_gps_alt_type arg)
  {
    msg_.gps_alt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

class Init_GPIOResult_gps_lon
{
public:
  explicit Init_GPIOResult_gps_lon(::gpio_interfaces::msg::GPIOResult & msg)
  : msg_(msg)
  {}
  Init_GPIOResult_gps_alt gps_lon(::gpio_interfaces::msg::GPIOResult::_gps_lon_type arg)
  {
    msg_.gps_lon = std::move(arg);
    return Init_GPIOResult_gps_alt(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

class Init_GPIOResult_gps_lat
{
public:
  explicit Init_GPIOResult_gps_lat(::gpio_interfaces::msg::GPIOResult & msg)
  : msg_(msg)
  {}
  Init_GPIOResult_gps_lon gps_lat(::gpio_interfaces::msg::GPIOResult::_gps_lat_type arg)
  {
    msg_.gps_lat = std::move(arg);
    return Init_GPIOResult_gps_lon(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

class Init_GPIOResult_imu_z
{
public:
  explicit Init_GPIOResult_imu_z(::gpio_interfaces::msg::GPIOResult & msg)
  : msg_(msg)
  {}
  Init_GPIOResult_gps_lat imu_z(::gpio_interfaces::msg::GPIOResult::_imu_z_type arg)
  {
    msg_.imu_z = std::move(arg);
    return Init_GPIOResult_gps_lat(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

class Init_GPIOResult_imu_y
{
public:
  explicit Init_GPIOResult_imu_y(::gpio_interfaces::msg::GPIOResult & msg)
  : msg_(msg)
  {}
  Init_GPIOResult_imu_z imu_y(::gpio_interfaces::msg::GPIOResult::_imu_y_type arg)
  {
    msg_.imu_y = std::move(arg);
    return Init_GPIOResult_imu_z(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

class Init_GPIOResult_imu_x
{
public:
  explicit Init_GPIOResult_imu_x(::gpio_interfaces::msg::GPIOResult & msg)
  : msg_(msg)
  {}
  Init_GPIOResult_imu_y imu_x(::gpio_interfaces::msg::GPIOResult::_imu_x_type arg)
  {
    msg_.imu_x = std::move(arg);
    return Init_GPIOResult_imu_y(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

class Init_GPIOResult_temp
{
public:
  Init_GPIOResult_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPIOResult_imu_x temp(::gpio_interfaces::msg::GPIOResult::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_GPIOResult_imu_x(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpio_interfaces::msg::GPIOResult>()
{
  return gpio_interfaces::msg::builder::Init_GPIOResult_temp();
}

}  // namespace gpio_interfaces

#endif  // GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__BUILDER_HPP_
