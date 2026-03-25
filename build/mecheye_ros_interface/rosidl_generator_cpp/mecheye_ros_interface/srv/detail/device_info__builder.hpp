// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/device_info.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecheye_ros_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::DeviceInfo_Request>()
{
  return ::mecheye_ros_interface::srv::DeviceInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_DeviceInfo_Response_port
{
public:
  explicit Init_DeviceInfo_Response_port(::mecheye_ros_interface::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::DeviceInfo_Response port(::mecheye_ros_interface::srv::DeviceInfo_Response::_port_type arg)
  {
    msg_.port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_ip_assignment_method
{
public:
  explicit Init_DeviceInfo_Response_ip_assignment_method(::mecheye_ros_interface::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_port ip_assignment_method(::mecheye_ros_interface::srv::DeviceInfo_Response::_ip_assignment_method_type arg)
  {
    msg_.ip_assignment_method = std::move(arg);
    return Init_DeviceInfo_Response_port(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_subnet_mask
{
public:
  explicit Init_DeviceInfo_Response_subnet_mask(::mecheye_ros_interface::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_ip_assignment_method subnet_mask(::mecheye_ros_interface::srv::DeviceInfo_Response::_subnet_mask_type arg)
  {
    msg_.subnet_mask = std::move(arg);
    return Init_DeviceInfo_Response_ip_assignment_method(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_ip_address
{
public:
  explicit Init_DeviceInfo_Response_ip_address(::mecheye_ros_interface::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_subnet_mask ip_address(::mecheye_ros_interface::srv::DeviceInfo_Response::_ip_address_type arg)
  {
    msg_.ip_address = std::move(arg);
    return Init_DeviceInfo_Response_subnet_mask(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_firmware_version
{
public:
  explicit Init_DeviceInfo_Response_firmware_version(::mecheye_ros_interface::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_ip_address firmware_version(::mecheye_ros_interface::srv::DeviceInfo_Response::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_DeviceInfo_Response_ip_address(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_hardware_version
{
public:
  explicit Init_DeviceInfo_Response_hardware_version(::mecheye_ros_interface::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_firmware_version hardware_version(::mecheye_ros_interface::srv::DeviceInfo_Response::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_DeviceInfo_Response_firmware_version(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_serial_number
{
public:
  explicit Init_DeviceInfo_Response_serial_number(::mecheye_ros_interface::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_hardware_version serial_number(::mecheye_ros_interface::srv::DeviceInfo_Response::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_DeviceInfo_Response_hardware_version(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_model
{
public:
  Init_DeviceInfo_Response_model()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_Response_serial_number model(::mecheye_ros_interface::srv::DeviceInfo_Response::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_DeviceInfo_Response_serial_number(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::DeviceInfo_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_DeviceInfo_Response_model();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_DeviceInfo_Event_response
{
public:
  explicit Init_DeviceInfo_Event_response(::mecheye_ros_interface::srv::DeviceInfo_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::DeviceInfo_Event response(::mecheye_ros_interface::srv::DeviceInfo_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Event msg_;
};

class Init_DeviceInfo_Event_request
{
public:
  explicit Init_DeviceInfo_Event_request(::mecheye_ros_interface::srv::DeviceInfo_Event & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Event_response request(::mecheye_ros_interface::srv::DeviceInfo_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DeviceInfo_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Event msg_;
};

class Init_DeviceInfo_Event_info
{
public:
  Init_DeviceInfo_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_Event_request info(::mecheye_ros_interface::srv::DeviceInfo_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DeviceInfo_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::DeviceInfo_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::DeviceInfo_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_DeviceInfo_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_
