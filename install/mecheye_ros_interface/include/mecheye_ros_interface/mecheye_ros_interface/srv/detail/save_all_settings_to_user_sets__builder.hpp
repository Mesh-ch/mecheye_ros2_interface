// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/SaveAllSettingsToUserSets.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/save_all_settings_to_user_sets.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__SAVE_ALL_SETTINGS_TO_USER_SETS__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__SAVE_ALL_SETTINGS_TO_USER_SETS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/save_all_settings_to_user_sets__struct.hpp"
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
auto build<::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Request>()
{
  return ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_SaveAllSettingsToUserSets_Response_error_description
{
public:
  explicit Init_SaveAllSettingsToUserSets_Response_error_description(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response error_description(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response::_error_description_type arg)
  {
    msg_.error_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response msg_;
};

class Init_SaveAllSettingsToUserSets_Response_error_code
{
public:
  Init_SaveAllSettingsToUserSets_Response_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveAllSettingsToUserSets_Response_error_description error_code(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_SaveAllSettingsToUserSets_Response_error_description(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_SaveAllSettingsToUserSets_Response_error_code();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_SaveAllSettingsToUserSets_Event_response
{
public:
  explicit Init_SaveAllSettingsToUserSets_Event_response(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event response(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event msg_;
};

class Init_SaveAllSettingsToUserSets_Event_request
{
public:
  explicit Init_SaveAllSettingsToUserSets_Event_request(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event & msg)
  : msg_(msg)
  {}
  Init_SaveAllSettingsToUserSets_Event_response request(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SaveAllSettingsToUserSets_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event msg_;
};

class Init_SaveAllSettingsToUserSets_Event_info
{
public:
  Init_SaveAllSettingsToUserSets_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveAllSettingsToUserSets_Event_request info(::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SaveAllSettingsToUserSets_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::SaveAllSettingsToUserSets_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_SaveAllSettingsToUserSets_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__SAVE_ALL_SETTINGS_TO_USER_SETS__BUILDER_HPP_
