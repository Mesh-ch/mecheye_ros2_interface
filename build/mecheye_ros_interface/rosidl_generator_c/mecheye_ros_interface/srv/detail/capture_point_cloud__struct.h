// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecheye_ros_interface:srv/CapturePointCloud.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/capture_point_cloud.h"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__CAPTURE_POINT_CLOUD__STRUCT_H_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__CAPTURE_POINT_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CapturePointCloud in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__CapturePointCloud_Request
{
  uint8_t structure_needs_at_least_one_member;
} mecheye_ros_interface__srv__CapturePointCloud_Request;

// Struct for a sequence of mecheye_ros_interface__srv__CapturePointCloud_Request.
typedef struct mecheye_ros_interface__srv__CapturePointCloud_Request__Sequence
{
  mecheye_ros_interface__srv__CapturePointCloud_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__CapturePointCloud_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error_description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CapturePointCloud in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__CapturePointCloud_Response
{
  int32_t error_code;
  rosidl_runtime_c__String error_description;
} mecheye_ros_interface__srv__CapturePointCloud_Response;

// Struct for a sequence of mecheye_ros_interface__srv__CapturePointCloud_Response.
typedef struct mecheye_ros_interface__srv__CapturePointCloud_Response__Sequence
{
  mecheye_ros_interface__srv__CapturePointCloud_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__CapturePointCloud_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mecheye_ros_interface__srv__CapturePointCloud_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mecheye_ros_interface__srv__CapturePointCloud_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CapturePointCloud in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__CapturePointCloud_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mecheye_ros_interface__srv__CapturePointCloud_Request__Sequence request;
  mecheye_ros_interface__srv__CapturePointCloud_Response__Sequence response;
} mecheye_ros_interface__srv__CapturePointCloud_Event;

// Struct for a sequence of mecheye_ros_interface__srv__CapturePointCloud_Event.
typedef struct mecheye_ros_interface__srv__CapturePointCloud_Event__Sequence
{
  mecheye_ros_interface__srv__CapturePointCloud_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__CapturePointCloud_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__CAPTURE_POINT_CLOUD__STRUCT_H_
