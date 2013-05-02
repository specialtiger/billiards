; Auto-generated. Do not edit!


(cl:in-package billiards_msgs-msg)


;//! \htmlinclude PlanShotResult.msg.html

(cl:defclass <PlanShotResult> (roslisp-msg-protocol:ros-message)
  ((shot
    :reader shot
    :initarg :shot
    :type billiards_msgs-msg:ShotPlan
    :initform (cl:make-instance 'billiards_msgs-msg:ShotPlan)))
)

(cl:defclass PlanShotResult (<PlanShotResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PlanShotResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PlanShotResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name billiards_msgs-msg:<PlanShotResult> is deprecated: use billiards_msgs-msg:PlanShotResult instead.")))

(cl:ensure-generic-function 'shot-val :lambda-list '(m))
(cl:defmethod shot-val ((m <PlanShotResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader billiards_msgs-msg:shot-val is deprecated.  Use billiards_msgs-msg:shot instead.")
  (shot m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PlanShotResult>) ostream)
  "Serializes a message object of type '<PlanShotResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'shot) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PlanShotResult>) istream)
  "Deserializes a message object of type '<PlanShotResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'shot) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PlanShotResult>)))
  "Returns string type for a message object of type '<PlanShotResult>"
  "billiards_msgs/PlanShotResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PlanShotResult)))
  "Returns string type for a message object of type 'PlanShotResult"
  "billiards_msgs/PlanShotResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PlanShotResult>)))
  "Returns md5sum for a message object of type '<PlanShotResult>"
  "dc03f55e8465fc664d92eb4eb351849e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PlanShotResult)))
  "Returns md5sum for a message object of type 'PlanShotResult"
  "dc03f55e8465fc664d92eb4eb351849e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PlanShotResult>)))
  "Returns full string definition for message of type '<PlanShotResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%ShotPlan shot~%~%================================================================================~%MSG: billiards_msgs/ShotPlan~%# describes plan for a single shot~%BallState ball~%geometry_msgs/PoseStamped base_pose                     # where PR2 should \"stand\"~%geometry_msgs/PoseStamped bridge_pose                   # where to put the bridge~%                                                        # orientation is: x-forward (towards cue ball)~%                                                        #                 z-(up)~%                                                        #                 y-robot left~%float64                   velocity                      # not used for now~%~%~%================================================================================~%MSG: billiards_msgs/BallState~%int8                  id                  # id of the ball~%                                          # 0-cue ball, 1-15 for each of the 15 balls~%bool                  pocketed            # false if ball is on the table~%geometry_msgs/PointStamped   point        # location of each ball~%int8                  group_id            # if we want to group the ball~%~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PlanShotResult)))
  "Returns full string definition for message of type 'PlanShotResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%ShotPlan shot~%~%================================================================================~%MSG: billiards_msgs/ShotPlan~%# describes plan for a single shot~%BallState ball~%geometry_msgs/PoseStamped base_pose                     # where PR2 should \"stand\"~%geometry_msgs/PoseStamped bridge_pose                   # where to put the bridge~%                                                        # orientation is: x-forward (towards cue ball)~%                                                        #                 z-(up)~%                                                        #                 y-robot left~%float64                   velocity                      # not used for now~%~%~%================================================================================~%MSG: billiards_msgs/BallState~%int8                  id                  # id of the ball~%                                          # 0-cue ball, 1-15 for each of the 15 balls~%bool                  pocketed            # false if ball is on the table~%geometry_msgs/PointStamped   point        # location of each ball~%int8                  group_id            # if we want to group the ball~%~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PlanShotResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'shot))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PlanShotResult>))
  "Converts a ROS message object to a list"
  (cl:list 'PlanShotResult
    (cl:cons ':shot (shot msg))
))