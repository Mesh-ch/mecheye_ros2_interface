// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from mecheye_ros_interface:srv/SetFloatArrayParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/set_float_array_parameter.h"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__SET_FLOAT_ARRAY_PARAMETER__TYPE_SUPPORT_H_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__SET_FLOAT_ARRAY_PARAMETER__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "mecheye_ros_interface/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  mecheye_ros_interface,
  srv,
  SetFloatArrayParameter_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  mecheye_ros_interface,
  srv,
  SetFloatArrayParameter_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  mecheye_ros_interface,
  srv,
  SetFloatArrayParameter_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  mecheye_ros_interface,
  srv,
  SetFloatArrayParameter
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  mecheye_ros_interface,
  srv,
  SetFloatArrayParameter
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  mecheye_ros_interface,
  srv,
  SetFloatArrayParameter
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__SET_FLOAT_ARRAY_PARAMETER__TYPE_SUPPORT_H_
