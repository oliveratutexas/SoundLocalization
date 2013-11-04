"""autogenerated by genpy from hark_msgs/HarkJuliusSrc.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import hark_msgs.msg

class HarkJuliusSrc(genpy.Message):
  _md5sum = "1aff8127ead3951895e7fd2d0cb19ac9"
  _type = "hark_msgs/HarkJuliusSrc"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 id
float32 azimuth
float32 elevation
int32 sec
int32 usec
int32 frames
int32 msec
int8 status            # status of recognition process defined below
HarkJuliusSrcVal[] src # WHYPO results for each source

int8 TERMINATED=0
int8 STARTRECOG=1
int8 INPUTPARAM=2
int8 SOURCEINFO=3
int8 RECOGOUT=4
int8 RECOGFAIL=5

================================================================================
MSG: hark_msgs/HarkJuliusSrcVal
string word
int32 classid
string phone
float32 cm

"""
  # Pseudo-constants
  TERMINATED = 0
  STARTRECOG = 1
  INPUTPARAM = 2
  SOURCEINFO = 3
  RECOGOUT = 4
  RECOGFAIL = 5

  __slots__ = ['id','azimuth','elevation','sec','usec','frames','msec','status','src']
  _slot_types = ['int32','float32','float32','int32','int32','int32','int32','int8','hark_msgs/HarkJuliusSrcVal[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,azimuth,elevation,sec,usec,frames,msec,status,src

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HarkJuliusSrc, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.azimuth is None:
        self.azimuth = 0.
      if self.elevation is None:
        self.elevation = 0.
      if self.sec is None:
        self.sec = 0
      if self.usec is None:
        self.usec = 0
      if self.frames is None:
        self.frames = 0
      if self.msec is None:
        self.msec = 0
      if self.status is None:
        self.status = 0
      if self.src is None:
        self.src = []
    else:
      self.id = 0
      self.azimuth = 0.
      self.elevation = 0.
      self.sec = 0
      self.usec = 0
      self.frames = 0
      self.msec = 0
      self.status = 0
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
      buff.write(_struct_i2f4ib.pack(_x.id, _x.azimuth, _x.elevation, _x.sec, _x.usec, _x.frames, _x.msec, _x.status))
      length = len(self.src)
      buff.write(_struct_I.pack(length))
      for val1 in self.src:
        _x = val1.word
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_i.pack(val1.classid))
        _x = val1.phone
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_f.pack(val1.cm))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.src is None:
        self.src = None
      end = 0
      _x = self
      start = end
      end += 29
      (_x.id, _x.azimuth, _x.elevation, _x.sec, _x.usec, _x.frames, _x.msec, _x.status,) = _struct_i2f4ib.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.src = []
      for i in range(0, length):
        val1 = hark_msgs.msg.HarkJuliusSrcVal()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.word = str[start:end].decode('utf-8')
        else:
          val1.word = str[start:end]
        start = end
        end += 4
        (val1.classid,) = _struct_i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.phone = str[start:end].decode('utf-8')
        else:
          val1.phone = str[start:end]
        start = end
        end += 4
        (val1.cm,) = _struct_f.unpack(str[start:end])
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
      buff.write(_struct_i2f4ib.pack(_x.id, _x.azimuth, _x.elevation, _x.sec, _x.usec, _x.frames, _x.msec, _x.status))
      length = len(self.src)
      buff.write(_struct_I.pack(length))
      for val1 in self.src:
        _x = val1.word
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_i.pack(val1.classid))
        _x = val1.phone
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_f.pack(val1.cm))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.src is None:
        self.src = None
      end = 0
      _x = self
      start = end
      end += 29
      (_x.id, _x.azimuth, _x.elevation, _x.sec, _x.usec, _x.frames, _x.msec, _x.status,) = _struct_i2f4ib.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.src = []
      for i in range(0, length):
        val1 = hark_msgs.msg.HarkJuliusSrcVal()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.word = str[start:end].decode('utf-8')
        else:
          val1.word = str[start:end]
        start = end
        end += 4
        (val1.classid,) = _struct_i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.phone = str[start:end].decode('utf-8')
        else:
          val1.phone = str[start:end]
        start = end
        end += 4
        (val1.cm,) = _struct_f.unpack(str[start:end])
        self.src.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i = struct.Struct("<i")
_struct_i2f4ib = struct.Struct("<i2f4ib")
_struct_f = struct.Struct("<f")
