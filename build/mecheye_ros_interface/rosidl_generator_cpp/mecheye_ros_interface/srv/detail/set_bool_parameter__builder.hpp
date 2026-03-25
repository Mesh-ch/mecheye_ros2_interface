// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/SetBoolParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/set_bool_parameter.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__SET_BOOL_PARAMETER__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__SET_BOOL_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/set_bool_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_SetBoolParameter_Request_name
{
public:
  explicit Init_SetBoolParameter_Request_name(::mecheye_ros_interface::srv::SetBoolParameter_Request & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::SetBoolParameter_Request name(::mecheye_ros_interface::srv::SetBoolParameter_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SetBoolParameter_Request msg_;
};

class Init_SetBoolParameter_Request_value
{
public:
  Init_SetBoolParameter_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBoolParameter_Request_name value(::mecheye_ros_interface::srv::SetBoolParameter_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_SetBoolParameter_Request_name(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SetBoolParameter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::SetBoolParameter_Request>()
{
  return mecheye_ros_interface::srv::builder::Init_SetBoolParameter_Request_value();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_SetBoolParameter_Response_error_description
{
public:
  explicit Init_SetBoolParameter_Response_error_description(::mecheye_ros_interface::srv::SetBoolParameter_Response & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::SetBoolParameter_Response error_description(::mecheye_ros_interface::srv::SetBoolParameter_Response::_error_description_type arg)
  {
    msg_.error_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SetBoolParameter_Response msg_;
};

class Init_SetBoolParameter_Response_error_code
{
public:
  Init_SetBoolParameter_Response_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBoolParameter_Response_error_description error_code(::mecheye_ros_interface::srv::SetBoolParameter_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_SetBoolParameter_Response_error_description(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SetBoolParameter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::SetBoolParameter_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_SetBoolParameter_Response_error_code();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_SetBoolParameter_Event_response
{
public:
  explicit Init_SetBoolParameter_Event_response(::mecheye_ros_interface::srv::SetBoolParameter_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::SetBoolParameter_Event response(::mecheye_ros_interface::srv::SetBoolParameter_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SetBoolParameter_Event msg_;
};

class Init_SetBoolParameter_Event_request
{
public:
  explicit Init_SetBoolParameter_Event_request(::mecheye_ros_interface::srv::SetBoolParameter_Event & msg)
  : msg_(msg)
  {}
  Init_SetBoolParameter_Event_response request(::mecheye_ros_interface::srv::SetBoolParameter_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetBoolParameter_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SetBoolParameter_Event msg_;
};

class Init_SetBoolParameter_Event_info
{
public:
  Init_SetBoolParameter_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBoolParameter_Event_request info(::mecheye_ros_interface::srv::SetBoolParameter_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetBoolParameter_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SetBoolParameter_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::SetBoolParameter_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_SetBoolParameter_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__SET_BOOL_PARAMETER__BUILDER_HPP_
