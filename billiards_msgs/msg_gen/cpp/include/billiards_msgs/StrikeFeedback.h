/* Auto-generated by genmsg_cpp for file /home/ashok/Projects/billiards/billiards_msgs/msg/StrikeFeedback.msg */
#ifndef BILLIARDS_MSGS_MESSAGE_STRIKEFEEDBACK_H
#define BILLIARDS_MSGS_MESSAGE_STRIKEFEEDBACK_H
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


namespace billiards_msgs
{
template <class ContainerAllocator>
struct StrikeFeedback_ {
  typedef StrikeFeedback_<ContainerAllocator> Type;

  StrikeFeedback_()
  {
  }

  StrikeFeedback_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::billiards_msgs::StrikeFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StrikeFeedback
typedef  ::billiards_msgs::StrikeFeedback_<std::allocator<void> > StrikeFeedback;

typedef boost::shared_ptr< ::billiards_msgs::StrikeFeedback> StrikeFeedbackPtr;
typedef boost::shared_ptr< ::billiards_msgs::StrikeFeedback const> StrikeFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::billiards_msgs::StrikeFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace billiards_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::StrikeFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::billiards_msgs::StrikeFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "billiards_msgs/StrikeFeedback";
  }

  static const char* value(const  ::billiards_msgs::StrikeFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
\n\
";
  }

  static const char* value(const  ::billiards_msgs::StrikeFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StrikeFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::billiards_msgs::StrikeFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::billiards_msgs::StrikeFeedback_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // BILLIARDS_MSGS_MESSAGE_STRIKEFEEDBACK_H

