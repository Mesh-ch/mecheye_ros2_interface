// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecheye_ros_interface:srv/GetAllUserSets.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/get_all_user_sets.h"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ALL_USER_SETS__STRUCT_H_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ALL_USER_SETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAllUserSets in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__GetAllUserSets_Request
{
  uint8_t structure_needs_at_least_one_member;
} mecheye_ros_interface__srv__GetAllUserSets_Request;

// Struct for a sequence of mecheye_ros_interface__srv__GetAllUserSets_Request.
typedef struct mecheye_ros_interface__srv__GetAllUserSets_Request__Sequence
{
  mecheye_ros_interface__srv__GetAllUserSets_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__GetAllUserSets_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetAllUserSets in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__GetAllUserSets_Response
{
  rosidl_runtime_c__String__Sequence sequence;
} mecheye_ros_interface__srv__GetAllUserSets_Response;

// Struct for a sequence of mecheye_ros_interface__srv__GetAllUserSets_Response.
typedef struct mecheye_ros_interface__srv__GetAllUserSets_Response__Sequence
{
  mecheye_ros_interface__srv__GetAllUserSets_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__GetAllUserSets_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mecheye_ros_interface__srv__GetAllUserSets_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mecheye_ros_interface__srv__GetAllUserSets_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetAllUserSets in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__GetAllUserSets_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mecheye_ros_interface__srv__GetAllUserSets_Request__Sequence request;
  mecheye_ros_interface__srv__GetAllUserSets_Response__Sequence response;
} mecheye_ros_interface__srv__GetAllUserSets_Event;

// Struct for a sequence of mecheye_ros_interface__srv__GetAllUserSets_Event.
typedef struct mecheye_ros_interface__srv__GetAllUserSets_Event__Sequence
{
  mecheye_ros_interface__srv__GetAllUserSets_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__GetAllUserSets_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ALL_USER_SETS__STRUCT_H_
