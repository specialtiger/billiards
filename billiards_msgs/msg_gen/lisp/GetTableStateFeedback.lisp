; Auto-generated. Do not edit!


(cl:in-package billiards_msgs-msg)


;//! \htmlinclude GetTableStateFeedback.msg.html

(cl:defclass <GetTableStateFeedback> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetTableStateFeedback (<GetTableStateFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetTableStateFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetTableStateFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name billiards_msgs-msg:<GetTableStateFeedback> is deprecated: use billiards_msgs-msg:GetTableStateFeedback instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetTableStateFeedback>) ostream)
  "Serializes a message object of type '<GetTableStateFeedback>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetTableStateFeedback>) istream)
  "Deserializes a message object of type '<GetTableStateFeedback>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetTableStateFeedback>)))
  "Returns string type for a message object of type '<GetTableStateFeedback>"
  "billiards_msgs/GetTableStateFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetTableStateFeedback)))
  "Returns string type for a message object of type 'GetTableStateFeedback"
  "billiards_msgs/GetTableStateFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetTableStateFeedback>)))
  "Returns md5sum for a message object of type '<GetTableStateFeedback>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetTableStateFeedback)))
  "Returns md5sum for a message object of type 'GetTableStateFeedback"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetTableStateFeedback>)))
  "Returns full string definition for message of type '<GetTableStateFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetTableStateFeedback)))
  "Returns full string definition for message of type 'GetTableStateFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetTableStateFeedback>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetTableStateFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'GetTableStateFeedback
))
