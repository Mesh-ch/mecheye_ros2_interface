// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mecheye_ros_interface:srv/SaveAllSettingsToUserSets.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__functions.h"
#include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__struct.hpp"
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

typedef struct _SaveAllSettingsToUserSets_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveAllSettingsToUserSets_Request_type_support_ids_t;

static const _SaveAllSettingsToUserSets_Request_type_support_ids_t _SaveAllSettingsToUserSets_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveAllSettingsToUserSets_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveAllSettingsToUserSets_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveAllSettingsToUserSets_Request_type_support_symbol_names_t _SaveAllSettingsToUserSets_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Request)),
  }
};

typedef struct _SaveAllSettingsToUserSets_Request_type_support_data_t
{
  void * data[2];
} _SaveAllSettingsToUserSets_Request_type_support_data_t;

static _SaveAllSettingsToUserSets_Request_type_support_data_t _SaveAllSettingsToUserSets_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveAllSettingsToUserSets_Request_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SaveAllSettingsToUserSets_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SaveAllSettingsToUserSets_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SaveAllSettingsToUserSets_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveAllSettingsToUserSets_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveAllSettingsToUserSets_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Request__get_type_hash,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Request__get_type_description,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Request>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::SaveAllSettingsToUserSets_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Request)() {
  return get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Request>();
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
// #include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__functions.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__struct.hpp"
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

typedef struct _SaveAllSettingsToUserSets_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveAllSettingsToUserSets_Response_type_support_ids_t;

static const _SaveAllSettingsToUserSets_Response_type_support_ids_t _SaveAllSettingsToUserSets_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveAllSettingsToUserSets_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveAllSettingsToUserSets_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveAllSettingsToUserSets_Response_type_support_symbol_names_t _SaveAllSettingsToUserSets_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Response)),
  }
};

typedef struct _SaveAllSettingsToUserSets_Response_type_support_data_t
{
  void * data[2];
} _SaveAllSettingsToUserSets_Response_type_support_data_t;

static _SaveAllSettingsToUserSets_Response_type_support_data_t _SaveAllSettingsToUserSets_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveAllSettingsToUserSets_Response_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SaveAllSettingsToUserSets_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SaveAllSettingsToUserSets_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SaveAllSettingsToUserSets_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveAllSettingsToUserSets_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveAllSettingsToUserSets_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Response__get_type_hash,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Response__get_type_description,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::SaveAllSettingsToUserSets_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Response)() {
  return get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response>();
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
// #include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__functions.h"
// already included above
// #include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__struct.hpp"
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

typedef struct _SaveAllSettingsToUserSets_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveAllSettingsToUserSets_Event_type_support_ids_t;

static const _SaveAllSettingsToUserSets_Event_type_support_ids_t _SaveAllSettingsToUserSets_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveAllSettingsToUserSets_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveAllSettingsToUserSets_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveAllSettingsToUserSets_Event_type_support_symbol_names_t _SaveAllSettingsToUserSets_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Event)),
  }
};

typedef struct _SaveAllSettingsToUserSets_Event_type_support_data_t
{
  void * data[2];
} _SaveAllSettingsToUserSets_Event_type_support_data_t;

static _SaveAllSettingsToUserSets_Event_type_support_data_t _SaveAllSettingsToUserSets_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveAllSettingsToUserSets_Event_message_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SaveAllSettingsToUserSets_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SaveAllSettingsToUserSets_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SaveAllSettingsToUserSets_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveAllSettingsToUserSets_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveAllSettingsToUserSets_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Event__get_type_hash,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Event__get_type_description,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::SaveAllSettingsToUserSets_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets_Event)() {
  return get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event>();
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
// #include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__struct.hpp"
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

typedef struct _SaveAllSettingsToUserSets_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveAllSettingsToUserSets_type_support_ids_t;

static const _SaveAllSettingsToUserSets_type_support_ids_t _SaveAllSettingsToUserSets_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveAllSettingsToUserSets_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveAllSettingsToUserSets_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveAllSettingsToUserSets_type_support_symbol_names_t _SaveAllSettingsToUserSets_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets)),
  }
};

typedef struct _SaveAllSettingsToUserSets_type_support_data_t
{
  void * data[2];
} _SaveAllSettingsToUserSets_type_support_data_t;

static _SaveAllSettingsToUserSets_type_support_data_t _SaveAllSettingsToUserSets_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveAllSettingsToUserSets_service_typesupport_map = {
  2,
  "mecheye_ros_interface",
  &_SaveAllSettingsToUserSets_service_typesupport_ids.typesupport_identifier[0],
  &_SaveAllSettingsToUserSets_service_typesupport_symbol_names.symbol_name[0],
  &_SaveAllSettingsToUserSets_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SaveAllSettingsToUserSets_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveAllSettingsToUserSets_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mecheye_ros_interface::srv::SaveAllSettingsToUserSets>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mecheye_ros_interface::srv::SaveAllSettingsToUserSets>,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets__get_type_hash,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets__get_type_description,
  &mecheye_ros_interface__srv__SaveAllSettingsToUserSets__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets>()
{
  return &::mecheye_ros_interface::srv::rosidl_typesupport_cpp::SaveAllSettingsToUserSets_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mecheye_ros_interface, srv, SaveAllSettingsToUserSets)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mecheye_ros_interface::srv::SaveAllSettingsToUserSets>();
}

#ifdef __cplusplus
}
#endif
