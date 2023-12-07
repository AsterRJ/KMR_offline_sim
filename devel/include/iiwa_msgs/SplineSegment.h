// Generated by gencpp from file iiwa_msgs/SplineSegment.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SPLINESEGMENT_H
#define IIWA_MSGS_MESSAGE_SPLINESEGMENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <iiwa_msgs/CartesianPose.h>
#include <iiwa_msgs/CartesianPose.h>

namespace iiwa_msgs
{
template <class ContainerAllocator>
struct SplineSegment_
{
  typedef SplineSegment_<ContainerAllocator> Type;

  SplineSegment_()
    : type(0)
    , point()
    , point_aux()  {
    }
  SplineSegment_(const ContainerAllocator& _alloc)
    : type(0)
    , point(_alloc)
    , point_aux(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _type_type;
  _type_type type;

   typedef  ::iiwa_msgs::CartesianPose_<ContainerAllocator>  _point_type;
  _point_type point;

   typedef  ::iiwa_msgs::CartesianPose_<ContainerAllocator>  _point_aux_type;
  _point_aux_type point_aux;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SPL)
  #undef SPL
#endif
#if defined(_WIN32) && defined(LIN)
  #undef LIN
#endif
#if defined(_WIN32) && defined(CIRC)
  #undef CIRC
#endif

  enum {
    SPL = 0,
    LIN = 1,
    CIRC = 2,
  };


  typedef boost::shared_ptr< ::iiwa_msgs::SplineSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SplineSegment_<ContainerAllocator> const> ConstPtr;

}; // struct SplineSegment_

typedef ::iiwa_msgs::SplineSegment_<std::allocator<void> > SplineSegment;

typedef boost::shared_ptr< ::iiwa_msgs::SplineSegment > SplineSegmentPtr;
typedef boost::shared_ptr< ::iiwa_msgs::SplineSegment const> SplineSegmentConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SplineSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::SplineSegment_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SplineSegment_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.point == rhs.point &&
    lhs.point_aux == rhs.point_aux;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::SplineSegment_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SplineSegment_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SplineSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SplineSegment_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SplineSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac36e232cb478b25636a98607933811b";
  }

  static const char* value(const ::iiwa_msgs::SplineSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac36e232cb478b25ULL;
  static const uint64_t static_value2 = 0x636a98607933811bULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SplineSegment";
  }

  static const char* value(const ::iiwa_msgs::SplineSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message describes a segment of a spline path\n"
"\n"
"int32 SPL = 0\n"
"int32 LIN =  1\n"
"int32 CIRC = 2\n"
"\n"
"# The type of the spline segment\n"
"int32 type\n"
"\n"
"# The endpoint of the current segment\n"
"CartesianPose point\n"
"\n"
"# Auxiliary point. Only used for circular segments\n"
"CartesianPose point_aux\n"
"================================================================================\n"
"MSG: iiwa_msgs/CartesianPose\n"
"# Target Pose including redundancy information.\n"
"geometry_msgs/PoseStamped poseStamped\n"
"\n"
"# If you have issues with the robot not executing the motion copy this value from the Cartesian Position Tab of the\n"
"# robot SmartPad. Set both parameters to -1 to disable them.\n"
"RedundancyInformation redundancy\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/RedundancyInformation\n"
"# E1 parameter\n"
"# Specifies Angle of the elbow joint.\n"
"float64 e1\n"
"\n"
"# Status parameter\n"
"#   Bit 0: 1 - The robot is working above its head\n"
"#          0 - The robot is working in the ground area\n"
"#   Bit 1: 1 - Angle A4 < 0°\n"
"#          0 - Angle A4 >= 0°\n"
"#   Bit 2: 1 - Angle A6 <= 0\n"
"#          0 - Angle A6 > 0\n"
"int32 status\n"
"\n"
"# Turn parameter\n"
"# According to Sunrise handbook this is not used for the iiwa.\n"
"int32 turn\n"
;
  }

  static const char* value(const ::iiwa_msgs::SplineSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.point);
      stream.next(m.point_aux);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SplineSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SplineSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SplineSegment_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "point: ";
    s << std::endl;
    Printer< ::iiwa_msgs::CartesianPose_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
    s << indent << "point_aux: ";
    s << std::endl;
    Printer< ::iiwa_msgs::CartesianPose_<ContainerAllocator> >::stream(s, indent + "  ", v.point_aux);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SPLINESEGMENT_H
