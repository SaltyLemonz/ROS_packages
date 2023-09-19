// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tut_interfaces:srv/CheckFib.idl
// generated code does not contain a copyright notice
#include "tut_interfaces/srv/detail/check_fib__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tut_interfaces__srv__CheckFib_Request__init(tut_interfaces__srv__CheckFib_Request * msg)
{
  if (!msg) {
    return false;
  }
  // num
  return true;
}

void
tut_interfaces__srv__CheckFib_Request__fini(tut_interfaces__srv__CheckFib_Request * msg)
{
  if (!msg) {
    return;
  }
  // num
}

bool
tut_interfaces__srv__CheckFib_Request__are_equal(const tut_interfaces__srv__CheckFib_Request * lhs, const tut_interfaces__srv__CheckFib_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
tut_interfaces__srv__CheckFib_Request__copy(
  const tut_interfaces__srv__CheckFib_Request * input,
  tut_interfaces__srv__CheckFib_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // num
  output->num = input->num;
  return true;
}

tut_interfaces__srv__CheckFib_Request *
tut_interfaces__srv__CheckFib_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Request * msg = (tut_interfaces__srv__CheckFib_Request *)allocator.allocate(sizeof(tut_interfaces__srv__CheckFib_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tut_interfaces__srv__CheckFib_Request));
  bool success = tut_interfaces__srv__CheckFib_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tut_interfaces__srv__CheckFib_Request__destroy(tut_interfaces__srv__CheckFib_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tut_interfaces__srv__CheckFib_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tut_interfaces__srv__CheckFib_Request__Sequence__init(tut_interfaces__srv__CheckFib_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Request * data = NULL;

  if (size) {
    data = (tut_interfaces__srv__CheckFib_Request *)allocator.zero_allocate(size, sizeof(tut_interfaces__srv__CheckFib_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tut_interfaces__srv__CheckFib_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tut_interfaces__srv__CheckFib_Request__fini(&data[i - 1]);
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
tut_interfaces__srv__CheckFib_Request__Sequence__fini(tut_interfaces__srv__CheckFib_Request__Sequence * array)
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
      tut_interfaces__srv__CheckFib_Request__fini(&array->data[i]);
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

tut_interfaces__srv__CheckFib_Request__Sequence *
tut_interfaces__srv__CheckFib_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Request__Sequence * array = (tut_interfaces__srv__CheckFib_Request__Sequence *)allocator.allocate(sizeof(tut_interfaces__srv__CheckFib_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tut_interfaces__srv__CheckFib_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tut_interfaces__srv__CheckFib_Request__Sequence__destroy(tut_interfaces__srv__CheckFib_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tut_interfaces__srv__CheckFib_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tut_interfaces__srv__CheckFib_Request__Sequence__are_equal(const tut_interfaces__srv__CheckFib_Request__Sequence * lhs, const tut_interfaces__srv__CheckFib_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tut_interfaces__srv__CheckFib_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tut_interfaces__srv__CheckFib_Request__Sequence__copy(
  const tut_interfaces__srv__CheckFib_Request__Sequence * input,
  tut_interfaces__srv__CheckFib_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tut_interfaces__srv__CheckFib_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tut_interfaces__srv__CheckFib_Request * data =
      (tut_interfaces__srv__CheckFib_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tut_interfaces__srv__CheckFib_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tut_interfaces__srv__CheckFib_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tut_interfaces__srv__CheckFib_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tut_interfaces__srv__CheckFib_Response__init(tut_interfaces__srv__CheckFib_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
tut_interfaces__srv__CheckFib_Response__fini(tut_interfaces__srv__CheckFib_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
tut_interfaces__srv__CheckFib_Response__are_equal(const tut_interfaces__srv__CheckFib_Response * lhs, const tut_interfaces__srv__CheckFib_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
tut_interfaces__srv__CheckFib_Response__copy(
  const tut_interfaces__srv__CheckFib_Response * input,
  tut_interfaces__srv__CheckFib_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

tut_interfaces__srv__CheckFib_Response *
tut_interfaces__srv__CheckFib_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Response * msg = (tut_interfaces__srv__CheckFib_Response *)allocator.allocate(sizeof(tut_interfaces__srv__CheckFib_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tut_interfaces__srv__CheckFib_Response));
  bool success = tut_interfaces__srv__CheckFib_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tut_interfaces__srv__CheckFib_Response__destroy(tut_interfaces__srv__CheckFib_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tut_interfaces__srv__CheckFib_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tut_interfaces__srv__CheckFib_Response__Sequence__init(tut_interfaces__srv__CheckFib_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Response * data = NULL;

  if (size) {
    data = (tut_interfaces__srv__CheckFib_Response *)allocator.zero_allocate(size, sizeof(tut_interfaces__srv__CheckFib_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tut_interfaces__srv__CheckFib_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tut_interfaces__srv__CheckFib_Response__fini(&data[i - 1]);
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
tut_interfaces__srv__CheckFib_Response__Sequence__fini(tut_interfaces__srv__CheckFib_Response__Sequence * array)
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
      tut_interfaces__srv__CheckFib_Response__fini(&array->data[i]);
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

tut_interfaces__srv__CheckFib_Response__Sequence *
tut_interfaces__srv__CheckFib_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Response__Sequence * array = (tut_interfaces__srv__CheckFib_Response__Sequence *)allocator.allocate(sizeof(tut_interfaces__srv__CheckFib_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tut_interfaces__srv__CheckFib_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tut_interfaces__srv__CheckFib_Response__Sequence__destroy(tut_interfaces__srv__CheckFib_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tut_interfaces__srv__CheckFib_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tut_interfaces__srv__CheckFib_Response__Sequence__are_equal(const tut_interfaces__srv__CheckFib_Response__Sequence * lhs, const tut_interfaces__srv__CheckFib_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tut_interfaces__srv__CheckFib_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tut_interfaces__srv__CheckFib_Response__Sequence__copy(
  const tut_interfaces__srv__CheckFib_Response__Sequence * input,
  tut_interfaces__srv__CheckFib_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tut_interfaces__srv__CheckFib_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tut_interfaces__srv__CheckFib_Response * data =
      (tut_interfaces__srv__CheckFib_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tut_interfaces__srv__CheckFib_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tut_interfaces__srv__CheckFib_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tut_interfaces__srv__CheckFib_Response__copy(
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
// #include "tut_interfaces/srv/detail/check_fib__functions.h"

bool
tut_interfaces__srv__CheckFib_Event__init(tut_interfaces__srv__CheckFib_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    tut_interfaces__srv__CheckFib_Event__fini(msg);
    return false;
  }
  // request
  if (!tut_interfaces__srv__CheckFib_Request__Sequence__init(&msg->request, 0)) {
    tut_interfaces__srv__CheckFib_Event__fini(msg);
    return false;
  }
  // response
  if (!tut_interfaces__srv__CheckFib_Response__Sequence__init(&msg->response, 0)) {
    tut_interfaces__srv__CheckFib_Event__fini(msg);
    return false;
  }
  return true;
}

void
tut_interfaces__srv__CheckFib_Event__fini(tut_interfaces__srv__CheckFib_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  tut_interfaces__srv__CheckFib_Request__Sequence__fini(&msg->request);
  // response
  tut_interfaces__srv__CheckFib_Response__Sequence__fini(&msg->response);
}

bool
tut_interfaces__srv__CheckFib_Event__are_equal(const tut_interfaces__srv__CheckFib_Event * lhs, const tut_interfaces__srv__CheckFib_Event * rhs)
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
  if (!tut_interfaces__srv__CheckFib_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!tut_interfaces__srv__CheckFib_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
tut_interfaces__srv__CheckFib_Event__copy(
  const tut_interfaces__srv__CheckFib_Event * input,
  tut_interfaces__srv__CheckFib_Event * output)
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
  if (!tut_interfaces__srv__CheckFib_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!tut_interfaces__srv__CheckFib_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

tut_interfaces__srv__CheckFib_Event *
tut_interfaces__srv__CheckFib_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Event * msg = (tut_interfaces__srv__CheckFib_Event *)allocator.allocate(sizeof(tut_interfaces__srv__CheckFib_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tut_interfaces__srv__CheckFib_Event));
  bool success = tut_interfaces__srv__CheckFib_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tut_interfaces__srv__CheckFib_Event__destroy(tut_interfaces__srv__CheckFib_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tut_interfaces__srv__CheckFib_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tut_interfaces__srv__CheckFib_Event__Sequence__init(tut_interfaces__srv__CheckFib_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Event * data = NULL;

  if (size) {
    data = (tut_interfaces__srv__CheckFib_Event *)allocator.zero_allocate(size, sizeof(tut_interfaces__srv__CheckFib_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tut_interfaces__srv__CheckFib_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tut_interfaces__srv__CheckFib_Event__fini(&data[i - 1]);
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
tut_interfaces__srv__CheckFib_Event__Sequence__fini(tut_interfaces__srv__CheckFib_Event__Sequence * array)
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
      tut_interfaces__srv__CheckFib_Event__fini(&array->data[i]);
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

tut_interfaces__srv__CheckFib_Event__Sequence *
tut_interfaces__srv__CheckFib_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__srv__CheckFib_Event__Sequence * array = (tut_interfaces__srv__CheckFib_Event__Sequence *)allocator.allocate(sizeof(tut_interfaces__srv__CheckFib_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tut_interfaces__srv__CheckFib_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tut_interfaces__srv__CheckFib_Event__Sequence__destroy(tut_interfaces__srv__CheckFib_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tut_interfaces__srv__CheckFib_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tut_interfaces__srv__CheckFib_Event__Sequence__are_equal(const tut_interfaces__srv__CheckFib_Event__Sequence * lhs, const tut_interfaces__srv__CheckFib_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tut_interfaces__srv__CheckFib_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tut_interfaces__srv__CheckFib_Event__Sequence__copy(
  const tut_interfaces__srv__CheckFib_Event__Sequence * input,
  tut_interfaces__srv__CheckFib_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tut_interfaces__srv__CheckFib_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tut_interfaces__srv__CheckFib_Event * data =
      (tut_interfaces__srv__CheckFib_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tut_interfaces__srv__CheckFib_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tut_interfaces__srv__CheckFib_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tut_interfaces__srv__CheckFib_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
