// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/electrical_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__BUILDER_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boat_data_interfaces/msg/detail/electrical_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boat_data_interfaces
{

namespace msg
{

namespace builder
{

class Init_ElectricalData_can_bus_util_percent
{
public:
  explicit Init_ElectricalData_can_bus_util_percent(::boat_data_interfaces::msg::ElectricalData & msg)
  : msg_(msg)
  {}
  ::boat_data_interfaces::msg::ElectricalData can_bus_util_percent(::boat_data_interfaces::msg::ElectricalData::_can_bus_util_percent_type arg)
  {
    msg_.can_bus_util_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boat_data_interfaces::msg::ElectricalData msg_;
};

class Init_ElectricalData_bms_temp
{
public:
  explicit Init_ElectricalData_bms_temp(::boat_data_interfaces::msg::ElectricalData & msg)
  : msg_(msg)
  {}
  Init_ElectricalData_can_bus_util_percent bms_temp(::boat_data_interfaces::msg::ElectricalData::_bms_temp_type arg)
  {
    msg_.bms_temp = std::move(arg);
    return Init_ElectricalData_can_bus_util_percent(msg_);
  }

private:
  ::boat_data_interfaces::msg::ElectricalData msg_;
};

class Init_ElectricalData_current_bat
{
public:
  explicit Init_ElectricalData_current_bat(::boat_data_interfaces::msg::ElectricalData & msg)
  : msg_(msg)
  {}
  Init_ElectricalData_bms_temp current_bat(::boat_data_interfaces::msg::ElectricalData::_current_bat_type arg)
  {
    msg_.current_bat = std::move(arg);
    return Init_ElectricalData_bms_temp(msg_);
  }

private:
  ::boat_data_interfaces::msg::ElectricalData msg_;
};

class Init_ElectricalData_battery_percent
{
public:
  explicit Init_ElectricalData_battery_percent(::boat_data_interfaces::msg::ElectricalData & msg)
  : msg_(msg)
  {}
  Init_ElectricalData_current_bat battery_percent(::boat_data_interfaces::msg::ElectricalData::_battery_percent_type arg)
  {
    msg_.battery_percent = std::move(arg);
    return Init_ElectricalData_current_bat(msg_);
  }

private:
  ::boat_data_interfaces::msg::ElectricalData msg_;
};

class Init_ElectricalData_temp_bat
{
public:
  explicit Init_ElectricalData_temp_bat(::boat_data_interfaces::msg::ElectricalData & msg)
  : msg_(msg)
  {}
  Init_ElectricalData_battery_percent temp_bat(::boat_data_interfaces::msg::ElectricalData::_temp_bat_type arg)
  {
    msg_.temp_bat = std::move(arg);
    return Init_ElectricalData_battery_percent(msg_);
  }

private:
  ::boat_data_interfaces::msg::ElectricalData msg_;
};

class Init_ElectricalData_vebat
{
public:
  explicit Init_ElectricalData_vebat(::boat_data_interfaces::msg::ElectricalData & msg)
  : msg_(msg)
  {}
  Init_ElectricalData_temp_bat vebat(::boat_data_interfaces::msg::ElectricalData::_vebat_type arg)
  {
    msg_.vebat = std::move(arg);
    return Init_ElectricalData_temp_bat(msg_);
  }

private:
  ::boat_data_interfaces::msg::ElectricalData msg_;
};

class Init_ElectricalData_vbat
{
public:
  Init_ElectricalData_vbat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElectricalData_vebat vbat(::boat_data_interfaces::msg::ElectricalData::_vbat_type arg)
  {
    msg_.vbat = std::move(arg);
    return Init_ElectricalData_vebat(msg_);
  }

private:
  ::boat_data_interfaces::msg::ElectricalData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boat_data_interfaces::msg::ElectricalData>()
{
  return boat_data_interfaces::msg::builder::Init_ElectricalData_vbat();
}

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__BUILDER_HPP_
