// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mecheye_ros_interface:srv/SetRangeParameter.idl
// generated code does not contain a copyright notice

#include "mecheye_ros_interface/srv/detail/set_range_parameter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__SetRangeParameter__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x98, 0xf7, 0x9c, 0xec, 0x47, 0x09, 0x93,
      0x91, 0x10, 0x77, 0x93, 0xee, 0x2a, 0x05, 0x8d,
      0x3b, 0x76, 0xc6, 0xcc, 0x3c, 0xdb, 0x6d, 0x5a,
      0x52, 0x87, 0x48, 0x14, 0xe3, 0x26, 0xf5, 0x27,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__SetRangeParameter_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x9a, 0x2b, 0xbe, 0x27, 0xfd, 0x12, 0x21,
      0xa9, 0xdc, 0x1b, 0xc3, 0x16, 0x04, 0x1a, 0xb1,
      0xb3, 0x23, 0x10, 0xe6, 0x90, 0x5d, 0x26, 0xb4,
      0xe3, 0x10, 0x32, 0x4a, 0x6f, 0xdc, 0x77, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__SetRangeParameter_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x9a, 0x0d, 0x66, 0x1f, 0x20, 0xb1, 0x4a,
      0x70, 0x54, 0x53, 0x2b, 0x4d, 0x9a, 0xb1, 0x89,
      0xc6, 0x41, 0x18, 0xa4, 0xe5, 0x18, 0xa4, 0xbf,
      0x1c, 0xeb, 0x93, 0xba, 0xd8, 0x8a, 0xdf, 0x7d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__SetRangeParameter_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0xc0, 0xff, 0x48, 0xd7, 0xad, 0xb7, 0x30,
      0x61, 0xe9, 0x5d, 0x48, 0x25, 0x1a, 0xfb, 0xf6,
      0xa7, 0xf4, 0x54, 0x42, 0xdd, 0xfb, 0x9b, 0xfc,
      0x1a, 0x4e, 0x98, 0xbe, 0xab, 0x79, 0x29, 0x85,
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

static char mecheye_ros_interface__srv__SetRangeParameter__TYPE_NAME[] = "mecheye_ros_interface/srv/SetRangeParameter";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mecheye_ros_interface__srv__SetRangeParameter_Event__TYPE_NAME[] = "mecheye_ros_interface/srv/SetRangeParameter_Event";
static char mecheye_ros_interface__srv__SetRangeParameter_Request__TYPE_NAME[] = "mecheye_ros_interface/srv/SetRangeParameter_Request";
static char mecheye_ros_interface__srv__SetRangeParameter_Response__TYPE_NAME[] = "mecheye_ros_interface/srv/SetRangeParameter_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mecheye_ros_interface__srv__SetRangeParameter__FIELD_NAME__request_message[] = "request_message";
static char mecheye_ros_interface__srv__SetRangeParameter__FIELD_NAME__response_message[] = "response_message";
static char mecheye_ros_interface__srv__SetRangeParameter__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__SetRangeParameter__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__SetRangeParameter__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__SetRangeParameter_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__SetRangeParameter_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__SetRangeParameter_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mecheye_ros_interface__srv__SetRangeParameter__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__SetRangeParameter__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__SetRangeParameter__TYPE_NAME, 43, 43},
      {mecheye_ros_interface__srv__SetRangeParameter__FIELDS, 3, 3},
    },
    {mecheye_ros_interface__srv__SetRangeParameter__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mecheye_ros_interface__srv__SetRangeParameter_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mecheye_ros_interface__srv__SetRangeParameter_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mecheye_ros_interface__srv__SetRangeParameter_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__SetRangeParameter_Request__FIELD_NAME__name[] = "name";
static char mecheye_ros_interface__srv__SetRangeParameter_Request__FIELD_NAME__lower[] = "lower";
static char mecheye_ros_interface__srv__SetRangeParameter_Request__FIELD_NAME__upper[] = "upper";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__SetRangeParameter_Request__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Request__FIELD_NAME__lower, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Request__FIELD_NAME__upper, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__SetRangeParameter_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__SetRangeParameter_Request__TYPE_NAME, 51, 51},
      {mecheye_ros_interface__srv__SetRangeParameter_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__SetRangeParameter_Response__FIELD_NAME__error_code[] = "error_code";
static char mecheye_ros_interface__srv__SetRangeParameter_Response__FIELD_NAME__error_description[] = "error_description";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__SetRangeParameter_Response__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Response__FIELD_NAME__error_description, 17, 17},
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
mecheye_ros_interface__srv__SetRangeParameter_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__SetRangeParameter_Response__TYPE_NAME, 52, 52},
      {mecheye_ros_interface__srv__SetRangeParameter_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__SetRangeParameter_Event__FIELD_NAME__info[] = "info";
static char mecheye_ros_interface__srv__SetRangeParameter_Event__FIELD_NAME__request[] = "request";
static char mecheye_ros_interface__srv__SetRangeParameter_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__SetRangeParameter_Event__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mecheye_ros_interface__srv__SetRangeParameter_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mecheye_ros_interface__srv__SetRangeParameter_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mecheye_ros_interface__srv__SetRangeParameter_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__SetRangeParameter_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__SetRangeParameter_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__SetRangeParameter_Event__TYPE_NAME, 49, 49},
      {mecheye_ros_interface__srv__SetRangeParameter_Event__FIELDS, 3, 3},
    },
    {mecheye_ros_interface__srv__SetRangeParameter_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mecheye_ros_interface__srv__SetRangeParameter_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mecheye_ros_interface__srv__SetRangeParameter_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32 lower\n"
  "int32 upper\n"
  "---\n"
  "int32 error_code\n"
  "string error_description";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__SetRangeParameter__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__SetRangeParameter__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__SetRangeParameter_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__SetRangeParameter_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__SetRangeParameter_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__SetRangeParameter_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__SetRangeParameter_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__SetRangeParameter_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__SetRangeParameter__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__SetRangeParameter__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mecheye_ros_interface__srv__SetRangeParameter_Event__get_individual_type_description_source(NULL);
    sources[3] = *mecheye_ros_interface__srv__SetRangeParameter_Request__get_individual_type_description_source(NULL);
    sources[4] = *mecheye_ros_interface__srv__SetRangeParameter_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__SetRangeParameter_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__SetRangeParameter_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__SetRangeParameter_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__SetRangeParameter_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__SetRangeParameter_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__SetRangeParameter_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mecheye_ros_interface__srv__SetRangeParameter_Request__get_individual_type_description_source(NULL);
    sources[3] = *mecheye_ros_interface__srv__SetRangeParameter_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
