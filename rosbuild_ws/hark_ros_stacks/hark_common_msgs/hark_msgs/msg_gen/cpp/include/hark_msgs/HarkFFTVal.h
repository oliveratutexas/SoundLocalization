/* Auto-generated by genmsg_cpp for file /var/tmp/hark_msgs/msg/HarkFFTVal.msg */
#ifndef HARK_MSGS_MESSAGE_HARKFFTVAL_H
#define HARK_MSGS_MESSAGE_HARKFFTVAL_H
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
struct HarkFFTVal_ {
  typedef HarkFFTVal_<ContainerAllocator> Type;

  HarkFFTVal_()
  : fftdata_real()
  , fftdata_imag()
  {
  }

  HarkFFTVal_(const ContainerAllocator& _alloc)
  : fftdata_real(_alloc)
  , fftdata_imag(_alloc)
  {
  }

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fftdata_real_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  fftdata_real;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fftdata_imag_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  fftdata_imag;


  typedef boost::shared_ptr< ::hark_msgs::HarkFFTVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkFFTVal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HarkFFTVal
typedef  ::hark_msgs::HarkFFTVal_<std::allocator<void> > HarkFFTVal;

typedef boost::shared_ptr< ::hark_msgs::HarkFFTVal> HarkFFTValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkFFTVal const> HarkFFTValConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_msgs::HarkFFTVal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_msgs::HarkFFTVal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkFFTVal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkFFTVal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkFFTVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a7b9ef54d8fd113072a96e094d31eaff";
  }

  static const char* value(const  ::hark_msgs::HarkFFTVal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa7b9ef54d8fd1130ULL;
  static const uint64_t static_value2 = 0x72a96e094d31eaffULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkFFTVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_msgs/HarkFFTVal";
  }

  static const char* value(const  ::hark_msgs::HarkFFTVal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkFFTVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32[] fftdata_real\n\
float32[] fftdata_imag\n\
\n\
";
  }

  static const char* value(const  ::hark_msgs::HarkFFTVal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkFFTVal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.fftdata_real);
    stream.next(m.fftdata_imag);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HarkFFTVal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkFFTVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_msgs::HarkFFTVal_<ContainerAllocator> & v) 
  {
    s << indent << "fftdata_real[]" << std::endl;
    for (size_t i = 0; i < v.fftdata_real.size(); ++i)
    {
      s << indent << "  fftdata_real[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fftdata_real[i]);
    }
    s << indent << "fftdata_imag[]" << std::endl;
    for (size_t i = 0; i < v.fftdata_imag.size(); ++i)
    {
      s << indent << "  fftdata_imag[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fftdata_imag[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKFFTVAL_H

