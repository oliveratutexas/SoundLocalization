; Auto-generated. Do not edit!


(cl:in-package hark_msgs-msg)


;//! \htmlinclude HarkSrcFeatureMFM.msg.html

(cl:defclass <HarkSrcFeatureMFM> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (count
    :reader count
    :initarg :count
    :type cl:integer
    :initform 0)
   (exist_src_num
    :reader exist_src_num
    :initarg :exist_src_num
    :type cl:integer
    :initform 0)
   (src
    :reader src
    :initarg :src
    :type (cl:vector hark_msgs-msg:HarkSrcFeatureMFMVal)
   :initform (cl:make-array 0 :element-type 'hark_msgs-msg:HarkSrcFeatureMFMVal :initial-element (cl:make-instance 'hark_msgs-msg:HarkSrcFeatureMFMVal))))
)

(cl:defclass HarkSrcFeatureMFM (<HarkSrcFeatureMFM>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <HarkSrcFeatureMFM>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'HarkSrcFeatureMFM)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hark_msgs-msg:<HarkSrcFeatureMFM> is deprecated: use hark_msgs-msg:HarkSrcFeatureMFM instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <HarkSrcFeatureMFM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_msgs-msg:header-val is deprecated.  Use hark_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'count-val :lambda-list '(m))
(cl:defmethod count-val ((m <HarkSrcFeatureMFM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_msgs-msg:count-val is deprecated.  Use hark_msgs-msg:count instead.")
  (count m))

(cl:ensure-generic-function 'exist_src_num-val :lambda-list '(m))
(cl:defmethod exist_src_num-val ((m <HarkSrcFeatureMFM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_msgs-msg:exist_src_num-val is deprecated.  Use hark_msgs-msg:exist_src_num instead.")
  (exist_src_num m))

(cl:ensure-generic-function 'src-val :lambda-list '(m))
(cl:defmethod src-val ((m <HarkSrcFeatureMFM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_msgs-msg:src-val is deprecated.  Use hark_msgs-msg:src instead.")
  (src m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <HarkSrcFeatureMFM>) ostream)
  "Serializes a message object of type '<HarkSrcFeatureMFM>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'count)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'exist_src_num)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'src))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'src))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <HarkSrcFeatureMFM>) istream)
  "Deserializes a message object of type '<HarkSrcFeatureMFM>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'count) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'exist_src_num) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'src) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'src)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'hark_msgs-msg:HarkSrcFeatureMFMVal))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<HarkSrcFeatureMFM>)))
  "Returns string type for a message object of type '<HarkSrcFeatureMFM>"
  "hark_msgs/HarkSrcFeatureMFM")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'HarkSrcFeatureMFM)))
  "Returns string type for a message object of type 'HarkSrcFeatureMFM"
  "hark_msgs/HarkSrcFeatureMFM")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<HarkSrcFeatureMFM>)))
  "Returns md5sum for a message object of type '<HarkSrcFeatureMFM>"
  "0ae5e09c64dca74bb91a9413e8cbe3bb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'HarkSrcFeatureMFM)))
  "Returns md5sum for a message object of type 'HarkSrcFeatureMFM"
  "0ae5e09c64dca74bb91a9413e8cbe3bb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<HarkSrcFeatureMFM>)))
  "Returns full string definition for message of type '<HarkSrcFeatureMFM>"
  (cl:format cl:nil "Header header~%int32 count~%int32 exist_src_num~%HarkSrcFeatureMFMVal[] src # Feature, reliability vector, and source info for each source~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: hark_msgs/HarkSrcFeatureMFMVal~%int32 id~%float32 power~%float32 x~%float32 y~%float32 z~%float32 theta~%int32 length_feature~%int32 data_bytes_feature~%float32[] featuredata_feature~%int32 length_mfm~%int32 data_bytes_mfm~%float32[] featuredata_mfm~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'HarkSrcFeatureMFM)))
  "Returns full string definition for message of type 'HarkSrcFeatureMFM"
  (cl:format cl:nil "Header header~%int32 count~%int32 exist_src_num~%HarkSrcFeatureMFMVal[] src # Feature, reliability vector, and source info for each source~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: hark_msgs/HarkSrcFeatureMFMVal~%int32 id~%float32 power~%float32 x~%float32 y~%float32 z~%float32 theta~%int32 length_feature~%int32 data_bytes_feature~%float32[] featuredata_feature~%int32 length_mfm~%int32 data_bytes_mfm~%float32[] featuredata_mfm~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <HarkSrcFeatureMFM>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'src) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <HarkSrcFeatureMFM>))
  "Converts a ROS message object to a list"
  (cl:list 'HarkSrcFeatureMFM
    (cl:cons ':header (header msg))
    (cl:cons ':count (count msg))
    (cl:cons ':exist_src_num (exist_src_num msg))
    (cl:cons ':src (src msg))
))
