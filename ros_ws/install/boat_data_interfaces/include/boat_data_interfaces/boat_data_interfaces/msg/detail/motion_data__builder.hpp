// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motion_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__BUILDER_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boat_data_interfaces/msg/detail/motion_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boat_data_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotionData_imu_z
{
public:
  explicit Init_MotionData_imu_z(::boat_data_interfaces::msg::MotionData & msg)
  : msg_(msg)
  {}
  ::boat_data_interfaces::msg::MotionData imu_z(::boat_data_interfaces::msg::MotionData::_imu_z_type arg)
  {
    msg_.imu_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

class Init_MotionData_imu_y
{
public:
  explicit Init_MotionData_imu_y(::boat_data_interfaces::msg::MotionData & msg)
  : msg_(msg)
  {}
  Init_MotionData_imu_z imu_y(::boat_data_interfaces::msg::MotionData::_imu_y_type arg)
  {
    msg_.imu_y = std::move(arg);
    return Init_MotionData_imu_z(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

class Init_MotionData_imu_x
{
public:
  explicit Init_MotionData_imu_x(::boat_data_interfaces::msg::MotionData & msg)
  : msg_(msg)
  {}
  Init_MotionData_imu_y imu_x(::boat_data_interfaces::msg::MotionData::_imu_x_type arg)
  {
    msg_.imu_x = std::move(arg);
    return Init_MotionData_imu_y(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

class Init_MotionData_gps_alt
{
public:
  explicit Init_MotionData_gps_alt(::boat_data_interfaces::msg::MotionData & msg)
  : msg_(msg)
  {}
  Init_MotionData_imu_x gps_alt(::boat_data_interfaces::msg::MotionData::_gps_alt_type arg)
  {
    msg_.gps_alt = std::move(arg);
    return Init_MotionData_imu_x(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

class Init_MotionData_gps_long
{
public:
  explicit Init_MotionData_gps_long(::boat_data_interfaces::msg::MotionData & msg)
  : msg_(msg)
  {}
  Init_MotionData_gps_alt gps_long(::boat_data_interfaces::msg::MotionData::_gps_long_type arg)
  {
    msg_.gps_long = std::move(arg);
    return Init_MotionData_gps_alt(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

class Init_MotionData_gps_lat
{
public:
  explicit Init_MotionData_gps_lat(::boat_data_interfaces::msg::MotionData & msg)
  : msg_(msg)
  {}
  Init_MotionData_gps_long gps_lat(::boat_data_interfaces::msg::MotionData::_gps_lat_type arg)
  {
    msg_.gps_lat = std::move(arg);
    return Init_MotionData_gps_long(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

class Init_MotionData_speed
{
public:
  explicit Init_MotionData_speed(::boat_data_interfaces::msg::MotionData & msg)
  : msg_(msg)
  {}
  Init_MotionData_gps_lat speed(::boat_data_interfaces::msg::MotionData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotionData_gps_lat(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

class Init_MotionData_heading
{
public:
  Init_MotionData_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionData_speed heading(::boat_data_interfaces::msg::MotionData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_MotionData_speed(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boat_data_interfaces::msg::MotionData>()
{
  return boat_data_interfaces::msg::builder::Init_MotionData_heading();
}

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__BUILDER_HPP_
