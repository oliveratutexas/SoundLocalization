/* Auto-generated by genmsg_cpp for file /var/tmp/hark_msgs/msg/HarkSrcWave.msg */
#ifndef HARK_MSGS_MESSAGE_HARKSRCWAVE_H
#define HARK_MSGS_MESSAGE_HARKSRCWAVE_H
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
#include "hark_msgs/HarkSrcWaveVal.h"

namespace hark_msgs
{
template <class ContainerAllocator>
struct HarkSrcWave_ {
  typedef HarkSrcWave_<ContainerAllocator> Type;

  HarkSrcWave_()
  : header()
  , count(0)
  , exist_src_num(0)
  , src()
  {
  }

  HarkSrcWave_(const ContainerAllocator& _alloc)
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

  typedef std::vector< ::hark_msgs::HarkSrcWaveVal_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hark_msgs::HarkSrcWaveVal_<ContainerAllocator> >::other >  _src_type;
  std::vector< ::hark_msgs::HarkSrcWaveVal_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hark_msgs::HarkSrcWaveVal_<ContainerAllocator> >::other >  src;


  typedef boost::shared_ptr< ::hark_msgs::HarkSrcWave_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkSrcWave_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HarkSrcWave
typedef  ::hark_msgs::HarkSrcWave_<std::allocator<void> > HarkSrcWave;

typedef boost::shared_ptr< ::hark_msgs::HarkSrcWave> HarkSrcWavePtr;
typedef boost::shared_ptr< ::hark_msgs::HarkSrcWave const> HarkSrcWaveConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_msgs::HarkSrcWave_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_msgs::HarkSrcWave_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcWave_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcWave_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkSrcWave_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e840cae127686991a9d74e0721e9c6a7";
  }

  static const char* value(const  ::hark_msgs::HarkSrcWave_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe840cae127686991ULL;
  static const uint64_t static_value2 = 0xa9d74e0721e9c6a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkSrcWave_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_msgs/HarkSrcWave";
  }

  static const char* value(const  ::hark_msgs::HarkSrcWave_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkSrcWave_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
int32 count\n\
int32 exist_src_num\n\
HarkSrcWaveVal[] src # Audio stream and source info of each source\n\
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
MSG: hark_msgs/HarkSrcWaveVal\n\
int32 id\n\
float32 power\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 theta\n\
int32 length\n\
int32 data_bytes\n\
float32[] wavedata\n\
\n\
";
  }

  static const char* value(const  ::hark_msgs::HarkSrcWave_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hark_msgs::HarkSrcWave_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hark_msgs::HarkSrcWave_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkSrcWave_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.count);
    stream.next(m.exist_src_num);
    stream.next(m.src);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HarkSrcWave_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkSrcWave_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_msgs::HarkSrcWave_<ContainerAllocator> & v) 
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
      Printer< ::hark_msgs::HarkSrcWaveVal_<ContainerAllocator> >::stream(s, indent + "    ", v.src[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKSRCWAVE_H

