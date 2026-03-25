// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mecheye_ros_interface:srv/SetFloatParameter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mecheye_ros_interface/srv/detail/set_float_parameter__struct.h"
#include "mecheye_ros_interface/srv/detail/set_float_parameter__type_support.h"
#include "mecheye_ros_interface/srv/detail/set_float_parameter__functions.h"
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

typedef struct _SetFloatParameter_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloatParameter_Request_type_support_ids_t;

static const _SetFloatParameter_Request_type_support_ids_t _SetFloatParameter_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetFloatParameter_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloatParameter_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloatParameter_Request_type_support_symbol_names_t _SetFloatParameter_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetFloatParameter_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetFloatParameter_Request)),
  }
};

typedef struct _SetFloatParameter_Request_type_support_data_t
{
  void * data[2];
} _SetFloatParameter_Request_type_support_data_t;

static _SetFloatParameter_Request_type_support_data_t _SetFloatParameter_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloatParameter_Request_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetFloatParameter_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetFloatParameter_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetFloatParameter_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetFloatParameter_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloatParameter_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SetFloatParameter_Request__get_type_hash,
  &mecheye_ros_interface__srv__SetFloatParameter_Request__get_type_description,
  &mecheye_ros_interface__srv__SetFloatParameter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetFloatParameter_Request)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetFloatParameter_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_float_parameter__struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_float_parameter__type_support.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_float_parameter__functions.h"
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

typedef struct _SetFloatParameter_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloatParameter_Response_type_support_ids_t;

static const _SetFloatParameter_Response_type_support_ids_t _SetFloatParameter_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetFloatParameter_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloatParameter_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloatParameter_Response_type_support_symbol_names_t _SetFloatParameter_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetFloatParameter_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetFloatParameter_Response)),
  }
};

typedef struct _SetFloatParameter_Response_type_support_data_t
{
  void * data[2];
} _SetFloatParameter_Response_type_support_data_t;

static _SetFloatParameter_Response_type_support_data_t _SetFloatParameter_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloatParameter_Response_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetFloatParameter_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetFloatParameter_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetFloatParameter_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetFloatParameter_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloatParameter_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SetFloatParameter_Response__get_type_hash,
  &mecheye_ros_interface__srv__SetFloatParameter_Response__get_type_description,
  &mecheye_ros_interface__srv__SetFloatParameter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetFloatParameter_Response)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetFloatParameter_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_float_parameter__struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_float_parameter__type_support.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_float_parameter__functions.h"
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

typedef struct _SetFloatParameter_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloatParameter_Event_type_support_ids_t;

static const _SetFloatParameter_Event_type_support_ids_t _SetFloatParameter_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetFloatParameter_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloatParameter_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloatParameter_Event_type_support_symbol_names_t _SetFloatParameter_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetFloatParameter_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetFloatParameter_Event)),
  }
};

typedef struct _SetFloatParameter_Event_type_support_data_t
{
  void * data[2];
} _SetFloatParameter_Event_type_support_data_t;

static _SetFloatParameter_Event_type_support_data_t _SetFloatParameter_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloatParameter_Event_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetFloatParameter_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetFloatParameter_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetFloatParameter_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetFloatParameter_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloatParameter_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SetFloatParameter_Event__get_type_hash,
  &mecheye_ros_interface__srv__SetFloatParameter_Event__get_type_description,
  &mecheye_ros_interface__srv__SetFloatParameter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetFloatParameter_Event)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetFloatParameter_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_float_parameter__type_support.h"
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
typedef struct _SetFloatParameter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloatParameter_type_support_ids_t;

static const _SetFloatParameter_type_support_ids_t _SetFloatParameter_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetFloatParameter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloatParameter_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloatParameter_type_support_symbol_names_t _SetFloatParameter_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetFloatParameter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetFloatParameter)),
  }
};

typedef struct _SetFloatParameter_type_support_data_t
{
  void * data[2];
} _SetFloatParameter_type_support_data_t;

static _SetFloatParameter_type_support_data_t _SetFloatParameter_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloatParameter_service_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetFloatParameter_service_typesupport_ids.typesupport_identifier[0],
  &_SetFloatParameter_service_typesupport_symbol_names.symbol_name[0],
  &_SetFloatParameter_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetFloatParameter_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloatParameter_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetFloatParameter_Request_message_type_support_handle,
  &SetFloatParameter_Response_message_type_support_handle,
  &SetFloatParameter_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    SetFloatParameter
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    SetFloatParameter
  ),
  &mecheye_ros_interface__srv__SetFloatParameter__get_type_hash,
  &mecheye_ros_interface__srv__SetFloatParameter__get_type_description,
  &mecheye_ros_interface__srv__SetFloatParameter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetFloatParameter)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetFloatParameter_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
