/* Auto-generated by genmsg_cpp for file /var/tmp/hark_msgs/msg/HarkSrcFeatureMFMVal.msg */
#ifndef HARK_MSGS_MESSAGE_HARKSRCFEATUREMFMVAL_H
#define HARK_MSGS_MESSAGE_HARKSRCFEATUREMFMVAL_H
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
struct HarkSrcFeatureMFMVal_ {
  typedef HarkSrcFeatureMFMVal_<ContainerAllocator> Type;

  HarkSrcFeatureMFMVal_()
  : id(0)
  , power(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , theta(0.0)
  , length_feature(0)
  , data_bytes_feature(0)
  , featuredata_feature()
  , length_mfm(0)
  , data_bytes_mfm(0)
  , featuredata_mfm()
  {
  }

  HarkSrcFeatureMFMVal_(const ContainerAllocator& _alloc)
  : id(0)
  , power(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , theta(0.0)
  , length_feature(0)
  , data_bytes_feature(0)
  , featuredata_feature(_alloc)
  , length_mfm(0)
  , data_bytes_mfm(0)
  , featuredata_mfm(_alloc)
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

  typedef int32_t _length_feature_type;
  int32_t length_feature;

  typedef int32_t _data_bytes_feature_type;
  int32_t data_bytes_feature;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _featuredata_feature_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  featuredata_feature;

  typedef int32_t _length_mfm_type;
  int32_t length_mfm;

  typedef int32_t _data_bytes_mfm_type;
  int32_t data_bytes_mfm;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _featuredata_mfm_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  featuredata_mfm;


  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HarkSrcFeatureMFMVal
typedef  ::hark_msgs::HarkSrcFeatureMFMVal_<std::allocator<void> > HarkSrcFeatureMFMVal;

typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal> HarkSrcFeatureMFMValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal const> HarkSrcFeatureMFMValConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9531ed45159b8960967b00686fdae04b";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9531ed45159b8960ULL;
  static const uint64_t static_value2 = 0x967b00686fdae04bULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_msgs/HarkSrcFeatureMFMVal";
  }

  static const char* value(const  ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 id\n\
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

  static const char* value(const  ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.power);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.theta);
    stream.next(m.length_feature);
    stream.next(m.data_bytes_feature);
    stream.next(m.featuredata_feature);
    stream.next(m.length_mfm);
    stream.next(m.data_bytes_mfm);
    stream.next(m.featuredata_mfm);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HarkSrcFeatureMFMVal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> & v) 
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
    s << indent << "length_feature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length_feature);
    s << indent << "data_bytes_feature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data_bytes_feature);
    s << indent << "featuredata_feature[]" << std::endl;
    for (size_t i = 0; i < v.featuredata_feature.size(); ++i)
    {
      s << indent << "  featuredata_feature[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.featuredata_feature[i]);
    }
    s << indent << "length_mfm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length_mfm);
    s << indent << "data_bytes_mfm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data_bytes_mfm);
    s << indent << "featuredata_mfm[]" << std::endl;
    for (size_t i = 0; i < v.featuredata_mfm.size(); ++i)
    {
      s << indent << "  featuredata_mfm[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.featuredata_mfm[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKSRCFEATUREMFMVAL_H

