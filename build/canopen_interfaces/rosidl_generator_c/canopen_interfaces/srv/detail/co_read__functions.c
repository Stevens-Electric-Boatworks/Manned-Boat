// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from canopen_interfaces:srv/CORead.idl
// generated code does not contain a copyright notice
#include "canopen_interfaces/srv/detail/co_read__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
canopen_interfaces__srv__CORead_Request__init(canopen_interfaces__srv__CORead_Request * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // subindex
  return true;
}

void
canopen_interfaces__srv__CORead_Request__fini(canopen_interfaces__srv__CORead_Request * msg)
{
  if (!msg) {
    return;
  }
  // index
  // subindex
}

bool
canopen_interfaces__srv__CORead_Request__are_equal(const canopen_interfaces__srv__CORead_Request * lhs, const canopen_interfaces__srv__CORead_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // subindex
  if (lhs->subindex != rhs->subindex) {
    return false;
  }
  return true;
}

bool
canopen_interfaces__srv__CORead_Request__copy(
  const canopen_interfaces__srv__CORead_Request * input,
  canopen_interfaces__srv__CORead_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  // subindex
  output->subindex = input->subindex;
  return true;
}

canopen_interfaces__srv__CORead_Request *
canopen_interfaces__srv__CORead_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Request * msg = (canopen_interfaces__srv__CORead_Request *)allocator.allocate(sizeof(canopen_interfaces__srv__CORead_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(canopen_interfaces__srv__CORead_Request));
  bool success = canopen_interfaces__srv__CORead_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
canopen_interfaces__srv__CORead_Request__destroy(canopen_interfaces__srv__CORead_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    canopen_interfaces__srv__CORead_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
canopen_interfaces__srv__CORead_Request__Sequence__init(canopen_interfaces__srv__CORead_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Request * data = NULL;

  if (size) {
    data = (canopen_interfaces__srv__CORead_Request *)allocator.zero_allocate(size, sizeof(canopen_interfaces__srv__CORead_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = canopen_interfaces__srv__CORead_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        canopen_interfaces__srv__CORead_Request__fini(&data[i - 1]);
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
canopen_interfaces__srv__CORead_Request__Sequence__fini(canopen_interfaces__srv__CORead_Request__Sequence * array)
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
      canopen_interfaces__srv__CORead_Request__fini(&array->data[i]);
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

canopen_interfaces__srv__CORead_Request__Sequence *
canopen_interfaces__srv__CORead_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Request__Sequence * array = (canopen_interfaces__srv__CORead_Request__Sequence *)allocator.allocate(sizeof(canopen_interfaces__srv__CORead_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = canopen_interfaces__srv__CORead_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
canopen_interfaces__srv__CORead_Request__Sequence__destroy(canopen_interfaces__srv__CORead_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    canopen_interfaces__srv__CORead_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
canopen_interfaces__srv__CORead_Request__Sequence__are_equal(const canopen_interfaces__srv__CORead_Request__Sequence * lhs, const canopen_interfaces__srv__CORead_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!canopen_interfaces__srv__CORead_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
canopen_interfaces__srv__CORead_Request__Sequence__copy(
  const canopen_interfaces__srv__CORead_Request__Sequence * input,
  canopen_interfaces__srv__CORead_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(canopen_interfaces__srv__CORead_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    canopen_interfaces__srv__CORead_Request * data =
      (canopen_interfaces__srv__CORead_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!canopen_interfaces__srv__CORead_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          canopen_interfaces__srv__CORead_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!canopen_interfaces__srv__CORead_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
canopen_interfaces__srv__CORead_Response__init(canopen_interfaces__srv__CORead_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // data
  return true;
}

void
canopen_interfaces__srv__CORead_Response__fini(canopen_interfaces__srv__CORead_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // data
}

bool
canopen_interfaces__srv__CORead_Response__are_equal(const canopen_interfaces__srv__CORead_Response * lhs, const canopen_interfaces__srv__CORead_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
canopen_interfaces__srv__CORead_Response__copy(
  const canopen_interfaces__srv__CORead_Response * input,
  canopen_interfaces__srv__CORead_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // data
  output->data = input->data;
  return true;
}

canopen_interfaces__srv__CORead_Response *
canopen_interfaces__srv__CORead_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Response * msg = (canopen_interfaces__srv__CORead_Response *)allocator.allocate(sizeof(canopen_interfaces__srv__CORead_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(canopen_interfaces__srv__CORead_Response));
  bool success = canopen_interfaces__srv__CORead_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
canopen_interfaces__srv__CORead_Response__destroy(canopen_interfaces__srv__CORead_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    canopen_interfaces__srv__CORead_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
canopen_interfaces__srv__CORead_Response__Sequence__init(canopen_interfaces__srv__CORead_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Response * data = NULL;

  if (size) {
    data = (canopen_interfaces__srv__CORead_Response *)allocator.zero_allocate(size, sizeof(canopen_interfaces__srv__CORead_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = canopen_interfaces__srv__CORead_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        canopen_interfaces__srv__CORead_Response__fini(&data[i - 1]);
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
canopen_interfaces__srv__CORead_Response__Sequence__fini(canopen_interfaces__srv__CORead_Response__Sequence * array)
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
      canopen_interfaces__srv__CORead_Response__fini(&array->data[i]);
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

canopen_interfaces__srv__CORead_Response__Sequence *
canopen_interfaces__srv__CORead_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Response__Sequence * array = (canopen_interfaces__srv__CORead_Response__Sequence *)allocator.allocate(sizeof(canopen_interfaces__srv__CORead_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = canopen_interfaces__srv__CORead_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
canopen_interfaces__srv__CORead_Response__Sequence__destroy(canopen_interfaces__srv__CORead_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    canopen_interfaces__srv__CORead_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
canopen_interfaces__srv__CORead_Response__Sequence__are_equal(const canopen_interfaces__srv__CORead_Response__Sequence * lhs, const canopen_interfaces__srv__CORead_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!canopen_interfaces__srv__CORead_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
canopen_interfaces__srv__CORead_Response__Sequence__copy(
  const canopen_interfaces__srv__CORead_Response__Sequence * input,
  canopen_interfaces__srv__CORead_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(canopen_interfaces__srv__CORead_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    canopen_interfaces__srv__CORead_Response * data =
      (canopen_interfaces__srv__CORead_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!canopen_interfaces__srv__CORead_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          canopen_interfaces__srv__CORead_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!canopen_interfaces__srv__CORead_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "canopen_interfaces/srv/detail/co_read__functions.h"

bool
canopen_interfaces__srv__CORead_Event__init(canopen_interfaces__srv__CORead_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    canopen_interfaces__srv__CORead_Event__fini(msg);
    return false;
  }
  // request
  if (!canopen_interfaces__srv__CORead_Request__Sequence__init(&msg->request, 0)) {
    canopen_interfaces__srv__CORead_Event__fini(msg);
    return false;
  }
  // response
  if (!canopen_interfaces__srv__CORead_Response__Sequence__init(&msg->response, 0)) {
    canopen_interfaces__srv__CORead_Event__fini(msg);
    return false;
  }
  return true;
}

void
canopen_interfaces__srv__CORead_Event__fini(canopen_interfaces__srv__CORead_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  canopen_interfaces__srv__CORead_Request__Sequence__fini(&msg->request);
  // response
  canopen_interfaces__srv__CORead_Response__Sequence__fini(&msg->response);
}

bool
canopen_interfaces__srv__CORead_Event__are_equal(const canopen_interfaces__srv__CORead_Event * lhs, const canopen_interfaces__srv__CORead_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!canopen_interfaces__srv__CORead_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!canopen_interfaces__srv__CORead_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
canopen_interfaces__srv__CORead_Event__copy(
  const canopen_interfaces__srv__CORead_Event * input,
  canopen_interfaces__srv__CORead_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!canopen_interfaces__srv__CORead_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!canopen_interfaces__srv__CORead_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

canopen_interfaces__srv__CORead_Event *
canopen_interfaces__srv__CORead_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Event * msg = (canopen_interfaces__srv__CORead_Event *)allocator.allocate(sizeof(canopen_interfaces__srv__CORead_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(canopen_interfaces__srv__CORead_Event));
  bool success = canopen_interfaces__srv__CORead_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
canopen_interfaces__srv__CORead_Event__destroy(canopen_interfaces__srv__CORead_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    canopen_interfaces__srv__CORead_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
canopen_interfaces__srv__CORead_Event__Sequence__init(canopen_interfaces__srv__CORead_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Event * data = NULL;

  if (size) {
    data = (canopen_interfaces__srv__CORead_Event *)allocator.zero_allocate(size, sizeof(canopen_interfaces__srv__CORead_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = canopen_interfaces__srv__CORead_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        canopen_interfaces__srv__CORead_Event__fini(&data[i - 1]);
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
canopen_interfaces__srv__CORead_Event__Sequence__fini(canopen_interfaces__srv__CORead_Event__Sequence * array)
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
      canopen_interfaces__srv__CORead_Event__fini(&array->data[i]);
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

canopen_interfaces__srv__CORead_Event__Sequence *
canopen_interfaces__srv__CORead_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  canopen_interfaces__srv__CORead_Event__Sequence * array = (canopen_interfaces__srv__CORead_Event__Sequence *)allocator.allocate(sizeof(canopen_interfaces__srv__CORead_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = canopen_interfaces__srv__CORead_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
canopen_interfaces__srv__CORead_Event__Sequence__destroy(canopen_interfaces__srv__CORead_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    canopen_interfaces__srv__CORead_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
canopen_interfaces__srv__CORead_Event__Sequence__are_equal(const canopen_interfaces__srv__CORead_Event__Sequence * lhs, const canopen_interfaces__srv__CORead_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!canopen_interfaces__srv__CORead_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
canopen_interfaces__srv__CORead_Event__Sequence__copy(
  const canopen_interfaces__srv__CORead_Event__Sequence * input,
  canopen_interfaces__srv__CORead_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(canopen_interfaces__srv__CORead_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    canopen_interfaces__srv__CORead_Event * data =
      (canopen_interfaces__srv__CORead_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!canopen_interfaces__srv__CORead_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          canopen_interfaces__srv__CORead_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!canopen_interfaces__srv__CORead_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
