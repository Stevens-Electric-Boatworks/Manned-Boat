// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boat_data_interfaces:msg/CANMotorData.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/can_motor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
boat_data_interfaces__msg__CANMotorData__init(boat_data_interfaces__msg__CANMotorData * msg)
{
  if (!msg) {
    return false;
  }
  // voltage
  // throttle_mv
  // throttle_percentage
  // rpm
  // torque
  // motor_temp
  // current
  // power
  return true;
}

void
boat_data_interfaces__msg__CANMotorData__fini(boat_data_interfaces__msg__CANMotorData * msg)
{
  if (!msg) {
    return;
  }
  // voltage
  // throttle_mv
  // throttle_percentage
  // rpm
  // torque
  // motor_temp
  // current
  // power
}

bool
boat_data_interfaces__msg__CANMotorData__are_equal(const boat_data_interfaces__msg__CANMotorData * lhs, const boat_data_interfaces__msg__CANMotorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // throttle_mv
  if (lhs->throttle_mv != rhs->throttle_mv) {
    return false;
  }
  // throttle_percentage
  if (lhs->throttle_percentage != rhs->throttle_percentage) {
    return false;
  }
  // rpm
  if (lhs->rpm != rhs->rpm) {
    return false;
  }
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // motor_temp
  if (lhs->motor_temp != rhs->motor_temp) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // power
  if (lhs->power != rhs->power) {
    return false;
  }
  return true;
}

bool
boat_data_interfaces__msg__CANMotorData__copy(
  const boat_data_interfaces__msg__CANMotorData * input,
  boat_data_interfaces__msg__CANMotorData * output)
{
  if (!input || !output) {
    return false;
  }
  // voltage
  output->voltage = input->voltage;
  // throttle_mv
  output->throttle_mv = input->throttle_mv;
  // throttle_percentage
  output->throttle_percentage = input->throttle_percentage;
  // rpm
  output->rpm = input->rpm;
  // torque
  output->torque = input->torque;
  // motor_temp
  output->motor_temp = input->motor_temp;
  // current
  output->current = input->current;
  // power
  output->power = input->power;
  return true;
}

boat_data_interfaces__msg__CANMotorData *
boat_data_interfaces__msg__CANMotorData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__CANMotorData * msg = (boat_data_interfaces__msg__CANMotorData *)allocator.allocate(sizeof(boat_data_interfaces__msg__CANMotorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boat_data_interfaces__msg__CANMotorData));
  bool success = boat_data_interfaces__msg__CANMotorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boat_data_interfaces__msg__CANMotorData__destroy(boat_data_interfaces__msg__CANMotorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boat_data_interfaces__msg__CANMotorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boat_data_interfaces__msg__CANMotorData__Sequence__init(boat_data_interfaces__msg__CANMotorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__CANMotorData * data = NULL;

  if (size) {
    data = (boat_data_interfaces__msg__CANMotorData *)allocator.zero_allocate(size, sizeof(boat_data_interfaces__msg__CANMotorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boat_data_interfaces__msg__CANMotorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boat_data_interfaces__msg__CANMotorData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
boat_data_interfaces__msg__CANMotorData__Sequence__fini(boat_data_interfaces__msg__CANMotorData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      boat_data_interfaces__msg__CANMotorData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

boat_data_interfaces__msg__CANMotorData__Sequence *
boat_data_interfaces__msg__CANMotorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__CANMotorData__Sequence * array = (boat_data_interfaces__msg__CANMotorData__Sequence *)allocator.allocate(sizeof(boat_data_interfaces__msg__CANMotorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boat_data_interfaces__msg__CANMotorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boat_data_interfaces__msg__CANMotorData__Sequence__destroy(boat_data_interfaces__msg__CANMotorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boat_data_interfaces__msg__CANMotorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boat_data_interfaces__msg__CANMotorData__Sequence__are_equal(const boat_data_interfaces__msg__CANMotorData__Sequence * lhs, const boat_data_interfaces__msg__CANMotorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boat_data_interfaces__msg__CANMotorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boat_data_interfaces__msg__CANMotorData__Sequence__copy(
  const boat_data_interfaces__msg__CANMotorData__Sequence * input,
  boat_data_interfaces__msg__CANMotorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boat_data_interfaces__msg__CANMotorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boat_data_interfaces__msg__CANMotorData * data =
      (boat_data_interfaces__msg__CANMotorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boat_data_interfaces__msg__CANMotorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boat_data_interfaces__msg__CANMotorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boat_data_interfaces__msg__CANMotorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
