// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mecheye_ros_interface:srv/AddUserSet.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mecheye_ros_interface/srv/detail/add_user_set__functions.h"
#include "mecheye_ros_interface/srv/detail/add_user_set__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddUserSet_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddUserSet_Request_type_support_ids_t;

static const _AddUserSet_Request_type_support_ids_t _AddUserSet_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddUserSet_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddUserSet_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddUserSet_Request_type_support_symbol_names_t _AddUserSet_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, AddUserSet_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, AddUserSet_Request)),
  }
};

typedef struct _AddUserSet_Request_type_support_data_t
{
  void * data[2];
} _AddUserSet_Request_type_support_data_t;

static _AddUserSet_Request_type_support_data_t _AddUserSet_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddUserSet_Request_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_AddUserSet_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddUserSet_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddUserSet_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddUserSet_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddUserSet_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__AddUserSet_Request__get_type_hash,
  &mecheye_ros_interface__srv__AddUserSet_Request__get_type_description,
  &mecheye_ros_interface__srv__AddUserSet_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Request>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::AddUserSet_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, AddUserSet_Request)() {
  return get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/add_user_set__functions.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/add_user_set__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddUserSet_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddUserSet_Response_type_support_ids_t;

static const _AddUserSet_Response_type_support_ids_t _AddUserSet_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddUserSet_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddUserSet_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddUserSet_Response_type_support_symbol_names_t _AddUserSet_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, AddUserSet_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, AddUserSet_Response)),
  }
};

typedef struct _AddUserSet_Response_type_support_data_t
{
  void * data[2];
} _AddUserSet_Response_type_support_data_t;

static _AddUserSet_Response_type_support_data_t _AddUserSet_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddUserSet_Response_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_AddUserSet_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddUserSet_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddUserSet_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddUserSet_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddUserSet_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__AddUserSet_Response__get_type_hash,
  &mecheye_ros_interface__srv__AddUserSet_Response__get_type_description,
  &mecheye_ros_interface__srv__AddUserSet_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Response>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::AddUserSet_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, AddUserSet_Response)() {
  return get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/add_user_set__functions.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/add_user_set__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddUserSet_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddUserSet_Event_type_support_ids_t;

static const _AddUserSet_Event_type_support_ids_t _AddUserSet_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddUserSet_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddUserSet_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddUserSet_Event_type_support_symbol_names_t _AddUserSet_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, AddUserSet_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, AddUserSet_Event)),
  }
};

typedef struct _AddUserSet_Event_type_support_data_t
{
  void * data[2];
} _AddUserSet_Event_type_support_data_t;

static _AddUserSet_Event_type_support_data_t _AddUserSet_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddUserSet_Event_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_AddUserSet_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddUserSet_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddUserSet_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddUserSet_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddUserSet_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__AddUserSet_Event__get_type_hash,
  &mecheye_ros_interface__srv__AddUserSet_Event__get_type_description,
  &mecheye_ros_interface__srv__AddUserSet_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Event>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::AddUserSet_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, AddUserSet_Event)() {
  return get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mecheye_ros_interface/srv/detail/add_user_set__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecheye_ros_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddUserSet_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddUserSet_type_support_ids_t;

static const _AddUserSet_type_support_ids_t _AddUserSet_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddUserSet_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddUserSet_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddUserSet_type_support_symbol_names_t _AddUserSet_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, AddUserSet)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, AddUserSet)),
  }
};

typedef struct _AddUserSet_type_support_data_t
{
  void * data[2];
} _AddUserSet_type_support_data_t;

static _AddUserSet_type_support_data_t _AddUserSet_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddUserSet_service_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_AddUserSet_service_typesupport_ids.typesupport_identifier[0],
  &_AddUserSet_service_typesupport_symbol_names.symbol_name[0],
  &_AddUserSet_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddUserSet_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddUserSet_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mecheye_ros_interface::srv::AddUserSet_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mecheye_ros_interface::srv::AddUserSet>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mecheye_ros_interface::srv::AddUserSet>,
  &mecheye_ros_interface__srv__AddUserSet__get_type_hash,
  &mecheye_ros_interface__srv__AddUserSet__get_type_description,
  &mecheye_ros_interface__srv__AddUserSet__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mecheye_ros_interface::srv::AddUserSet>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::AddUserSet_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, AddUserSet)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mecheye_ros_interface::srv::AddUserSet>();
}

#ifdef __cplusplus
}
#endif
