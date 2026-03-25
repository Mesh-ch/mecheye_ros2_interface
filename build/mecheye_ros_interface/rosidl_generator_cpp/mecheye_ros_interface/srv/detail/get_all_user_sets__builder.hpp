// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/GetAllUserSets.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/get_all_user_sets.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ALL_USER_SETS__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ALL_USER_SETS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/get_all_user_sets__struct.hpp"
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
auto build<::mecheye_ros_interface::srv::GetAllUserSets_Request>()
{
  return ::mecheye_ros_interface::srv::GetAllUserSets_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetAllUserSets_Response_sequence
{
public:
  Init_GetAllUserSets_Response_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecheye_ros_interface::srv::GetAllUserSets_Response sequence(::mecheye_ros_interface::srv::GetAllUserSets_Response::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetAllUserSets_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetAllUserSets_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_GetAllUserSets_Response_sequence();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetAllUserSets_Event_response
{
public:
  explicit Init_GetAllUserSets_Event_response(::mecheye_ros_interface::srv::GetAllUserSets_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::GetAllUserSets_Event response(::mecheye_ros_interface::srv::GetAllUserSets_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetAllUserSets_Event msg_;
};

class Init_GetAllUserSets_Event_request
{
public:
  explicit Init_GetAllUserSets_Event_request(::mecheye_ros_interface::srv::GetAllUserSets_Event & msg)
  : msg_(msg)
  {}
  Init_GetAllUserSets_Event_response request(::mecheye_ros_interface::srv::GetAllUserSets_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetAllUserSets_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetAllUserSets_Event msg_;
};

class Init_GetAllUserSets_Event_info
{
public:
  Init_GetAllUserSets_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAllUserSets_Event_request info(::mecheye_ros_interface::srv::GetAllUserSets_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetAllUserSets_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetAllUserSets_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetAllUserSets_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_GetAllUserSets_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ALL_USER_SETS__BUILDER_HPP_
