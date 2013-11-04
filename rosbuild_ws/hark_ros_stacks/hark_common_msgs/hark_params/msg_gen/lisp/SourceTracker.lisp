; Auto-generated. Do not edit!


(cl:in-package hark_params-msg)


;//! \htmlinclude SourceTracker.msg.html

(cl:defclass <SourceTracker> (roslisp-msg-protocol:ros-message)
  ((thresh
    :reader thresh
    :initarg :thresh
    :type cl:float
    :initform 0.0)
   (pause_length
    :reader pause_length
    :initarg :pause_length
    :type cl:float
    :initform 0.0)
   (min_src_interval
    :reader min_src_interval
    :initarg :min_src_interval
    :type cl:float
    :initform 0.0)
   (min_tfindex_interval
    :reader min_tfindex_interval
    :initarg :min_tfindex_interval
    :type cl:float
    :initform 0.0)
   (compare_mode
    :reader compare_mode
    :initarg :compare_mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SourceTracker (<SourceTracker>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SourceTracker>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SourceTracker)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hark_params-msg:<SourceTracker> is deprecated: use hark_params-msg:SourceTracker instead.")))

(cl:ensure-generic-function 'thresh-val :lambda-list '(m))
(cl:defmethod thresh-val ((m <SourceTracker>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_params-msg:thresh-val is deprecated.  Use hark_params-msg:thresh instead.")
  (thresh m))

(cl:ensure-generic-function 'pause_length-val :lambda-list '(m))
(cl:defmethod pause_length-val ((m <SourceTracker>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_params-msg:pause_length-val is deprecated.  Use hark_params-msg:pause_length instead.")
  (pause_length m))

(cl:ensure-generic-function 'min_src_interval-val :lambda-list '(m))
(cl:defmethod min_src_interval-val ((m <SourceTracker>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_params-msg:min_src_interval-val is deprecated.  Use hark_params-msg:min_src_interval instead.")
  (min_src_interval m))

(cl:ensure-generic-function 'min_tfindex_interval-val :lambda-list '(m))
(cl:defmethod min_tfindex_interval-val ((m <SourceTracker>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_params-msg:min_tfindex_interval-val is deprecated.  Use hark_params-msg:min_tfindex_interval instead.")
  (min_tfindex_interval m))

(cl:ensure-generic-function 'compare_mode-val :lambda-list '(m))
(cl:defmethod compare_mode-val ((m <SourceTracker>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hark_params-msg:compare_mode-val is deprecated.  Use hark_params-msg:compare_mode instead.")
  (compare_mode m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<SourceTracker>)))
    "Constants for message type '<SourceTracker>"
  '((:DEG . 0)
    (:TFINDEX . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'SourceTracker)))
    "Constants for message type 'SourceTracker"
  '((:DEG . 0)
    (:TFINDEX . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SourceTracker>) ostream)
  "Serializes a message object of type '<SourceTracker>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'thresh))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pause_length))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'min_src_interval))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'min_tfindex_interval))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compare_mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SourceTracker>) istream)
  "Deserializes a message object of type '<SourceTracker>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'thresh) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pause_length) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'min_src_interval) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'min_tfindex_interval) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compare_mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SourceTracker>)))
  "Returns string type for a message object of type '<SourceTracker>"
  "hark_params/SourceTracker")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SourceTracker)))
  "Returns string type for a message object of type 'SourceTracker"
  "hark_params/SourceTracker")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SourceTracker>)))
  "Returns md5sum for a message object of type '<SourceTracker>"
  "0e5eca4812a7b46014118d0b366889e2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SourceTracker)))
  "Returns md5sum for a message object of type 'SourceTracker"
  "0e5eca4812a7b46014118d0b366889e2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SourceTracker>)))
  "Returns full string definition for message of type '<SourceTracker>"
  (cl:format cl:nil "float32 thresh~%float32 pause_length~%float32 min_src_interval~%float32 min_tfindex_interval~%uint8 compare_mode~%uint8 DEG=0~%uint8 TFINDEX=1~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SourceTracker)))
  "Returns full string definition for message of type 'SourceTracker"
  (cl:format cl:nil "float32 thresh~%float32 pause_length~%float32 min_src_interval~%float32 min_tfindex_interval~%uint8 compare_mode~%uint8 DEG=0~%uint8 TFINDEX=1~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SourceTracker>))
  (cl:+ 0
     4
     4
     4
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SourceTracker>))
  "Converts a ROS message object to a list"
  (cl:list 'SourceTracker
    (cl:cons ':thresh (thresh msg))
    (cl:cons ':pause_length (pause_length msg))
    (cl:cons ':min_src_interval (min_src_interval msg))
    (cl:cons ':min_tfindex_interval (min_tfindex_interval msg))
    (cl:cons ':compare_mode (compare_mode msg))
))
