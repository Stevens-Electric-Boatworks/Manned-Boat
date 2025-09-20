// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/electrical_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
boat_data_interfaces__msg__ElectricalData__init(boat_data_interfaces__msg__ElectricalData * msg)
{
  if (!msg) {
    return false;
  }
  // vbat
  // vebat
  // temp_bat
  // battery_percent
  // current_bat
  // bms_temp
  // can_bus_util_percent
  return true;
}

void
boat_data_interfaces__msg__ElectricalData__fini(boat_data_interfaces__msg__ElectricalData * msg)
{
  if (!msg) {
    return;
  }
  // vbat
  // vebat
  // temp_bat
  // battery_percent
  // current_bat
  // bms_temp
  // can_bus_util_percent
}

bool
boat_data_interfaces__msg__ElectricalData__are_equal(const boat_data_interfaces__msg__ElectricalData * lhs, const boat_data_interfaces__msg__ElectricalData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vbat
  if (lhs->vbat != rhs->vbat) {
    return false;
  }
  // vebat
  if (lhs->vebat != rhs->vebat) {
    return false;
  }
  // temp_bat
  if (lhs->temp_bat != rhs->temp_bat) {
    return false;
  }
  // battery_percent
  if (lhs->battery_percent != rhs->battery_percent) {
    return false;
  }
  // current_bat
  if (lhs->current_bat != rhs->current_bat) {
    return false;
  }
  // bms_temp
  if (lhs->bms_temp != rhs->bms_temp) {
    return false;
  }
  // can_bus_util_percent
  if (lhs->can_bus_util_percent != rhs->can_bus_util_percent) {
    return false;
  }
  return true;
}

bool
boat_data_interfaces__msg__ElectricalData__copy(
  const boat_data_interfaces__msg__ElectricalData * input,
  boat_data_interfaces__msg__ElectricalData * output)
{
  if (!input || !output) {
    return false;
  }
  // vbat
  output->vbat = input->vbat;
  // vebat
  output->vebat = input->vebat;
  // temp_bat
  output->temp_bat = input->temp_bat;
  // battery_percent
  output->battery_percent = input->battery_percent;
  // current_bat
  output->current_bat = input->current_bat;
  // bms_temp
  output->bms_temp = input->bms_temp;
  // can_bus_util_percent
  output->can_bus_util_percent = input->can_bus_util_percent;
  return true;
}

boat_data_interfaces__msg__ElectricalData *
boat_data_interfaces__msg__ElectricalData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__ElectricalData * msg = (boat_data_interfaces__msg__ElectricalData *)allocator.allocate(sizeof(boat_data_interfaces__msg__ElectricalData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boat_data_interfaces__msg__ElectricalData));
  bool success = boat_data_interfaces__msg__ElectricalData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boat_data_interfaces__msg__ElectricalData__destroy(boat_data_interfaces__msg__ElectricalData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boat_data_interfaces__msg__ElectricalData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boat_data_interfaces__msg__ElectricalData__Sequence__init(boat_data_interfaces__msg__ElectricalData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__ElectricalData * data = NULL;

  if (size) {
    data = (boat_data_interfaces__msg__ElectricalData *)allocator.zero_allocate(size, sizeof(boat_data_interfaces__msg__ElectricalData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boat_data_interfaces__msg__ElectricalData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boat_data_interfaces__msg__ElectricalData__fini(&data[i - 1]);
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
boat_data_interfaces__msg__ElectricalData__Sequence__fini(boat_data_interfaces__msg__ElectricalData__Sequence * array)
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
      boat_data_interfaces__msg__ElectricalData__fini(&array->data[i]);
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

boat_data_interfaces__msg__ElectricalData__Sequence *
boat_data_interfaces__msg__ElectricalData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__ElectricalData__Sequence * array = (boat_data_interfaces__msg__ElectricalData__Sequence *)allocator.allocate(sizeof(boat_data_interfaces__msg__ElectricalData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boat_data_interfaces__msg__ElectricalData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boat_data_interfaces__msg__ElectricalData__Sequence__destroy(boat_data_interfaces__msg__ElectricalData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boat_data_interfaces__msg__ElectricalData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boat_data_interfaces__msg__ElectricalData__Sequence__are_equal(const boat_data_interfaces__msg__ElectricalData__Sequence * lhs, const boat_data_interfaces__msg__ElectricalData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boat_data_interfaces__msg__ElectricalData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boat_data_interfaces__msg__ElectricalData__Sequence__copy(
  const boat_data_interfaces__msg__ElectricalData__Sequence * input,
  boat_data_interfaces__msg__ElectricalData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boat_data_interfaces__msg__ElectricalData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boat_data_interfaces__msg__ElectricalData * data =
      (boat_data_interfaces__msg__ElectricalData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boat_data_interfaces__msg__ElectricalData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boat_data_interfaces__msg__ElectricalData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boat_data_interfaces__msg__ElectricalData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
