/* Auto-generated by genmsg_cpp for file /home/ashok/Projects/billiards/billiards_msgs/msg/StrikeActionGoal.msg */
#ifndef BILLIARDS_MSGS_MESSAGE_STRIKEACTIONGOAL_H
#define BILLIARDS_MSGS_MESSAGE_STRIKEACTIONGOAL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "billiards_msgs/StrikeGoal.h"

namespace billiards_msgs
{
template <class ContainerAllocator>
struct StrikeActionGoal_ {
  typedef StrikeActionGoal_<ContainerAllocator> Type;

  StrikeActionGoal_()
  : header()
  , goal_id()
  , goal()
  {
  }

  StrikeActionGoal_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , goal_id(_alloc)
  , goal(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
   ::actionlib_msgs::GoalID_<ContainerAllocator>  goal_id;

  typedef  ::billiards_msgs::StrikeGoal_<ContainerAllocator>  _goal_type;
   ::billiards_msgs::StrikeGoal_<ContainerAllocator>  goal;


  typedef boost::shared_ptr< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StrikeActionGoal
typedef  ::billiards_msgs::StrikeActionGoal_<std::allocator<void> > StrikeActionGoal;

typedef boost::shared_ptr< ::billiards_msgs::StrikeActionGoal> StrikeActionGoalPtr;
typedef boost::shared_ptr< ::billiards_msgs::StrikeActionGoal const> StrikeActionGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace billiards_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4b30be6cd12b9e72826df56b481f40e0";
  }

  static const char* value(const  ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4b30be6cd12b9e72ULL;
  static const uint64_t static_value2 = 0x826df56b481f40e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "billiards_msgs/StrikeActionGoal";
  }

  static const char* value(const  ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
StrikeGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: billiards_msgs/StrikeGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const  ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.goal_id);
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StrikeActionGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::billiards_msgs::StrikeActionGoal_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
s << std::endl;
    Printer< ::billiards_msgs::StrikeGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};


} // namespace message_operations
} // namespace ros

#endif // BILLIARDS_MSGS_MESSAGE_STRIKEACTIONGOAL_H

