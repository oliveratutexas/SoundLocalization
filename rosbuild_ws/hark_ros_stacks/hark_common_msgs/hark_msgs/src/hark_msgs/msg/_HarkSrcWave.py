"""autogenerated by genpy from hark_msgs/HarkSrcWave.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import hark_msgs.msg
import std_msgs.msg

class HarkSrcWave(genpy.Message):
  _md5sum = "e840cae127686991a9d74e0721e9c6a7"
  _type = "hark_msgs/HarkSrcWave"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
int32 count
int32 exist_src_num
HarkSrcWaveVal[] src # Audio stream and source info of each source

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: hark_msgs/HarkSrcWaveVal
int32 id
float32 power
float32 x
float32 y
float32 z
float32 theta
int32 length
int32 data_bytes
float32[] wavedata

"""
  __slots__ = ['header','count','exist_src_num','src']
  _slot_types = ['std_msgs/Header','int32','int32','hark_msgs/HarkSrcWaveVal[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,count,exist_src_num,src

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HarkSrcWave, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.count is None:
        self.count = 0
      if self.exist_src_num is None:
        self.exist_src_num = 0
      if self.src is None:
        self.src = []
    else:
      self.header = std_msgs.msg.Header()
      self.count = 0
      self.exist_src_num = 0
      self.src = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2i.pack(_x.count, _x.exist_src_num))
      length = len(self.src)
      buff.write(_struct_I.pack(length))
      for val1 in self.src:
        _x = val1
        buff.write(_struct_i5f2i.pack(_x.id, _x.power, _x.x, _x.y, _x.z, _x.theta, _x.length, _x.data_bytes))
        length = len(val1.wavedata)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(struct.pack(pattern, *val1.wavedata))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.src is None:
        self.src = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.count, _x.exist_src_num,) = _struct_2i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.src = []
      for i in range(0, length):
        val1 = hark_msgs.msg.HarkSrcWaveVal()
        _x = val1
        start = end
        end += 32
        (_x.id, _x.power, _x.x, _x.y, _x.z, _x.theta, _x.length, _x.data_bytes,) = _struct_i5f2i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.wavedata = struct.unpack(pattern, str[start:end])
        self.src.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2i.pack(_x.count, _x.exist_src_num))
      length = len(self.src)
      buff.write(_struct_I.pack(length))
      for val1 in self.src:
        _x = val1
        buff.write(_struct_i5f2i.pack(_x.id, _x.power, _x.x, _x.y, _x.z, _x.theta, _x.length, _x.data_bytes))
        length = len(val1.wavedata)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(val1.wavedata.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.src is None:
        self.src = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.count, _x.exist_src_num,) = _struct_2i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.src = []
      for i in range(0, length):
        val1 = hark_msgs.msg.HarkSrcWaveVal()
        _x = val1
        start = end
        end += 32
        (_x.id, _x.power, _x.x, _x.y, _x.z, _x.theta, _x.length, _x.data_bytes,) = _struct_i5f2i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.wavedata = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
        self.src.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_2i = struct.Struct("<2i")
_struct_i5f2i = struct.Struct("<i5f2i")
