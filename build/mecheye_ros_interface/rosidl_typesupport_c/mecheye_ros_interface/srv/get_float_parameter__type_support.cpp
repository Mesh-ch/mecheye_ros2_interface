// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mecheye_ros_interface:srv/GetFloatParameter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mecheye_ros_interface/srv/detail/get_float_parameter__struct.h"
#include "mecheye_ros_interface/srv/detail/get_float_parameter__type_support.h"
#include "mecheye_ros_interface/srv/detail/get_float_parameter__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetFloatParameter_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetFloatParameter_Request_type_support_ids_t;

static const _GetFloatParameter_Request_type_support_ids_t _GetFloatParameter_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetFloatParameter_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetFloatParameter_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetFloatParameter_Request_type_support_symbol_names_t _GetFloatParameter_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, GetFloatParameter_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, GetFloatParameter_Request)),
  }
};

typedef struct _GetFloatParameter_Request_type_support_data_t
{
  void * data[2];
} _GetFloatParameter_Request_type_support_data_t;

static _GetFloatParameter_Request_type_support_data_t _GetFloatParameter_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetFloatParameter_Request_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_GetFloatParameter_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetFloatParameter_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetFloatParameter_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetFloatParameter_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetFloatParameter_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__GetFloatParameter_Request__get_type_hash,
  &mecheye_ros_interface__srv__GetFloatParameter_Request__get_type_description,
  &mecheye_ros_interface__srv__GetFloatParameter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, GetFloatParameter_Request)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::GetFloatParameter_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/get_float_parameter__struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/get_float_parameter__type_support.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/get_float_parameter__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetFloatParameter_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetFloatParameter_Response_type_support_ids_t;

static const _GetFloatParameter_Response_type_support_ids_t _GetFloatParameter_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetFloatParameter_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetFloatParameter_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetFloatParameter_Response_type_support_symbol_names_t _GetFloatParameter_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, GetFloatParameter_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, GetFloatParameter_Response)),
  }
};

typedef struct _GetFloatParameter_Response_type_support_data_t
{
  void * data[2];
} _GetFloatParameter_Response_type_support_data_t;

static _GetFloatParameter_Response_type_support_data_t _GetFloatParameter_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetFloatParameter_Response_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_GetFloatParameter_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetFloatParameter_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetFloatParameter_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetFloatParameter_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetFloatParameter_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__GetFloatParameter_Response__get_type_hash,
  &mecheye_ros_interface__srv__GetFloatParameter_Response__get_type_description,
  &mecheye_ros_interface__srv__GetFloatParameter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, GetFloatParameter_Response)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::GetFloatParameter_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/get_float_parameter__struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/get_float_parameter__type_support.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/get_float_parameter__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetFloatParameter_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetFloatParameter_Event_type_support_ids_t;

static const _GetFloatParameter_Event_type_support_ids_t _GetFloatParameter_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetFloatParameter_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetFloatParameter_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetFloatParameter_Event_type_support_symbol_names_t _GetFloatParameter_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, GetFloatParameter_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, GetFloatParameter_Event)),
  }
};

typedef struct _GetFloatParameter_Event_type_support_data_t
{
  void * data[2];
} _GetFloatParameter_Event_type_support_data_t;

static _GetFloatParameter_Event_type_support_data_t _GetFloatParameter_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetFloatParameter_Event_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_GetFloatParameter_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetFloatParameter_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetFloatParameter_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetFloatParameter_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetFloatParameter_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__GetFloatParameter_Event__get_type_hash,
  &mecheye_ros_interface__srv__GetFloatParameter_Event__get_type_description,
  &mecheye_ros_interface__srv__GetFloatParameter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, GetFloatParameter_Event)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::GetFloatParameter_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/get_float_parameter__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetFloatParameter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetFloatParameter_type_support_ids_t;

static const _GetFloatParameter_type_support_ids_t _GetFloatParameter_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetFloatParameter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetFloatParameter_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetFloatParameter_type_support_symbol_names_t _GetFloatParameter_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, GetFloatParameter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, GetFloatParameter)),
  }
};

typedef struct _GetFloatParameter_type_support_data_t
{
  void * data[2];
} _GetFloatParameter_type_support_data_t;

static _GetFloatParameter_type_support_data_t _GetFloatParameter_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetFloatParameter_service_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_GetFloatParameter_service_typesupport_ids.typesupport_identifier[0],
  &_GetFloatParameter_service_typesupport_symbol_names.symbol_name[0],
  &_GetFloatParameter_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetFloatParameter_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetFloatParameter_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetFloatParameter_Request_message_type_support_handle,
  &GetFloatParameter_Response_message_type_support_handle,
  &GetFloatParameter_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    GetFloatParameter
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    GetFloatParameter
  ),
  &mecheye_ros_interface__srv__GetFloatParameter__get_type_hash,
  &mecheye_ros_interface__srv__GetFloatParameter__get_type_description,
  &mecheye_ros_interface__srv__GetFloatParameter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, GetFloatParameter)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::GetFloatParameter_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
