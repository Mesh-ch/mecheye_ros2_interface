// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecheye_ros_interface:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/device_info.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__TRAITS_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecheye_ros_interface/srv/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecheye_ros_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const DeviceInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_generator_traits
{

[[deprecated("use mecheye_ros_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecheye_ros_interface::srv::DeviceInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecheye_ros_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecheye_ros_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecheye_ros_interface::srv::DeviceInfo_Request & msg)
{
  return mecheye_ros_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecheye_ros_interface::srv::DeviceInfo_Request>()
{
  return "mecheye_ros_interface::srv::DeviceInfo_Request";
}

template<>
inline const char * name<mecheye_ros_interface::srv::DeviceInfo_Request>()
{
  return "mecheye_ros_interface/srv/DeviceInfo_Request";
}

template<>
struct has_fixed_size<mecheye_ros_interface::srv::DeviceInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecheye_ros_interface::srv::DeviceInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecheye_ros_interface::srv::DeviceInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mecheye_ros_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const DeviceInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: hardware_version
  {
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: ip_address
  {
    out << "ip_address: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_address, out);
    out << ", ";
  }

  // member: subnet_mask
  {
    out << "subnet_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.subnet_mask, out);
    out << ", ";
  }

  // member: ip_assignment_method
  {
    out << "ip_assignment_method: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_assignment_method, out);
    out << ", ";
  }

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: ip_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip_address: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_address, out);
    out << "\n";
  }

  // member: subnet_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subnet_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.subnet_mask, out);
    out << "\n";
  }

  // member: ip_assignment_method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip_assignment_method: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_assignment_method, out);
    out << "\n";
  }

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_generator_traits
{

[[deprecated("use mecheye_ros_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecheye_ros_interface::srv::DeviceInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecheye_ros_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecheye_ros_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecheye_ros_interface::srv::DeviceInfo_Response & msg)
{
  return mecheye_ros_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecheye_ros_interface::srv::DeviceInfo_Response>()
{
  return "mecheye_ros_interface::srv::DeviceInfo_Response";
}

template<>
inline const char * name<mecheye_ros_interface::srv::DeviceInfo_Response>()
{
  return "mecheye_ros_interface/srv/DeviceInfo_Response";
}

template<>
struct has_fixed_size<mecheye_ros_interface::srv::DeviceInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mecheye_ros_interface::srv::DeviceInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mecheye_ros_interface::srv::DeviceInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mecheye_ros_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const DeviceInfo_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceInfo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceInfo_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace rosidl_generator_traits
{

[[deprecated("use mecheye_ros_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecheye_ros_interface::srv::DeviceInfo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecheye_ros_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecheye_ros_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecheye_ros_interface::srv::DeviceInfo_Event & msg)
{
  return mecheye_ros_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecheye_ros_interface::srv::DeviceInfo_Event>()
{
  return "mecheye_ros_interface::srv::DeviceInfo_Event";
}

template<>
inline const char * name<mecheye_ros_interface::srv::DeviceInfo_Event>()
{
  return "mecheye_ros_interface/srv/DeviceInfo_Event";
}

template<>
struct has_fixed_size<mecheye_ros_interface::srv::DeviceInfo_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mecheye_ros_interface::srv::DeviceInfo_Event>
  : std::integral_constant<bool, has_bounded_size<mecheye_ros_interface::srv::DeviceInfo_Request>::value && has_bounded_size<mecheye_ros_interface::srv::DeviceInfo_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mecheye_ros_interface::srv::DeviceInfo_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecheye_ros_interface::srv::DeviceInfo>()
{
  return "mecheye_ros_interface::srv::DeviceInfo";
}

template<>
inline const char * name<mecheye_ros_interface::srv::DeviceInfo>()
{
  return "mecheye_ros_interface/srv/DeviceInfo";
}

template<>
struct has_fixed_size<mecheye_ros_interface::srv::DeviceInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<mecheye_ros_interface::srv::DeviceInfo_Request>::value &&
    has_fixed_size<mecheye_ros_interface::srv::DeviceInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecheye_ros_interface::srv::DeviceInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<mecheye_ros_interface::srv::DeviceInfo_Request>::value &&
    has_bounded_size<mecheye_ros_interface::srv::DeviceInfo_Response>::value
  >
{
};

template<>
struct is_service<mecheye_ros_interface::srv::DeviceInfo>
  : std::true_type
{
};

template<>
struct is_service_request<mecheye_ros_interface::srv::DeviceInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecheye_ros_interface::srv::DeviceInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__TRAITS_HPP_
