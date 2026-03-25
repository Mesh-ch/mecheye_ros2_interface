// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/AddUserSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/add_user_set.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__ADD_USER_SET__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__ADD_USER_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/add_user_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_AddUserSet_Request_value
{
public:
  Init_AddUserSet_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecheye_ros_interface::srv::AddUserSet_Request value(::mecheye_ros_interface::srv::AddUserSet_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::AddUserSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::AddUserSet_Request>()
{
  return mecheye_ros_interface::srv::builder::Init_AddUserSet_Request_value();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_AddUserSet_Response_error_description
{
public:
  explicit Init_AddUserSet_Response_error_description(::mecheye_ros_interface::srv::AddUserSet_Response & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::AddUserSet_Response error_description(::mecheye_ros_interface::srv::AddUserSet_Response::_error_description_type arg)
  {
    msg_.error_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::AddUserSet_Response msg_;
};

class Init_AddUserSet_Response_error_code
{
public:
  Init_AddUserSet_Response_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddUserSet_Response_error_description error_code(::mecheye_ros_interface::srv::AddUserSet_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_AddUserSet_Response_error_description(msg_);
  }

private:
  ::mecheye_ros_interface::srv::AddUserSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::AddUserSet_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_AddUserSet_Response_error_code();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_AddUserSet_Event_response
{
public:
  explicit Init_AddUserSet_Event_response(::mecheye_ros_interface::srv::AddUserSet_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::AddUserSet_Event response(::mecheye_ros_interface::srv::AddUserSet_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::AddUserSet_Event msg_;
};

class Init_AddUserSet_Event_request
{
public:
  explicit Init_AddUserSet_Event_request(::mecheye_ros_interface::srv::AddUserSet_Event & msg)
  : msg_(msg)
  {}
  Init_AddUserSet_Event_response request(::mecheye_ros_interface::srv::AddUserSet_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddUserSet_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::AddUserSet_Event msg_;
};

class Init_AddUserSet_Event_info
{
public:
  Init_AddUserSet_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddUserSet_Event_request info(::mecheye_ros_interface::srv::AddUserSet_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddUserSet_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::AddUserSet_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::AddUserSet_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_AddUserSet_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__ADD_USER_SET__BUILDER_HPP_
