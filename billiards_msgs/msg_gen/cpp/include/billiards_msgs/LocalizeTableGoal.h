/* Auto-generated by genmsg_cpp for file /home/ashok/Projects/billiards/billiards_msgs/msg/LocalizeTableGoal.msg */
#ifndef BILLIARDS_MSGS_MESSAGE_LOCALIZETABLEGOAL_H
#define BILLIARDS_MSGS_MESSAGE_LOCALIZETABLEGOAL_H
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

#include "billiards_msgs/TableState.h"

namespace billiards_msgs
{
template <class ContainerAllocator>
struct LocalizeTableGoal_ {
  typedef LocalizeTableGoal_<ContainerAllocator> Type;

  LocalizeTableGoal_()
  : state()
  {
  }

  LocalizeTableGoal_(const ContainerAllocator& _alloc)
  : state(_alloc)
  {
  }

  typedef  ::billiards_msgs::TableState_<ContainerAllocator>  _state_type;
   ::billiards_msgs::TableState_<ContainerAllocator>  state;


  typedef boost::shared_ptr< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LocalizeTableGoal
typedef  ::billiards_msgs::LocalizeTableGoal_<std::allocator<void> > LocalizeTableGoal;

typedef boost::shared_ptr< ::billiards_msgs::LocalizeTableGoal> LocalizeTableGoalPtr;
typedef boost::shared_ptr< ::billiards_msgs::LocalizeTableGoal const> LocalizeTableGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace billiards_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "70508e5dfcc8c4be58259ff6bdc4ab36";
  }

  static const char* value(const  ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x70508e5dfcc8c4beULL;
  static const uint64_t static_value2 = 0x58259ff6bdc4ab36ULL;
};

template<class ContainerAllocator>
struct DataType< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "billiards_msgs/LocalizeTableGoal";
  }

  static const char* value(const  ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
TableState state\n\
\n\
================================================================================\n\
MSG: billiards_msgs/TableState\n\
BallState[] balls\n\
\n\
================================================================================\n\
MSG: billiards_msgs/BallState\n\
int8                  id                  # id of the ball\n\
                                          # 0-cue ball, 1-15 for each of the 15 balls\n\
bool                  pocketed            # false if ball is on the table\n\
geometry_msgs/PointStamped   point        # location of each ball\n\
int8                  group_id            # if we want to group the ball\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PointStamped\n\
# This represents a Point with reference coordinate frame and timestamp\n\
Header header\n\
Point point\n\
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
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LocalizeTableGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::billiards_msgs::LocalizeTableGoal_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
s << std::endl;
    Printer< ::billiards_msgs::TableState_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
  }
};


} // namespace message_operations
} // namespace ros

#endif // BILLIARDS_MSGS_MESSAGE_LOCALIZETABLEGOAL_H

