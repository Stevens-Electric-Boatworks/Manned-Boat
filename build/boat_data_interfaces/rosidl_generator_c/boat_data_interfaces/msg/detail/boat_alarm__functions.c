// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boat_data_interfaces:msg/BoatAlarm.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/boat_alarm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
boat_data_interfaces__msg__BoatAlarm__init(boat_data_interfaces__msg__BoatAlarm * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    boat_data_interfaces__msg__BoatAlarm__fini(msg);
    return false;
  }
  return true;
}

void
boat_data_interfaces__msg__BoatAlarm__fini(boat_data_interfaces__msg__BoatAlarm * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
boat_data_interfaces__msg__BoatAlarm__are_equal(const boat_data_interfaces__msg__BoatAlarm * lhs, const boat_data_interfaces__msg__BoatAlarm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
boat_data_interfaces__msg__BoatAlarm__copy(
  const boat_data_interfaces__msg__BoatAlarm * input,
  boat_data_interfaces__msg__BoatAlarm * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

boat_data_interfaces__msg__BoatAlarm *
boat_data_interfaces__msg__BoatAlarm__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__BoatAlarm * msg = (boat_data_interfaces__msg__BoatAlarm *)allocator.allocate(sizeof(boat_data_interfaces__msg__BoatAlarm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boat_data_interfaces__msg__BoatAlarm));
  bool success = boat_data_interfaces__msg__BoatAlarm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boat_data_interfaces__msg__BoatAlarm__destroy(boat_data_interfaces__msg__BoatAlarm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boat_data_interfaces__msg__BoatAlarm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boat_data_interfaces__msg__BoatAlarm__Sequence__init(boat_data_interfaces__msg__BoatAlarm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__BoatAlarm * data = NULL;

  if (size) {
    data = (boat_data_interfaces__msg__BoatAlarm *)allocator.zero_allocate(size, sizeof(boat_data_interfaces__msg__BoatAlarm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boat_data_interfaces__msg__BoatAlarm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boat_data_interfaces__msg__BoatAlarm__fini(&data[i - 1]);
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
boat_data_interfaces__msg__BoatAlarm__Sequence__fini(boat_data_interfaces__msg__BoatAlarm__Sequence * array)
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
      boat_data_interfaces__msg__BoatAlarm__fini(&array->data[i]);
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

boat_data_interfaces__msg__BoatAlarm__Sequence *
boat_data_interfaces__msg__BoatAlarm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__BoatAlarm__Sequence * array = (boat_data_interfaces__msg__BoatAlarm__Sequence *)allocator.allocate(sizeof(boat_data_interfaces__msg__BoatAlarm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boat_data_interfaces__msg__BoatAlarm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boat_data_interfaces__msg__BoatAlarm__Sequence__destroy(boat_data_interfaces__msg__BoatAlarm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boat_data_interfaces__msg__BoatAlarm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boat_data_interfaces__msg__BoatAlarm__Sequence__are_equal(const boat_data_interfaces__msg__BoatAlarm__Sequence * lhs, const boat_data_interfaces__msg__BoatAlarm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boat_data_interfaces__msg__BoatAlarm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boat_data_interfaces__msg__BoatAlarm__Sequence__copy(
  const boat_data_interfaces__msg__BoatAlarm__Sequence * input,
  boat_data_interfaces__msg__BoatAlarm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boat_data_interfaces__msg__BoatAlarm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boat_data_interfaces__msg__BoatAlarm * data =
      (boat_data_interfaces__msg__BoatAlarm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boat_data_interfaces__msg__BoatAlarm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boat_data_interfaces__msg__BoatAlarm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boat_data_interfaces__msg__BoatAlarm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
