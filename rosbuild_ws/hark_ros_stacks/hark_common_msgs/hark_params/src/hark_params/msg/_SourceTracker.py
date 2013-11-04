"""autogenerated by genpy from hark_params/SourceTracker.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SourceTracker(genpy.Message):
  _md5sum = "0e5eca4812a7b46014118d0b366889e2"
  _type = "hark_params/SourceTracker"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 thresh
float32 pause_length
float32 min_src_interval
float32 min_tfindex_interval
uint8 compare_mode
uint8 DEG=0
uint8 TFINDEX=1

"""
  # Pseudo-constants
  DEG = 0
  TFINDEX = 1

  __slots__ = ['thresh','pause_length','min_src_interval','min_tfindex_interval','compare_mode']
  _slot_types = ['float32','float32','float32','float32','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       thresh,pause_length,min_src_interval,min_tfindex_interval,compare_mode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SourceTracker, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.thresh is None:
        self.thresh = 0.
      if self.pause_length is None:
        self.pause_length = 0.
      if self.min_src_interval is None:
        self.min_src_interval = 0.
      if self.min_tfindex_interval is None:
        self.min_tfindex_interval = 0.
      if self.compare_mode is None:
        self.compare_mode = 0
    else:
      self.thresh = 0.
      self.pause_length = 0.
      self.min_src_interval = 0.
      self.min_tfindex_interval = 0.
      self.compare_mode = 0

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
      buff.write(_struct_4fB.pack(_x.thresh, _x.pause_length, _x.min_src_interval, _x.min_tfindex_interval, _x.compare_mode))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.thresh, _x.pause_length, _x.min_src_interval, _x.min_tfindex_interval, _x.compare_mode,) = _struct_4fB.unpack(str[start:end])
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
      buff.write(_struct_4fB.pack(_x.thresh, _x.pause_length, _x.min_src_interval, _x.min_tfindex_interval, _x.compare_mode))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.thresh, _x.pause_length, _x.min_src_interval, _x.min_tfindex_interval, _x.compare_mode,) = _struct_4fB.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4fB = struct.Struct("<4fB")