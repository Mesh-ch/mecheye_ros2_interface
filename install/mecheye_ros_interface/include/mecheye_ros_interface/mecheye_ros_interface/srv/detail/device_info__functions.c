// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecheye_ros_interface:srv/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "mecheye_ros_interface/srv/detail/device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mecheye_ros_interface__srv__DeviceInfo_Request__init(mecheye_ros_interface__srv__DeviceInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mecheye_ros_interface__srv__DeviceInfo_Request__fini(mecheye_ros_interface__srv__DeviceInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mecheye_ros_interface__srv__DeviceInfo_Request__are_equal(const mecheye_ros_interface__srv__DeviceInfo_Request * lhs, const mecheye_ros_interface__srv__DeviceInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mecheye_ros_interface__srv__DeviceInfo_Request__copy(
  const mecheye_ros_interface__srv__DeviceInfo_Request * input,
  mecheye_ros_interface__srv__DeviceInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mecheye_ros_interface__srv__DeviceInfo_Request *
mecheye_ros_interface__srv__DeviceInfo_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Request * msg = (mecheye_ros_interface__srv__DeviceInfo_Request *)allocator.allocate(sizeof(mecheye_ros_interface__srv__DeviceInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecheye_ros_interface__srv__DeviceInfo_Request));
  bool success = mecheye_ros_interface__srv__DeviceInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecheye_ros_interface__srv__DeviceInfo_Request__destroy(mecheye_ros_interface__srv__DeviceInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecheye_ros_interface__srv__DeviceInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__init(mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Request * data = NULL;

  if (size) {
    data = (mecheye_ros_interface__srv__DeviceInfo_Request *)allocator.zero_allocate(size, sizeof(mecheye_ros_interface__srv__DeviceInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecheye_ros_interface__srv__DeviceInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecheye_ros_interface__srv__DeviceInfo_Request__fini(&data[i - 1]);
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
mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__fini(mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * array)
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
      mecheye_ros_interface__srv__DeviceInfo_Request__fini(&array->data[i]);
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

mecheye_ros_interface__srv__DeviceInfo_Request__Sequence *
mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * array = (mecheye_ros_interface__srv__DeviceInfo_Request__Sequence *)allocator.allocate(sizeof(mecheye_ros_interface__srv__DeviceInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__destroy(mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__are_equal(const mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * lhs, const mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecheye_ros_interface__srv__DeviceInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__copy(
  const mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * input,
  mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecheye_ros_interface__srv__DeviceInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecheye_ros_interface__srv__DeviceInfo_Request * data =
      (mecheye_ros_interface__srv__DeviceInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecheye_ros_interface__srv__DeviceInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecheye_ros_interface__srv__DeviceInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecheye_ros_interface__srv__DeviceInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `model`
// Member `serial_number`
// Member `hardware_version`
// Member `firmware_version`
// Member `ip_address`
// Member `subnet_mask`
// Member `ip_assignment_method`
#include "rosidl_runtime_c/string_functions.h"

bool
mecheye_ros_interface__srv__DeviceInfo_Response__init(mecheye_ros_interface__srv__DeviceInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__init(&msg->hardware_version)) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // ip_address
  if (!rosidl_runtime_c__String__init(&msg->ip_address)) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // subnet_mask
  if (!rosidl_runtime_c__String__init(&msg->subnet_mask)) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // ip_assignment_method
  if (!rosidl_runtime_c__String__init(&msg->ip_assignment_method)) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // port
  return true;
}

void
mecheye_ros_interface__srv__DeviceInfo_Response__fini(mecheye_ros_interface__srv__DeviceInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // hardware_version
  rosidl_runtime_c__String__fini(&msg->hardware_version);
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // ip_address
  rosidl_runtime_c__String__fini(&msg->ip_address);
  // subnet_mask
  rosidl_runtime_c__String__fini(&msg->subnet_mask);
  // ip_assignment_method
  rosidl_runtime_c__String__fini(&msg->ip_assignment_method);
  // port
}

bool
mecheye_ros_interface__srv__DeviceInfo_Response__are_equal(const mecheye_ros_interface__srv__DeviceInfo_Response * lhs, const mecheye_ros_interface__srv__DeviceInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_version), &(rhs->hardware_version)))
  {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // ip_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip_address), &(rhs->ip_address)))
  {
    return false;
  }
  // subnet_mask
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->subnet_mask), &(rhs->subnet_mask)))
  {
    return false;
  }
  // ip_assignment_method
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip_assignment_method), &(rhs->ip_assignment_method)))
  {
    return false;
  }
  // port
  if (lhs->port != rhs->port) {
    return false;
  }
  return true;
}

bool
mecheye_ros_interface__srv__DeviceInfo_Response__copy(
  const mecheye_ros_interface__srv__DeviceInfo_Response * input,
  mecheye_ros_interface__srv__DeviceInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_version), &(output->hardware_version)))
  {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // ip_address
  if (!rosidl_runtime_c__String__copy(
      &(input->ip_address), &(output->ip_address)))
  {
    return false;
  }
  // subnet_mask
  if (!rosidl_runtime_c__String__copy(
      &(input->subnet_mask), &(output->subnet_mask)))
  {
    return false;
  }
  // ip_assignment_method
  if (!rosidl_runtime_c__String__copy(
      &(input->ip_assignment_method), &(output->ip_assignment_method)))
  {
    return false;
  }
  // port
  output->port = input->port;
  return true;
}

