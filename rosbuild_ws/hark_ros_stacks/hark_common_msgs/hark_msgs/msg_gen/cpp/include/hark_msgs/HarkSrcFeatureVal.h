/* Auto-generated by genmsg_cpp for file /var/tmp/hark_msgs/msg/HarkSrcFeatureVal.msg */
#ifndef HARK_MSGS_MESSAGE_HARKSRCFEATUREVAL_H
#define HARK_MSGS_MESSAGE_HARKSRCFEATUREVAL_H
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
struct HarkSrcFeatureVal_ {
  typedef HarkSrcFeatureVal_<ContainerAllocator> Type;

  HarkSrcFeatureVal_()
  : id(0)
  , power(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , theta(0.0)
  , length(0)
  , data_bytes(0)
  , featuredata()
  {
  }

  HarkSrcFeatureVal_(const ContainerAllocator& _alloc)
  : id(0)
  , power(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , theta(0.0)
  , length(0)
  , data_bytes(0)
  , featuredata(_alloc)
  {
  }

  typedef int32_t _id_type;
  int32_t id;

  typedef float _power_type;
  float power;

  typedef float _x_type;
  float x;

  typedef float _y_type;
  float y;

  typedef float _z_type;
  float z;

  typedef float _theta_type;
  float theta;

  typedef int32_t _length_type;
  int32_t length;

  typedef int32_t _data_bytes_type;
  int32_t data_bytes;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _featuredata_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  featuredata;


  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HarkSrcFeatureVal
typedef  ::hark_msgs::HarkSrcFeatureVal_<std::allocator<void> > HarkSrcFeatureVal;

typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureVal> HarkSrcFeatureValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureVal const> HarkSrcFeatureValConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9387f3e7ecba46a9afd4e4e24e4df8bd";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9387f3e7ecba46a9ULL;
  static const uint64_t static_value2 = 0xafd4e4e24e4df8bdULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_msgs/HarkSrcFeatureVal";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 id\n\
float32 power\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 theta\n\
int32 length\n\
int32 data_bytes\n\
float32[] featuredata\n\
\n\
";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.power);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.theta);
    stream.next(m.length);
    stream.next(m.data_bytes);
    stream.next(m.featuredata);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HarkSrcFeatureVal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_msgs::HarkSrcFeatureVal_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "power: ";
    Printer<float>::stream(s, indent + "  ", v.power);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
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

#endif // HARK_MSGS_MESSAGE_HARKSRCFEATUREVAL_H

