// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/electrical_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__STRUCT_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boat_data_interfaces__msg__ElectricalData __attribute__((deprecated))
#else
# define DEPRECATED__boat_data_interfaces__msg__ElectricalData __declspec(deprecated)
#endif

namespace boat_data_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ElectricalData_
{
  using Type = ElectricalData_<ContainerAllocator>;

  explicit ElectricalData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vbat = 0.0f;
      this->vebat = 0.0f;
      this->temp_bat = 0.0f;
      this->battery_percent = 0;
      this->current_bat = 0;
      this->bms_temp = 0;
      this->can_bus_util_percent = 0;
    }
  }

  explicit ElectricalData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vbat = 0.0f;
      this->vebat = 0.0f;
      this->temp_bat = 0.0f;
      this->battery_percent = 0;
      this->current_bat = 0;
      this->bms_temp = 0;
      this->can_bus_util_percent = 0;
    }
  }

  // field types and members
  using _vbat_type =
    float;
  _vbat_type vbat;
  using _vebat_type =
    float;
  _vebat_type vebat;
  using _temp_bat_type =
    float;
  _temp_bat_type temp_bat;
  using _battery_percent_type =
    uint8_t;
  _battery_percent_type battery_percent;
  using _current_bat_type =
    uint8_t;
  _current_bat_type current_bat;
  using _bms_temp_type =
    int8_t;
  _bms_temp_type bms_temp;
  using _can_bus_util_percent_type =
    uint8_t;
  _can_bus_util_percent_type can_bus_util_percent;

  // setters for named parameter idiom
  Type & set__vbat(
    const float & _arg)
  {
    this->vbat = _arg;
    return *this;
  }
  Type & set__vebat(
    const float & _arg)
  {
    this->vebat = _arg;
    return *this;
  }
  Type & set__temp_bat(
    const float & _arg)
  {
    this->temp_bat = _arg;
    return *this;
  }
  Type & set__battery_percent(
    const uint8_t & _arg)
  {
    this->battery_percent = _arg;
    return *this;
  }
  Type & set__current_bat(
    const uint8_t & _arg)
  {
    this->current_bat = _arg;
    return *this;
  }
  Type & set__bms_temp(
    const int8_t & _arg)
  {
    this->bms_temp = _arg;
    return *this;
  }
  Type & set__can_bus_util_percent(
    const uint8_t & _arg)
  {
    this->can_bus_util_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boat_data_interfaces::msg::ElectricalData_<ContainerAllocator> *;
  using ConstRawPtr =
    const boat_data_interfaces::msg::ElectricalData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::ElectricalData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::ElectricalData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boat_data_interfaces__msg__ElectricalData
    std::shared_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boat_data_interfaces__msg__ElectricalData
    std::shared_ptr<boat_data_interfaces::msg::ElectricalData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ElectricalData_ & other) const
  {
    if (this->vbat != other.vbat) {
      return false;
    }
    if (this->vebat != other.vebat) {
      return false;
    }
    if (this->temp_bat != other.temp_bat) {
      return false;
    }
    if (this->battery_percent != other.battery_percent) {
      return false;
    }
    if (this->current_bat != other.current_bat) {
      return false;
    }
    if (this->bms_temp != other.bms_temp) {
      return false;
    }
    if (this->can_bus_util_percent != other.can_bus_util_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ElectricalData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ElectricalData_

// alias to use template instance with default allocator
using ElectricalData =
  boat_data_interfaces::msg::ElectricalData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__STRUCT_HPP_
