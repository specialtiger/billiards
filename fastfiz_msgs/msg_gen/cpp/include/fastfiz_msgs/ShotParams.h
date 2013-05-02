/* Auto-generated by genmsg_cpp for file /home/ashok/Projects/billiards/fastfiz_msgs/msg/ShotParams.msg */
#ifndef FASTFIZ_MSGS_MESSAGE_SHOTPARAMS_H
#define FASTFIZ_MSGS_MESSAGE_SHOTPARAMS_H
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


namespace fastfiz_msgs
{
template <class ContainerAllocator>
struct ShotParams_ {
  typedef ShotParams_<ContainerAllocator> Type;

  ShotParams_()
  : a(0.0)
  , b(0.0)
  , theta(0.0)
  , phi(0.0)
  , v(0.0)
  {
  }

  ShotParams_(const ContainerAllocator& _alloc)
  : a(0.0)
  , b(0.0)
  , theta(0.0)
  , phi(0.0)
  , v(0.0)
  {
  }

  typedef double _a_type;
  double a;

  typedef double _b_type;
  double b;

  typedef double _theta_type;
  double theta;

  typedef double _phi_type;
  double phi;

  typedef double _v_type;
  double v;


  typedef boost::shared_ptr< ::fastfiz_msgs::ShotParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fastfiz_msgs::ShotParams_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ShotParams
typedef  ::fastfiz_msgs::ShotParams_<std::allocator<void> > ShotParams;

typedef boost::shared_ptr< ::fastfiz_msgs::ShotParams> ShotParamsPtr;
typedef boost::shared_ptr< ::fastfiz_msgs::ShotParams const> ShotParamsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::fastfiz_msgs::ShotParams_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::fastfiz_msgs::ShotParams_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace fastfiz_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::fastfiz_msgs::ShotParams_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::fastfiz_msgs::ShotParams_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::fastfiz_msgs::ShotParams_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b6d6d9dab06ce45ce5fc4f7c44a44a44";
  }

  static const char* value(const  ::fastfiz_msgs::ShotParams_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb6d6d9dab06ce45cULL;
  static const uint64_t static_value2 = 0xe5fc4f7c44a44a44ULL;
};

template<class ContainerAllocator>
struct DataType< ::fastfiz_msgs::ShotParams_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fastfiz_msgs/ShotParams";
  }

  static const char* value(const  ::fastfiz_msgs::ShotParams_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::fastfiz_msgs::ShotParams_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 a     # The x-coordinate of the cue stick (right/left english) on the CUE ball in mm. \n\
float64 b     # The y-coordinate of the cue stick (top/bottom english) on the CUE ball in mm. \n\
float64 theta # The elevation of the cue stick in degrees. \n\
float64 phi   # The azumith angle (heading) of the cue stick in degrees. \n\
float64 v     # The velocity of the cue stick before impact in m/s (max is 4.5 m/s). \n\
";
  }

  static const char* value(const  ::fastfiz_msgs::ShotParams_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::fastfiz_msgs::ShotParams_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::fastfiz_msgs::ShotParams_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.a);
    stream.next(m.b);
    stream.next(m.theta);
    stream.next(m.phi);
    stream.next(m.v);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ShotParams_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fastfiz_msgs::ShotParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::fastfiz_msgs::ShotParams_<ContainerAllocator> & v) 
  {
    s << indent << "a: ";
    Printer<double>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<double>::stream(s, indent + "  ", v.b);
    s << indent << "theta: ";
    Printer<double>::stream(s, indent + "  ", v.theta);
    s << indent << "phi: ";
    Printer<double>::stream(s, indent + "  ", v.phi);
    s << indent << "v: ";
    Printer<double>::stream(s, indent + "  ", v.v);
  }
};


} // namespace message_operations
} // namespace ros

#endif // FASTFIZ_MSGS_MESSAGE_SHOTPARAMS_H
