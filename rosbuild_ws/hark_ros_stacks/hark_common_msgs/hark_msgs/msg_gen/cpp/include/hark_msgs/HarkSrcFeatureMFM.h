/* Auto-generated by genmsg_cpp for file /var/tmp/hark_msgs/msg/HarkSrcFeatureMFM.msg */
#ifndef HARK_MSGS_MESSAGE_HARKSRCFEATUREMFM_H
#define HARK_MSGS_MESSAGE_HARKSRCFEATUREMFM_H
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
#include "hark_msgs/HarkSrcFeatureMFMVal.h"

namespace hark_msgs
{
template <class ContainerAllocator>
struct HarkSrcFeatureMFM_ {
  typedef HarkSrcFeatureMFM_<ContainerAllocator> Type;

  HarkSrcFeatureMFM_()
  : header()
  , count(0)
  , exist_src_num(0)
  , src()
  {
  }

  HarkSrcFeatureMFM_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , count(0)
  , exist_src_num(0)
  , src(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef int32_t _count_type;
  int32_t count;

  typedef int32_t _exist_src_num_type;
  int32_t exist_src_num;

  typedef std::vector< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >::other >  _src_type;
  std::vector< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >::other >  src;


  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HarkSrcFeatureMFM
typedef  ::hark_msgs::HarkSrcFeatureMFM_<std::allocator<void> > HarkSrcFeatureMFM;

typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFM> HarkSrcFeatureMFMPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFM const> HarkSrcFeatureMFMConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0ae5e09c64dca74bb91a9413e8cbe3bb";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0ae5e09c64dca74bULL;
  static const uint64_t static_value2 = 0xb91a9413e8cbe3bbULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_msgs/HarkSrcFeatureMFM";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
int32 count\n\
int32 exist_src_num\n\
HarkSrcFeatureMFMVal[] src # Feature, reliability vector, and source info for each source\n\
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
MSG: hark_msgs/HarkSrcFeatureMFMVal\n\
int32 id\n\
float32 power\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 theta\n\
int32 length_feature\n\
int32 data_bytes_feature\n\
float32[] featuredata_feature\n\
int32 length_mfm\n\
int32 data_bytes_mfm\n\
float32[] featuredata_mfm\n\
\n\
";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.count);
    stream.next(m.exist_src_num);
    stream.next(m.src);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HarkSrcFeatureMFM_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_msgs::HarkSrcFeatureMFM_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.count);
    s << indent << "exist_src_num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.exist_src_num);
    s << indent << "src[]" << std::endl;
    for (size_t i = 0; i < v.src.size(); ++i)
    {
      s << indent << "  src[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >::stream(s, indent + "    ", v.src[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKSRCFEATUREMFM_H

