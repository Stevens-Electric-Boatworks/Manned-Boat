// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boat_data_interfaces:msg/BoatAlarm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/boat_alarm.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__BUILDER_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boat_data_interfaces/msg/detail/boat_alarm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boat_data_interfaces
{

namespace msg
{

namespace builder
{

class Init_BoatAlarm_timestamp
{
public:
  explicit Init_BoatAlarm_timestamp(::boat_data_interfaces::msg::BoatAlarm & msg)
  : msg_(msg)
  {}
  ::boat_data_interfaces::msg::BoatAlarm timestamp(::boat_data_interfaces::msg::BoatAlarm::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boat_data_interfaces::msg::BoatAlarm msg_;
};

class Init_BoatAlarm_error_code
{
public:
  Init_BoatAlarm_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoatAlarm_timestamp error_code(::boat_data_interfaces::msg::BoatAlarm::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_BoatAlarm_timestamp(msg_);
  }

private:
  ::boat_data_interfaces::msg::BoatAlarm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boat_data_interfaces::msg::BoatAlarm>()
{
  return boat_data_interfaces::msg::builder::Init_BoatAlarm_error_code();
}

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__BUILDER_HPP_
