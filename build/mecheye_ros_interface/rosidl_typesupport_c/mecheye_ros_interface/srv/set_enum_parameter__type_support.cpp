// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mecheye_ros_interface:srv/SetEnumParameter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mecheye_ros_interface/srv/detail/set_enum_parameter__struct.h"
#include "mecheye_ros_interface/srv/detail/set_enum_parameter__type_support.h"
#include "mecheye_ros_interface/srv/detail/set_enum_parameter__functions.h"
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

typedef struct _SetEnumParameter_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetEnumParameter_Request_type_support_ids_t;

static const _SetEnumParameter_Request_type_support_ids_t _SetEnumParameter_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetEnumParameter_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetEnumParameter_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEnumParameter_Request_type_support_symbol_names_t _SetEnumParameter_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetEnumParameter_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetEnumParameter_Request)),
  }
};

typedef struct _SetEnumParameter_Request_type_support_data_t
{
  void * data[2];
} _SetEnumParameter_Request_type_support_data_t;

static _SetEnumParameter_Request_type_support_data_t _SetEnumParameter_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEnumParameter_Request_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetEnumParameter_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetEnumParameter_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetEnumParameter_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetEnumParameter_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEnumParameter_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SetEnumParameter_Request__get_type_hash,
  &mecheye_ros_interface__srv__SetEnumParameter_Request__get_type_description,
  &mecheye_ros_interface__srv__SetEnumParameter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetEnumParameter_Request)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetEnumParameter_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_enum_parameter__struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_enum_parameter__type_support.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_enum_parameter__functions.h"
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

typedef struct _SetEnumParameter_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetEnumParameter_Response_type_support_ids_t;

static const _SetEnumParameter_Response_type_support_ids_t _SetEnumParameter_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetEnumParameter_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetEnumParameter_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEnumParameter_Response_type_support_symbol_names_t _SetEnumParameter_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetEnumParameter_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetEnumParameter_Response)),
  }
};

typedef struct _SetEnumParameter_Response_type_support_data_t
{
  void * data[2];
} _SetEnumParameter_Response_type_support_data_t;

static _SetEnumParameter_Response_type_support_data_t _SetEnumParameter_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEnumParameter_Response_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetEnumParameter_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetEnumParameter_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetEnumParameter_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetEnumParameter_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEnumParameter_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SetEnumParameter_Response__get_type_hash,
  &mecheye_ros_interface__srv__SetEnumParameter_Response__get_type_description,
  &mecheye_ros_interface__srv__SetEnumParameter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetEnumParameter_Response)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetEnumParameter_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_enum_parameter__struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_enum_parameter__type_support.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_enum_parameter__functions.h"
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

typedef struct _SetEnumParameter_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetEnumParameter_Event_type_support_ids_t;

static const _SetEnumParameter_Event_type_support_ids_t _SetEnumParameter_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetEnumParameter_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetEnumParameter_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEnumParameter_Event_type_support_symbol_names_t _SetEnumParameter_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetEnumParameter_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetEnumParameter_Event)),
  }
};

typedef struct _SetEnumParameter_Event_type_support_data_t
{
  void * data[2];
} _SetEnumParameter_Event_type_support_data_t;

static _SetEnumParameter_Event_type_support_data_t _SetEnumParameter_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEnumParameter_Event_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetEnumParameter_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetEnumParameter_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetEnumParameter_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetEnumParameter_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEnumParameter_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SetEnumParameter_Event__get_type_hash,
  &mecheye_ros_interface__srv__SetEnumParameter_Event__get_type_description,
  &mecheye_ros_interface__srv__SetEnumParameter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetEnumParameter_Event)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetEnumParameter_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/set_enum_parameter__type_support.h"
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
typedef struct _SetEnumParameter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetEnumParameter_type_support_ids_t;

static const _SetEnumParameter_type_support_ids_t _SetEnumParameter_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetEnumParameter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetEnumParameter_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEnumParameter_type_support_symbol_names_t _SetEnumParameter_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecheye_ros_interface, srv, SetEnumParameter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecheye_ros_interface, srv, SetEnumParameter)),
  }
};

typedef struct _SetEnumParameter_type_support_data_t
{
  void * data[2];
} _SetEnumParameter_type_support_data_t;

static _SetEnumParameter_type_support_data_t _SetEnumParameter_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEnumParameter_service_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SetEnumParameter_service_typesupport_ids.typesupport_identifier[0],
  &_SetEnumParameter_service_typesupport_symbol_names.symbol_name[0],
  &_SetEnumParameter_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetEnumParameter_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEnumParameter_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetEnumParameter_Request_message_type_support_handle,
  &SetEnumParameter_Response_message_type_support_handle,
  &SetEnumParameter_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    SetEnumParameter
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mecheye_ros_interface,
    srv,
    SetEnumParameter
  ),
  &mecheye_ros_interface__srv__SetEnumParameter__get_type_hash,
  &mecheye_ros_interface__srv__SetEnumParameter__get_type_description,
  &mecheye_ros_interface__srv__SetEnumParameter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mecheye_ros_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mecheye_ros_interface, srv, SetEnumParameter)() {
  return &::mecheye_ros_interface::srv::rosidl_typesupport_c::SetEnumParameter_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
