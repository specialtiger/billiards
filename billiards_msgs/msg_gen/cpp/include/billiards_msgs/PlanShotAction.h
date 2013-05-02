/* Auto-generated by genmsg_cpp for file /home/ashok/Projects/billiards/billiards_msgs/msg/PlanShotAction.msg */
#ifndef BILLIARDS_MSGS_MESSAGE_PLANSHOTACTION_H
#define BILLIARDS_MSGS_MESSAGE_PLANSHOTACTION_H
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

#include "billiards_msgs/PlanShotActionGoal.h"
#include "billiards_msgs/PlanShotActionResult.h"
#include "billiards_msgs/PlanShotActionFeedback.h"

namespace billiards_msgs
{
template <class ContainerAllocator>
struct PlanShotAction_ {
  typedef PlanShotAction_<ContainerAllocator> Type;

  PlanShotAction_()
  : action_goal()
  , action_result()
  , action_feedback()
  {
  }

  PlanShotAction_(const ContainerAllocator& _alloc)
  : action_goal(_alloc)
  , action_result(_alloc)
  , action_feedback(_alloc)
  {
  }

  typedef  ::billiards_msgs::PlanShotActionGoal_<ContainerAllocator>  _action_goal_type;
   ::billiards_msgs::PlanShotActionGoal_<ContainerAllocator>  action_goal;

  typedef  ::billiards_msgs::PlanShotActionResult_<ContainerAllocator>  _action_result_type;
   ::billiards_msgs::PlanShotActionResult_<ContainerAllocator>  action_result;

  typedef  ::billiards_msgs::PlanShotActionFeedback_<ContainerAllocator>  _action_feedback_type;
   ::billiards_msgs::PlanShotActionFeedback_<ContainerAllocator>  action_feedback;


  typedef boost::shared_ptr< ::billiards_msgs::PlanShotAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::billiards_msgs::PlanShotAction_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PlanShotAction
typedef  ::billiards_msgs::PlanShotAction_<std::allocator<void> > PlanShotAction;

typedef boost::shared_ptr< ::billiards_msgs::PlanShotAction> PlanShotActionPtr;
typedef boost::shared_ptr< ::billiards_msgs::PlanShotAction const> PlanShotActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::billiards_msgs::PlanShotAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::billiards_msgs::PlanShotAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace billiards_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::PlanShotAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::billiards_msgs::PlanShotAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::billiards_msgs::PlanShotAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a5587c9b771a0b1bb1053fdbf5f42aa5";
  }

  static const char* value(const  ::billiards_msgs::PlanShotAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa5587c9b771a0b1bULL;
  static const uint64_t static_value2 = 0xb1053fdbf5f42aa5ULL;
};

template<class ContainerAllocator>
struct DataType< ::billiards_msgs::PlanShotAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "billiards_msgs/PlanShotAction";
  }

  static const char* value(const  ::billiards_msgs::PlanShotAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::billiards_msgs::PlanShotAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
PlanShotActionGoal action_goal\n\
PlanShotActionResult action_result\n\
PlanShotActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: billiards_msgs/PlanShotActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
PlanShotGoal goal\n\
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
MSG: billiards_msgs/PlanShotGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
TableState state\n\
float32 angle_min # in radians\n\
float32 angle_max # in radians\n\
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
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: billiards_msgs/PlanShotActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
PlanShotResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: billiards_msgs/PlanShotResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
ShotPlan shot\n\
\n\
================================================================================\n\
MSG: billiards_msgs/ShotPlan\n\
# describes plan for a single shot\n\
BallState ball\n\
geometry_msgs/PoseStamped base_pose                     # where PR2 should \"stand\"\n\
geometry_msgs/PoseStamped bridge_pose                   # where to put the bridge\n\
                                                        # orientation is: x-forward (towards cue ball)\n\
                                                        #                 z-(up)\n\
                                                        #                 y-robot left\n\
float64                   velocity                      # not used for now\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: billiards_msgs/PlanShotActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
PlanShotFeedback feedback\n\
\n\
================================================================================\n\
MSG: billiards_msgs/PlanShotFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
\n\
";
  }

  static const char* value(const  ::billiards_msgs::PlanShotAction_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::billiards_msgs::PlanShotAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action_goal);
    stream.next(m.action_result);
    stream.next(m.action_feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PlanShotAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::billiards_msgs::PlanShotAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::billiards_msgs::PlanShotAction_<ContainerAllocator> & v) 
  {
    s << indent << "action_goal: ";
s << std::endl;
    Printer< ::billiards_msgs::PlanShotActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
s << std::endl;
    Printer< ::billiards_msgs::PlanShotActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
s << std::endl;
    Printer< ::billiards_msgs::PlanShotActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // BILLIARDS_MSGS_MESSAGE_PLANSHOTACTION_H
