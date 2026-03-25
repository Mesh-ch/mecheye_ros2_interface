// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecheye_ros_interface:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/device_info.h"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__STRUCT_H_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DeviceInfo in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__DeviceInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} mecheye_ros_interface__srv__DeviceInfo_Request;

// Struct for a sequence of mecheye_ros_interface__srv__DeviceInfo_Request.
typedef struct mecheye_ros_interface__srv__DeviceInfo_Request__Sequence
{
  mecheye_ros_interface__srv__DeviceInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__DeviceInfo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'model'
// Member 'serial_number'
// Member 'hardware_version'
// Member 'firmware_version'
// Member 'ip_address'
// Member 'subnet_mask'
// Member 'ip_assignment_method'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeviceInfo in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__DeviceInfo_Response
{
  rosidl_runtime_c__String model;
  rosidl_runtime_c__String serial_number;
  rosidl_runtime_c__String hardware_version;
  rosidl_runtime_c__String firmware_version;
  rosidl_runtime_c__String ip_address;
  rosidl_runtime_c__String subnet_mask;
  rosidl_runtime_c__String ip_assignment_method;
  uint16_t port;
} mecheye_ros_interface__srv__DeviceInfo_Response;

// Struct for a sequence of mecheye_ros_interface__srv__DeviceInfo_Response.
typedef struct mecheye_ros_interface__srv__DeviceInfo_Response__Sequence
{
  mecheye_ros_interface__srv__DeviceInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__DeviceInfo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mecheye_ros_interface__srv__DeviceInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mecheye_ros_interface__srv__DeviceInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DeviceInfo in the package mecheye_ros_interface.
typedef struct mecheye_ros_interface__srv__DeviceInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mecheye_ros_interface__srv__DeviceInfo_Request__Sequence request;
  mecheye_ros_interface__srv__DeviceInfo_Response__Sequence response;
} mecheye_ros_interface__srv__DeviceInfo_Event;

// Struct for a sequence of mecheye_ros_interface__srv__DeviceInfo_Event.
typedef struct mecheye_ros_interface__srv__DeviceInfo_Event__Sequence
{
  mecheye_ros_interface__srv__DeviceInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecheye_ros_interface__srv__DeviceInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__STRUCT_H_
