// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mecheye_ros_interface:srv/CaptureDepthMap.idl
// generated code does not contain a copyright notice

#include "mecheye_ros_interface/srv/detail/capture_depth_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__CaptureDepthMap__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x10, 0x94, 0xc5, 0xae, 0x64, 0xba, 0xed,
      0x87, 0x19, 0x39, 0xe7, 0x26, 0x3a, 0xa7, 0x09,
      0xdc, 0x5d, 0x8a, 0xa4, 0x03, 0x1c, 0x07, 0xb1,
      0xd3, 0xfe, 0x47, 0xf2, 0x1c, 0x4f, 0x08, 0x9c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__CaptureDepthMap_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0xe0, 0x2a, 0xb9, 0x5f, 0x68, 0xd7, 0x99,
      0xbc, 0xe3, 0x0e, 0xfc, 0x3b, 0xa0, 0x29, 0x19,
      0x0a, 0xff, 0xd9, 0x4d, 0x42, 0x38, 0x9c, 0x54,
      0x24, 0x2b, 0x8e, 0x23, 0xab, 0x50, 0xc3, 0x03,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__CaptureDepthMap_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x4c, 0x5c, 0x59, 0xfb, 0xea, 0x05, 0xf7,
      0xf7, 0xb6, 0xf1, 0xc5, 0x20, 0x9b, 0xde, 0x7a,
      0xac, 0xbc, 0x8d, 0x68, 0xcd, 0xc1, 0x75, 0x70,
      0x13, 0x09, 0x2f, 0xdf, 0xe3, 0xa6, 0xe5, 0x5a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__CaptureDepthMap_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x46, 0x4c, 0xcd, 0xf6, 0x41, 0xf5, 0xcd,
      0xbf, 0xc2, 0x28, 0x00, 0xd4, 0x31, 0x3b, 0x32,
      0x30, 0xac, 0x28, 0xc1, 0x4d, 0xcf, 0x03, 0x0e,
      0x44, 0xb3, 0xe4, 0xd8, 0x48, 0x8f, 0x07, 0xa7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char mecheye_ros_interface__srv__CaptureDepthMap__TYPE_NAME[] = "mecheye_ros_interface/srv/CaptureDepthMap";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mecheye_ros_interface__srv__CaptureDepthMap_Event__TYPE_NAME[] = "mecheye_ros_interface/srv/CaptureDepthMap_Event";
static char mecheye_ros_interface__srv__CaptureDepthMap_Request__TYPE_NAME[] = "mecheye_ros_interface/srv/CaptureDepthMap_Request";
static char mecheye_ros_interface__srv__CaptureDepthMap_Response__TYPE_NAME[] = "mecheye_ros_interface/srv/CaptureDepthMap_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mecheye_ros_interface__srv__CaptureDepthMap__FIELD_NAME__request_message[] = "request_message";
static char mecheye_ros_interface__srv__CaptureDepthMap__FIELD_NAME__response_message[] = "response_message";
static char mecheye_ros_interface__srv__CaptureDepthMap__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__CaptureDepthMap__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__CaptureDepthMap__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__CaptureDepthMap_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__CaptureDepthMap_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__CaptureDepthMap_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mecheye_ros_interface__srv__CaptureDepthMap__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__CaptureDepthMap__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__CaptureDepthMap__TYPE_NAME, 41, 41},
      {mecheye_ros_interface__srv__CaptureDepthMap__FIELDS, 3, 3},
    },
    {mecheye_ros_interface__srv__CaptureDepthMap__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mecheye_ros_interface__srv__CaptureDepthMap_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mecheye_ros_interface__srv__CaptureDepthMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mecheye_ros_interface__srv__CaptureDepthMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__CaptureDepthMap_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__CaptureDepthMap_Request__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__CaptureDepthMap_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__CaptureDepthMap_Request__TYPE_NAME, 49, 49},
      {mecheye_ros_interface__srv__CaptureDepthMap_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__CaptureDepthMap_Response__FIELD_NAME__error_code[] = "error_code";
static char mecheye_ros_interface__srv__CaptureDepthMap_Response__FIELD_NAME__error_description[] = "error_description";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__CaptureDepthMap_Response__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Response__FIELD_NAME__error_description, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__CaptureDepthMap_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__CaptureDepthMap_Response__TYPE_NAME, 50, 50},
      {mecheye_ros_interface__srv__CaptureDepthMap_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELD_NAME__info[] = "info";
static char mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELD_NAME__request[] = "request";
static char mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mecheye_ros_interface__srv__CaptureDepthMap_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mecheye_ros_interface__srv__CaptureDepthMap_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mecheye_ros_interface__srv__CaptureDepthMap_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__CaptureDepthMap_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__CaptureDepthMap_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__CaptureDepthMap_Event__TYPE_NAME, 47, 47},
      {mecheye_ros_interface__srv__CaptureDepthMap_Event__FIELDS, 3, 3},
    },
    {mecheye_ros_interface__srv__CaptureDepthMap_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mecheye_ros_interface__srv__CaptureDepthMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mecheye_ros_interface__srv__CaptureDepthMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "int32 error_code\n"
  "string error_description";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__CaptureDepthMap__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__CaptureDepthMap__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__CaptureDepthMap_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__CaptureDepthMap_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__CaptureDepthMap_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__CaptureDepthMap_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__CaptureDepthMap_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__CaptureDepthMap_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__CaptureDepthMap__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__CaptureDepthMap__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mecheye_ros_interface__srv__CaptureDepthMap_Event__get_individual_type_description_source(NULL);
    sources[3] = *mecheye_ros_interface__srv__CaptureDepthMap_Request__get_individual_type_description_source(NULL);
    sources[4] = *mecheye_ros_interface__srv__CaptureDepthMap_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__CaptureDepthMap_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__CaptureDepthMap_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__CaptureDepthMap_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__CaptureDepthMap_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__CaptureDepthMap_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__CaptureDepthMap_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mecheye_ros_interface__srv__CaptureDepthMap_Request__get_individual_type_description_source(NULL);
    sources[3] = *mecheye_ros_interface__srv__CaptureDepthMap_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
