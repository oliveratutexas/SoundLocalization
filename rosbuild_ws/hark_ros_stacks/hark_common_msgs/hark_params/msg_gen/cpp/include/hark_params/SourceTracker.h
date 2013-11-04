/* Auto-generated by genmsg_cpp for file /var/tmp/hark_params/msg/SourceTracker.msg */
#ifndef HARK_PARAMS_MESSAGE_SOURCETRACKER_H
#define HARK_PARAMS_MESSAGE_SOURCETRACKER_H
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


namespace hark_params
{
template <class ContainerAllocator>
struct SourceTracker_ {
  typedef SourceTracker_<ContainerAllocator> Type;

  SourceTracker_()
  : thresh(0.0)
  , pause_length(0.0)
  , min_src_interval(0.0)
  , min_tfindex_interval(0.0)
  , compare_mode(0)
  {
  }

  SourceTracker_(const ContainerAllocator& _alloc)
  : thresh(0.0)
  , pause_length(0.0)
  , min_src_interval(0.0)
  , min_tfindex_interval(0.0)
  , compare_mode(0)
  {
  }

  typedef float _thresh_type;
  float thresh;

  typedef float _pause_length_type;
  float pause_length;

  typedef float _min_src_interval_type;
  float min_src_interval;

  typedef float _min_tfindex_interval_type;
  float min_tfindex_interval;

  typedef uint8_t _compare_mode_type;
  uint8_t compare_mode;

  enum { DEG = 0 };
  enum { TFINDEX = 1 };

  typedef boost::shared_ptr< ::hark_params::SourceTracker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_params::SourceTracker_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SourceTracker
typedef  ::hark_params::SourceTracker_<std::allocator<void> > SourceTracker;

typedef boost::shared_ptr< ::hark_params::SourceTracker> SourceTrackerPtr;
typedef boost::shared_ptr< ::hark_params::SourceTracker const> SourceTrackerConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_params::SourceTracker_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_params::SourceTracker_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_params

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_params::SourceTracker_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_params::SourceTracker_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_params::SourceTracker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0e5eca4812a7b46014118d0b366889e2";
  }

  static const char* value(const  ::hark_params::SourceTracker_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0e5eca4812a7b460ULL;
  static const uint64_t static_value2 = 0x14118d0b366889e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_params::SourceTracker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_params/SourceTracker";
  }

  static const char* value(const  ::hark_params::SourceTracker_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_params::SourceTracker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 thresh\n\
float32 pause_length\n\
float32 min_src_interval\n\
float32 min_tfindex_interval\n\
uint8 compare_mode\n\
uint8 DEG=0\n\
uint8 TFINDEX=1\n\
\n\
";
  }

  static const char* value(const  ::hark_params::SourceTracker_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hark_params::SourceTracker_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_params::SourceTracker_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.thresh);
    stream.next(m.pause_length);
    stream.next(m.min_src_interval);
    stream.next(m.min_tfindex_interval);
    stream.next(m.compare_mode);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SourceTracker_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_params::SourceTracker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_params::SourceTracker_<ContainerAllocator> & v) 
  {
    s << indent << "thresh: ";
    Printer<float>::stream(s, indent + "  ", v.thresh);
    s << indent << "pause_length: ";
    Printer<float>::stream(s, indent + "  ", v.pause_length);
    s << indent << "min_src_interval: ";
    Printer<float>::stream(s, indent + "  ", v.min_src_interval);
    s << indent << "min_tfindex_interval: ";
    Printer<float>::stream(s, indent + "  ", v.min_tfindex_interval);
    s << indent << "compare_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compare_mode);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HARK_PARAMS_MESSAGE_SOURCETRACKER_H

