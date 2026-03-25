// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecheye_ros_interface:srv/GetFloatArrayParameter.idl
// generated code does not contain a copyright notice
#include "mecheye_ros_interface/srv/detail/get_float_array_parameter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__init(mecheye_ros_interface__srv__GetFloatArrayParameter_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Request__fini(msg);
    return false;
  }
  return true;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__fini(mecheye_ros_interface__srv__GetFloatArrayParameter_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__are_equal(const mecheye_ros_interface__srv__GetFloatArrayParameter_Request * lhs, const mecheye_ros_interface__srv__GetFloatArrayParameter_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__copy(
  const mecheye_ros_interface__srv__GetFloatArrayParameter_Request * input,
  mecheye_ros_interface__srv__GetFloatArrayParameter_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

mecheye_ros_interface__srv__GetFloatArrayParameter_Request *
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Request * msg = (mecheye_ros_interface__srv__GetFloatArrayParameter_Request *)allocator.allocate(sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Request));
  bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__destroy(mecheye_ros_interface__srv__GetFloatArrayParameter_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__init(mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Request * data = NULL;

  if (size) {
    data = (mecheye_ros_interface__srv__GetFloatArrayParameter_Request *)allocator.zero_allocate(size, sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecheye_ros_interface__srv__GetFloatArrayParameter_Request__fini(&data[i - 1]);
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
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__fini(mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * array)
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
      mecheye_ros_interface__srv__GetFloatArrayParameter_Request__fini(&array->data[i]);
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

mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence *
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * array = (mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence *)allocator.allocate(sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__destroy(mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__are_equal(const mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * lhs, const mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__copy(
  const mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * input,
  mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecheye_ros_interface__srv__GetFloatArrayParameter_Request * data =
      (mecheye_ros_interface__srv__GetFloatArrayParameter_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecheye_ros_interface__srv__GetFloatArrayParameter_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__init(mecheye_ros_interface__srv__GetFloatArrayParameter_Response * msg)
{
  if (!msg) {
    return false;
  }
  // array
  if (!rosidl_runtime_c__double__Sequence__init(&msg->array, 0)) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Response__fini(msg);
    return false;
  }
  return true;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__fini(mecheye_ros_interface__srv__GetFloatArrayParameter_Response * msg)
{
  if (!msg) {
    return;
  }
  // array
  rosidl_runtime_c__double__Sequence__fini(&msg->array);
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__are_equal(const mecheye_ros_interface__srv__GetFloatArrayParameter_Response * lhs, const mecheye_ros_interface__srv__GetFloatArrayParameter_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // array
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->array), &(rhs->array)))
  {
    return false;
  }
  return true;
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__copy(
  const mecheye_ros_interface__srv__GetFloatArrayParameter_Response * input,
  mecheye_ros_interface__srv__GetFloatArrayParameter_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // array
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->array), &(output->array)))
  {
    return false;
  }
  return true;
}

mecheye_ros_interface__srv__GetFloatArrayParameter_Response *
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Response * msg = (mecheye_ros_interface__srv__GetFloatArrayParameter_Response *)allocator.allocate(sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Response));
  bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__destroy(mecheye_ros_interface__srv__GetFloatArrayParameter_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__init(mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Response * data = NULL;

  if (size) {
    data = (mecheye_ros_interface__srv__GetFloatArrayParameter_Response *)allocator.zero_allocate(size, sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecheye_ros_interface__srv__GetFloatArrayParameter_Response__fini(&data[i - 1]);
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
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__fini(mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * array)
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
      mecheye_ros_interface__srv__GetFloatArrayParameter_Response__fini(&array->data[i]);
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

mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence *
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * array = (mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence *)allocator.allocate(sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__destroy(mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__are_equal(const mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * lhs, const mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__copy(
  const mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * input,
  mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecheye_ros_interface__srv__GetFloatArrayParameter_Response * data =
      (mecheye_ros_interface__srv__GetFloatArrayParameter_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecheye_ros_interface__srv__GetFloatArrayParameter_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Response__copy(
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
// #include "mecheye_ros_interface/srv/detail/get_float_array_parameter__functions.h"

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__init(mecheye_ros_interface__srv__GetFloatArrayParameter_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(msg);
    return false;
  }
  // request
  if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__init(&msg->request, 0)) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(msg);
    return false;
  }
  // response
  if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__init(&msg->response, 0)) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(msg);
    return false;
  }
  return true;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(mecheye_ros_interface__srv__GetFloatArrayParameter_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__fini(&msg->request);
  // response
  mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__fini(&msg->response);
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__are_equal(const mecheye_ros_interface__srv__GetFloatArrayParameter_Event * lhs, const mecheye_ros_interface__srv__GetFloatArrayParameter_Event * rhs)
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
  if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__copy(
  const mecheye_ros_interface__srv__GetFloatArrayParameter_Event * input,
  mecheye_ros_interface__srv__GetFloatArrayParameter_Event * output)
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
  if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mecheye_ros_interface__srv__GetFloatArrayParameter_Event *
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Event * msg = (mecheye_ros_interface__srv__GetFloatArrayParameter_Event *)allocator.allocate(sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Event));
  bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__destroy(mecheye_ros_interface__srv__GetFloatArrayParameter_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__init(mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Event * data = NULL;

  if (size) {
    data = (mecheye_ros_interface__srv__GetFloatArrayParameter_Event *)allocator.zero_allocate(size, sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(&data[i - 1]);
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
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__fini(mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * array)
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
      mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(&array->data[i]);
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

mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence *
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * array = (mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence *)allocator.allocate(sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__destroy(mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__are_equal(const mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * lhs, const mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence__copy(
  const mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * input,
  mecheye_ros_interface__srv__GetFloatArrayParameter_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecheye_ros_interface__srv__GetFloatArrayParameter_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecheye_ros_interface__srv__GetFloatArrayParameter_Event * data =
      (mecheye_ros_interface__srv__GetFloatArrayParameter_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecheye_ros_interface__srv__GetFloatArrayParameter_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecheye_ros_interface__srv__GetFloatArrayParameter_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
