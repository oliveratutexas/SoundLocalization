/* Auto-generated by genmsg_cpp for file /var/tmp/hark_msgs/msg/HarkJuliusSrcVal.msg */
#ifndef HARK_MSGS_MESSAGE_HARKJULIUSSRCVAL_H
#define HARK_MSGS_MESSAGE_HARKJULIUSSRCVAL_H
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
struct HarkJuliusSrcVal_ {
  typedef HarkJuliusSrcVal_<ContainerAllocator> Type;

  HarkJuliusSrcVal_()
  : word()
  , classid(0)
  , phone()
  , cm(0.0)
  {
  }

  HarkJuliusSrcVal_(const ContainerAllocator& _alloc)
  : word(_alloc)
  , classid(0)
  , phone(_alloc)
  , cm(0.0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _word_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  word;

  typedef int32_t _classid_type;
  int32_t classid;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _phone_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  phone;

  typedef float _cm_type;
  float cm;


  typedef boost::shared_ptr< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HarkJuliusSrcVal
typedef  ::hark_msgs::HarkJuliusSrcVal_<std::allocator<void> > HarkJuliusSrcVal;

typedef boost::shared_ptr< ::hark_msgs::HarkJuliusSrcVal> HarkJuliusSrcValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkJuliusSrcVal const> HarkJuliusSrcValConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d68fa7d47b805f4384367952f7f8407e";
  }

  static const char* value(const  ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd68fa7d47b805f43ULL;
  static const uint64_t static_value2 = 0x84367952f7f8407eULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hark_msgs/HarkJuliusSrcVal";
  }

  static const char* value(const  ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string word\n\
int32 classid\n\
string phone\n\
float32 cm\n\
\n\
";
  }

  static const char* value(const  ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.word);
    stream.next(m.classid);
    stream.next(m.phone);
    stream.next(m.cm);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HarkJuliusSrcVal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hark_msgs::HarkJuliusSrcVal_<ContainerAllocator> & v) 
  {
    s << indent << "word: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.word);
    s << indent << "classid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.classid);
    s << indent << "phone: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.phone);
    s << indent << "cm: ";
    Printer<float>::stream(s, indent + "  ", v.cm);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKJULIUSSRCVAL_H

