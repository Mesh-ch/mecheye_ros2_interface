// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mecheye_ros_interface:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mecheye_ros_interface/srv/detail/device_info__rosidl_typesupport_introspection_c.h"
#include "mecheye_ros_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mecheye_ros_interface/srv/detail/device_info__functions.h"
#include "mecheye_ros_interface/srv/detail/device_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecheye_ros_interface__srv__DeviceInfo_Request__init(message_memory);
}

void mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_fini_function(void * message_memory)
{
  mecheye_ros_interface__srv__DeviceInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_members = {
  "mecheye_ros_interface__srv",  // message namespace
  "DeviceInfo_Request",  // message name
  1,  // number of fields
  sizeof(mecheye_ros_interface__srv__DeviceInfo_Request),
  false,  // has_any_key_member_
  mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_member_array,  // message members
  mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_type_support_handle = {
  0,
  &mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__DeviceInfo_Request__get_type_hash,
  &mecheye_ros_interface__srv__DeviceInfo_Request__get_type_description,
  &mecheye_ros_interface__srv__DeviceInfo_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecheye_ros_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Request)() {
  if (!mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_type_support_handle.typesupport_identifier) {
    mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mecheye_ros_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__functions.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__struct.h"


// Include directives for member types
// Member `model`
// Member `serial_number`
// Member `hardware_version`
// Member `firmware_version`
// Member `ip_address`
// Member `subnet_mask`
// Member `ip_assignment_method`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecheye_ros_interface__srv__DeviceInfo_Response__init(message_memory);
}

void mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_fini_function(void * message_memory)
{
  mecheye_ros_interface__srv__DeviceInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_member_array[8] = {
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hardware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, hardware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, firmware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ip_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, ip_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subnet_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, subnet_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ip_assignment_method",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, ip_assignment_method),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Response, port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_members = {
  "mecheye_ros_interface__srv",  // message namespace
  "DeviceInfo_Response",  // message name
  8,  // number of fields
  sizeof(mecheye_ros_interface__srv__DeviceInfo_Response),
  false,  // has_any_key_member_
  mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_member_array,  // message members
  mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_type_support_handle = {
  0,
  &mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__DeviceInfo_Response__get_type_hash,
  &mecheye_ros_interface__srv__DeviceInfo_Response__get_type_description,
  &mecheye_ros_interface__srv__DeviceInfo_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecheye_ros_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Response)() {
  if (!mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_type_support_handle.typesupport_identifier) {
    mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mecheye_ros_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__functions.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mecheye_ros_interface/srv/device_info.h"
// Member `request`
// Member `response`
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecheye_ros_interface__srv__DeviceInfo_Event__init(message_memory);
}

void mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_fini_function(void * message_memory)
{
  mecheye_ros_interface__srv__DeviceInfo_Event__fini(message_memory);
}

size_t mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__DeviceInfo_Event__request(
  const void * untyped_member)
{
  const mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * member =
    (const mecheye_ros_interface__srv__DeviceInfo_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__DeviceInfo_Event__request(
  const void * untyped_member, size_t index)
{
  const mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * member =
    (const mecheye_ros_interface__srv__DeviceInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__DeviceInfo_Event__request(
  void * untyped_member, size_t index)
{
  mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * member =
    (mecheye_ros_interface__srv__DeviceInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__DeviceInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mecheye_ros_interface__srv__DeviceInfo_Request * item =
    ((const mecheye_ros_interface__srv__DeviceInfo_Request *)
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__DeviceInfo_Event__request(untyped_member, index));
  mecheye_ros_interface__srv__DeviceInfo_Request * value =
    (mecheye_ros_interface__srv__DeviceInfo_Request *)(untyped_value);
  *value = *item;
}

void mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__DeviceInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mecheye_ros_interface__srv__DeviceInfo_Request * item =
    ((mecheye_ros_interface__srv__DeviceInfo_Request *)
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__DeviceInfo_Event__request(untyped_member, index));
  const mecheye_ros_interface__srv__DeviceInfo_Request * value =
    (const mecheye_ros_interface__srv__DeviceInfo_Request *)(untyped_value);
  *item = *value;
}

bool mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__DeviceInfo_Event__request(
  void * untyped_member, size_t size)
{
  mecheye_ros_interface__srv__DeviceInfo_Request__Sequence * member =
    (mecheye_ros_interface__srv__DeviceInfo_Request__Sequence *)(untyped_member);
  mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__fini(member);
  return mecheye_ros_interface__srv__DeviceInfo_Request__Sequence__init(member, size);
}

size_t mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__DeviceInfo_Event__response(
  const void * untyped_member)
{
  const mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * member =
    (const mecheye_ros_interface__srv__DeviceInfo_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__DeviceInfo_Event__response(
  const void * untyped_member, size_t index)
{
  const mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * member =
    (const mecheye_ros_interface__srv__DeviceInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__DeviceInfo_Event__response(
  void * untyped_member, size_t index)
{
  mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * member =
    (mecheye_ros_interface__srv__DeviceInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__DeviceInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mecheye_ros_interface__srv__DeviceInfo_Response * item =
    ((const mecheye_ros_interface__srv__DeviceInfo_Response *)
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__DeviceInfo_Event__response(untyped_member, index));
  mecheye_ros_interface__srv__DeviceInfo_Response * value =
    (mecheye_ros_interface__srv__DeviceInfo_Response *)(untyped_value);
  *value = *item;
}

void mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__DeviceInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mecheye_ros_interface__srv__DeviceInfo_Response * item =
    ((mecheye_ros_interface__srv__DeviceInfo_Response *)
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__DeviceInfo_Event__response(untyped_member, index));
  const mecheye_ros_interface__srv__DeviceInfo_Response * value =
    (const mecheye_ros_interface__srv__DeviceInfo_Response *)(untyped_value);
  *item = *value;
}

bool mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__DeviceInfo_Event__response(
  void * untyped_member, size_t size)
{
  mecheye_ros_interface__srv__DeviceInfo_Response__Sequence * member =
    (mecheye_ros_interface__srv__DeviceInfo_Response__Sequence *)(untyped_member);
  mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__fini(member);
  return mecheye_ros_interface__srv__DeviceInfo_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Event, request),  // bytes offset in struct
    NULL,  // default value
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__DeviceInfo_Event__request,  // size() function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__DeviceInfo_Event__request,  // get_const(index) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__DeviceInfo_Event__request,  // get(index) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__DeviceInfo_Event__request,  // fetch(index, &value) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__DeviceInfo_Event__request,  // assign(index, value) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__DeviceInfo_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mecheye_ros_interface__srv__DeviceInfo_Event, response),  // bytes offset in struct
    NULL,  // default value
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__DeviceInfo_Event__response,  // size() function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__DeviceInfo_Event__response,  // get_const(index) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__DeviceInfo_Event__response,  // get(index) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__DeviceInfo_Event__response,  // fetch(index, &value) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__DeviceInfo_Event__response,  // assign(index, value) function pointer
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__DeviceInfo_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_members = {
  "mecheye_ros_interface__srv",  // message namespace
  "DeviceInfo_Event",  // message name
  3,  // number of fields
  sizeof(mecheye_ros_interface__srv__DeviceInfo_Event),
  false,  // has_any_key_member_
  mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_member_array,  // message members
  mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_type_support_handle = {
  0,
  &mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__DeviceInfo_Event__get_type_hash,
  &mecheye_ros_interface__srv__DeviceInfo_Event__get_type_description,
  &mecheye_ros_interface__srv__DeviceInfo_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecheye_ros_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Event)() {
  mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Request)();
  mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Response)();
  if (!mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_type_support_handle.typesupport_identifier) {
    mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/device_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_service_members = {
  "mecheye_ros_interface__srv",  // service namespace
  "DeviceInfo",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_type_support_handle,
  NULL,  // response message
  // mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_type_support_handle
  NULL  // event_message
  // mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_type_support_handle
};


static rosidl_service_type_support_t mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_service_type_support_handle = {
  0,
  &mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_service_members,
  get_service_typesupport_handle_function,
  &mecheye_ros_interface__srv__DeviceInfo_Request__rosidl_typesupport_introspection_c__DeviceInfo_Request_message_type_support_handle,
  &mecheye_ros_interface__srv__DeviceInfo_Response__rosidl_typesupport_introspection_c__DeviceInfo_Response_message_type_support_handle,
  &mecheye_ros_interface__srv__DeviceInfo_Event__rosidl_typesupport_introspection_c__DeviceInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    DeviceInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    DeviceInfo
  ),
  &mecheye_ros_interface__srv__DeviceInfo__get_type_hash,
  &mecheye_ros_interface__srv__DeviceInfo__get_type_description,
  &mecheye_ros_interface__srv__DeviceInfo__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecheye_ros_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo)(void) {
  if (!mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_service_type_support_handle.typesupport_identifier) {
    mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, DeviceInfo_Event)()->data;
  }

  return &mecheye_ros_interface__srv__detail__device_info__rosidl_typesupport_introspection_c__DeviceInfo_service_type_support_handle;
}
