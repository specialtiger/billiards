"""autogenerated by genpy from billiards_msgs/Constants.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Constants(genpy.Message):
  _md5sum = "e39ed62e8d9af3b362188ff9c57e1b33"
  _type = "billiards_msgs/Constants"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Everything is in meters

float32 BALL_RADIUS = 0.028575
float32 TABLE_LENGTH = 2.235
float32 TABLE_WIDTH = 1.120
float32 TABLE_HEIGHT = 0.78
float32 RAIL_DEPTH = 0.14
float32 RAIL_HEIGHT = 0.038
float32 CORNER_POCKET_WIDTH = 0.125
float32 SIDE_POCKET_WIDTH = 0.135
float32 BUMPER_TO_DIAMOND = 0.085

float32 BRIDGE_OFFSET_Z = 0.104
float32 BRIDGE_HEIGHT = 0.112 
float32 BRIDGE_WIDTH = 0.052

float32 BRIDGE_TO_STRIKE_MIN = 0.25
float32 BRIDGE_TO_STRIKE_MAX = 0.33
float32 BRIDGE_THICKNESS = 0.014

float32 ROBOT_RADIUS = 0.40


### Constraint on the offset of the base from the bridge
float32 BRIDGE_IN_BASE_X = 0.295
float32 BRIDGE_IN_BASE_Y = 0.860
float32 BRIDGE_IN_BASE_Z = 0.710  # Use TABLE_HEIGHT - 0.051 (<-- base_link height)

# 90 degrees to the base
#float32 BRIDGE_IN_BASE_QX = 0.0
#float32 BRIDGE_IN_BASE_QY = 0.0
#float32 BRIDGE_IN_BASE_QZ = 0.7071
#float32 BRIDGE_IN_BASE_QW = 0.7071
# 100 degrees to the base
float32 BRIDGE_IN_BASE_QX = 0.0
float32 BRIDGE_IN_BASE_QY = 0.0
float32 BRIDGE_IN_BASE_QZ = 0.766
float32 BRIDGE_IN_BASE_QW = 0.643

float32 CUE_AZIMUTH = 0.0524  # Radians
"""
  # Pseudo-constants
  BALL_RADIUS = 0.028575
  TABLE_LENGTH = 2.235
  TABLE_WIDTH = 1.12
  TABLE_HEIGHT = 0.78
  RAIL_DEPTH = 0.14
  RAIL_HEIGHT = 0.038
  CORNER_POCKET_WIDTH = 0.125
  SIDE_POCKET_WIDTH = 0.135
  BUMPER_TO_DIAMOND = 0.085
  BRIDGE_OFFSET_Z = 0.104
  BRIDGE_HEIGHT = 0.112
  BRIDGE_WIDTH = 0.052
  BRIDGE_TO_STRIKE_MIN = 0.25
  BRIDGE_TO_STRIKE_MAX = 0.33
  BRIDGE_THICKNESS = 0.014
  ROBOT_RADIUS = 0.4
  BRIDGE_IN_BASE_X = 0.295
  BRIDGE_IN_BASE_Y = 0.86
  BRIDGE_IN_BASE_Z = 0.71
  BRIDGE_IN_BASE_QX = 0.0
  BRIDGE_IN_BASE_QY = 0.0
  BRIDGE_IN_BASE_QZ = 0.766
  BRIDGE_IN_BASE_QW = 0.643
  CUE_AZIMUTH = 0.0524

  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Constants, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
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
      pass
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
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
