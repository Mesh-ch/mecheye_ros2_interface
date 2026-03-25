// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mecheye_ros_interface:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#include "mecheye_ros_interface/srv/detail/device_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__DeviceInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x4f, 0x5e, 0x8f, 0xc7, 0xd2, 0xbf, 0x38,
      0x31, 0xd6, 0xdd, 0xfd, 0x13, 0x93, 0x6d, 0xeb,
      0xf2, 0x7c, 0xdf, 0x37, 0x7c, 0xb7, 0x2e, 0xf1,
      0xbb, 0xf2, 0x9f, 0xdc, 0x0b, 0x7d, 0x5d, 0x69,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__DeviceInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0xf8, 0xb4, 0x25, 0x96, 0x50, 0xd1, 0xa0,
      0xbd, 0x3c, 0xa7, 0xea, 0xce, 0x40, 0x10, 0xbc,
      0x4c, 0xa1, 0x22, 0xff, 0xf7, 0x79, 0x3e, 0x76,
      0xe9, 0x85, 0x63, 0x8d, 0x8f, 0x15, 0x5d, 0x5e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__DeviceInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x49, 0xe2, 0x78, 0xa1, 0x1f, 0x8e, 0x1b,
      0x6d, 0x35, 0x3f, 0xf6, 0x1e, 0xbf, 0x20, 0x4b,
      0x8e, 0x4f, 0x5f, 0xc6, 0x35, 0x56, 0x3a, 0x7a,
      0xee, 0xc9, 0xf4, 0x69, 0xd7, 0xe2, 0x91, 0x52,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mecheye_ros_interface
const rosidl_type_hash_t *
mecheye_ros_interface__srv__DeviceInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0xa6, 0x20, 0xbd, 0xc7, 0x1f, 0xe5, 0x2c,
      0x1e, 0x3e, 0x6f, 0x03, 0x28, 0x01, 0xa8, 0x03,
      0x8b, 0x6c, 0xa4, 0xb6, 0xb5, 0xce, 0x88, 0xbf,
      0x94, 0xa0, 0xa4, 0x7e, 0x93, 0xbc, 0x06, 0x45,
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

static char mecheye_ros_interface__srv__DeviceInfo__TYPE_NAME[] = "mecheye_ros_interface/srv/DeviceInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mecheye_ros_interface__srv__DeviceInfo_Event__TYPE_NAME[] = "mecheye_ros_interface/srv/DeviceInfo_Event";
static char mecheye_ros_interface__srv__DeviceInfo_Request__TYPE_NAME[] = "mecheye_ros_interface/srv/DeviceInfo_Request";
static char mecheye_ros_interface__srv__DeviceInfo_Response__TYPE_NAME[] = "mecheye_ros_interface/srv/DeviceInfo_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mecheye_ros_interface__srv__DeviceInfo__FIELD_NAME__request_message[] = "request_message";
static char mecheye_ros_interface__srv__DeviceInfo__FIELD_NAME__response_message[] = "response_message";
static char mecheye_ros_interface__srv__DeviceInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__DeviceInfo__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__DeviceInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__DeviceInfo_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__DeviceInfo_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mecheye_ros_interface__srv__DeviceInfo_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mecheye_ros_interface__srv__DeviceInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__DeviceInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__DeviceInfo__TYPE_NAME, 36, 36},
      {mecheye_ros_interface__srv__DeviceInfo__FIELDS, 3, 3},
    },
    {mecheye_ros_interface__srv__DeviceInfo__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mecheye_ros_interface__srv__DeviceInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mecheye_ros_interface__srv__DeviceInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mecheye_ros_interface__srv__DeviceInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__DeviceInfo_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__DeviceInfo_Request__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__DeviceInfo_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
mecheye_ros_interface__srv__DeviceInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__DeviceInfo_Request__TYPE_NAME, 44, 44},
      {mecheye_ros_interface__srv__DeviceInfo_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__model[] = "model";
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__serial_number[] = "serial_number";
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__hardware_version[] = "hardware_version";
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__firmware_version[] = "firmware_version";
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__ip_address[] = "ip_address";
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__subnet_mask[] = "subnet_mask";
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__ip_assignment_method[] = "ip_assignment_method";
static char mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__port[] = "port";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__DeviceInfo_Response__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__model, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__hardware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__ip_address, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__subnet_mask, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__ip_assignment_method, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__FIELD_NAME__port, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__DeviceInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__DeviceInfo_Response__TYPE_NAME, 45, 45},
      {mecheye_ros_interface__srv__DeviceInfo_Response__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mecheye_ros_interface__srv__DeviceInfo_Event__FIELD_NAME__info[] = "info";
static char mecheye_ros_interface__srv__DeviceInfo_Event__FIELD_NAME__request[] = "request";
static char mecheye_ros_interface__srv__DeviceInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mecheye_ros_interface__srv__DeviceInfo_Event__FIELDS[] = {
  {
    {mecheye_ros_interface__srv__DeviceInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mecheye_ros_interface__srv__DeviceInfo_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mecheye_ros_interface__srv__DeviceInfo_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mecheye_ros_interface__srv__DeviceInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {mecheye_ros_interface__srv__DeviceInfo_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mecheye_ros_interface__srv__DeviceInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mecheye_ros_interface__srv__DeviceInfo_Event__TYPE_NAME, 42, 42},
      {mecheye_ros_interface__srv__DeviceInfo_Event__FIELDS, 3, 3},
    },
    {mecheye_ros_interface__srv__DeviceInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mecheye_ros_interface__srv__DeviceInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mecheye_ros_interface__srv__DeviceInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "string model\n"
  "string serial_number\n"
  "string hardware_version\n"
  "string firmware_version\n"
  "string ip_address\n"
  "string subnet_mask\n"
  "string ip_assignment_method\n"
  "uint16 port";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__DeviceInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__DeviceInfo__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 162, 162},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__DeviceInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__DeviceInfo_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__DeviceInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__DeviceInfo_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mecheye_ros_interface__srv__DeviceInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mecheye_ros_interface__srv__DeviceInfo_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__DeviceInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__DeviceInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mecheye_ros_interface__srv__DeviceInfo_Event__get_individual_type_description_source(NULL);
    sources[3] = *mecheye_ros_interface__srv__DeviceInfo_Request__get_individual_type_description_source(NULL);
    sources[4] = *mecheye_ros_interface__srv__DeviceInfo_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__DeviceInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__DeviceInfo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__DeviceInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__DeviceInfo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mecheye_ros_interface__srv__DeviceInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mecheye_ros_interface__srv__DeviceInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mecheye_ros_interface__srv__DeviceInfo_Request__get_individual_type_description_source(NULL);
    sources[3] = *mecheye_ros_interface__srv__DeviceInfo_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
