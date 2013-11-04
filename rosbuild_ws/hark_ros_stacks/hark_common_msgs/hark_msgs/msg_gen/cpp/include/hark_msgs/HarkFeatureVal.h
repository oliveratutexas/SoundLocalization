/* Auto-generated by genmsg_cpp for file /var/tmp/hark_msgs/msg/HarkFeatureVal.msg */
#ifndef HARK_MSGS_MESSAGE_HARKFEATUREVAL_H
#define HARK_MSGS_MESSAGE_HARKFEATUREVAL_H
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


namespace hark_msgs
{
template <class ContainerAllocator>
struct HarkFeatureVal_ {
  typedef HarkFeatureVal_<ContainerAllocator> Type;

  HarkFeatureVal_()
  : id(0)
  , length(0)
  , data_bytes(0)
  , featuredata()
  {
  }

  HarkFeatureVal_(const ContainerAllocator& _alloc)
  : id(0)
  , length(0)
  , data_bytes(0)
  , featuredata(_alloc)
  {
  }

  typedef int32_t _id_type;
  int32_t id;

  typedef int32_t _length_type;
  int32_t length;

  typedef int32_t _data_bytes_type;
  int32_t data_bytes;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _featuredata_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  featuredata;


  typedef boost::shared_ptr< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkFeatureVal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HarkFeatureVal
typedef  ::hark_msgs::HarkFeatureVal_<std::allocator<void> > HarkFeatureVal;

typedef boost::shared_ptr< ::hark_msgs::HarkFeatureVal> HarkFeatureValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkFeatureVal const> HarkFeatureValConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_msgs::HarkFeatureVal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkFeatureVal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a91db0f9f140ce90dece0bff7d606075";
  }

  static const char* value(const  ::hark_msgs::HarkFeatureVal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa91db0f9f140ce90ULL;
  static const uint64_t static_value2 = 0xdece0bff7d606075ULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_msgs/HarkFeatureVal";
  }

  static const char* value(const  ::hark_msgs::HarkFeatureVal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 id\n\
int32 length\n\
int32 data_bytes\n\
float32[] featuredata\n\
\n\
";
  }

  static const char* value(const  ::hark_msgs::HarkFeatureVal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.length);
    stream.next(m.data_bytes);
    stream.next(m.featuredata);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HarkFeatureVal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkFeatureVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_msgs::HarkFeatureVal_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "length: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length);
    s << indent << "data_bytes: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data_bytes);
    s << indent << "featuredata[]" << std::endl;
    for (size_t i = 0; i < v.featuredata.size(); ++i)
    {
      s << indent << "  featuredata[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.featuredata[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKFEATUREVAL_H