mecheye_ros_interface__srv__DeviceInfo_Response *
mecheye_ros_interface__srv__DeviceInfo_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Response * msg = (mecheye_ros_interface__srv__DeviceInfo_Response *)allocator.allocate(sizeof(mecheye_ros_interface__srv__DeviceInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecheye_ros_interface__srv__DeviceInfo_Response));
  bool success = mecheye_ros_interface__srv__DeviceInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecheye_ros_interface__srv__DeviceInfo_Response__destroy(mecheye_ros_interface__srv__DeviceInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecheye_ros_interface__srv__DeviceInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__init(mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Response * data = NULL;

  if (size) {
    data = (mecheye_ros_interface__srv__DeviceInfo_Response *)allocator.zero_allocate(size, sizeof(mecheye_ros_interface__srv__DeviceInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecheye_ros_interface__srv__DeviceInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecheye_ros_interface__srv__DeviceInfo_Response__fini(&data[i - 1]);
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
mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__fini(mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * array)
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
      mecheye_ros_interface__srv__DeviceInfo_Response__fini(&array->data[i]);
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

mecheye_ros_interface__srv__DeviceInfo_Response__Sequence *
mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * array = (mecheye_ros_interface__srv__DeviceInfo_Response__Sequence *)allocator.allocate(sizeof(mecheye_ros_interface__srv__DeviceInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__destroy(mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__are_equal(const mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * lhs, const mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecheye_ros_interface__srv__DeviceInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__copy(
  const mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * input,
  mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecheye_ros_interface__srv__DeviceInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecheye_ros_interface__srv__DeviceInfo_Response * data =
      (mecheye_ros_interface__srv__DeviceInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecheye_ros_interface__srv__DeviceInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecheye_ros_interface__srv__DeviceInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecheye_ros_interface__srv__DeviceInfo_Response__copy(
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
// #include "mecheye_ros_interface/srv/detail/device_info__functions.h"

bool
mecheye_ros_interface__srv__DeviceInfo_Event__init(mecheye_ros_interface__srv__DeviceInfo_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mecheye_ros_interface__srv__DeviceInfo_Event__fini(msg);
    return false;
  }
  // request
  if (!mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__init(&msg->request, 0)) {
    mecheye_ros_interface__srv__DeviceInfo_Event__fini(msg);
    return false;
  }
  // response
  if (!mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__init(&msg->response, 0)) {
    mecheye_ros_interface__srv__DeviceInfo_Event__fini(msg);
    return false;
  }
  return true;
}

void
mecheye_ros_interface__srv__DeviceInfo_Event__fini(mecheye_ros_interface__srv__DeviceInfo_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__fini(&msg->request);
  // response
  mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__fini(&msg->response);
}

bool
mecheye_ros_interface__srv__DeviceInfo_Event__are_equal(const mecheye_ros_interface__srv__DeviceInfo_Event * lhs, const mecheye_ros_interface__srv__DeviceInfo_Event * rhs)
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
  if (!mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mecheye_ros_interface__srv__DeviceInfo_Event__copy(
  const mecheye_ros_interface__srv__DeviceInfo_Event * input,
  mecheye_ros_interface__srv__DeviceInfo_Event * output)
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
  if (!mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mecheye_ros_interface__srv__DeviceInfo_Event *
mecheye_ros_interface__srv__DeviceInfo_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Event * msg = (mecheye_ros_interface__srv__DeviceInfo_Event *)allocator.allocate(sizeof(mecheye_ros_interface__srv__DeviceInfo_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecheye_ros_interface__srv__DeviceInfo_Event));
  bool success = mecheye_ros_interface__srv__DeviceInfo_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecheye_ros_interface__srv__DeviceInfo_Event__destroy(mecheye_ros_interface__srv__DeviceInfo_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecheye_ros_interface__srv__DeviceInfo_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__init(mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Event * data = NULL;

  if (size) {
    data = (mecheye_ros_interface__srv__DeviceInfo_Event *)allocator.zero_allocate(size, sizeof(mecheye_ros_interface__srv__DeviceInfo_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecheye_ros_interface__srv__DeviceInfo_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecheye_ros_interface__srv__DeviceInfo_Event__fini(&data[i - 1]);
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
mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__fini(mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * array)
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
      mecheye_ros_interface__srv__DeviceInfo_Event__fini(&array->data[i]);
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

mecheye_ros_interface__srv__DeviceInfo_Event__Sequence *
mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * array = (mecheye_ros_interface__srv__DeviceInfo_Event__Sequence *)allocator.allocate(sizeof(mecheye_ros_interface__srv__DeviceInfo_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__destroy(mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__are_equal(const mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * lhs, const mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecheye_ros_interface__srv__DeviceInfo_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecheye_ros_interface__srv__DeviceInfo_Event__Sequence__copy(
  const mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * input,
  mecheye_ros_interface__srv__DeviceInfo_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecheye_ros_interface__srv__DeviceInfo_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecheye_ros_interface__srv__DeviceInfo_Event * data =
      (mecheye_ros_interface__srv__DeviceInfo_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecheye_ros_interface__srv__DeviceInfo_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecheye_ros_interface__srv__DeviceInfo_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecheye_ros_interface__srv__DeviceInfo_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
