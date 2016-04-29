# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: bfcta.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import bftrader_pb2 as bftrader__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='bfcta.proto',
  package='bftrader.bfctaservice',
  syntax='proto3',
  serialized_pb=_b('\n\x0b\x62\x66\x63ta.proto\x12\x15\x62\x66trader.bfctaservice\x1a\x0e\x62\x66trader.proto2\xb8\x02\n\x0c\x42\x66\x43taService\x12<\n\x07\x43onnect\x12\x16.bftrader.BfConnectReq\x1a\x17.bftrader.BfConnectResp\"\x00\x12\x38\n\x0cGetRobotInfo\x12\x12.bftrader.BfKvData\x1a\x12.bftrader.BfKvData\"\x00\x12\x42\n\tSendOrder\x12\x18.bftrader.BfSendOrderReq\x1a\x19.bftrader.BfSendOrderResp\"\x00\x12=\n\x0b\x43\x61ncelOrder\x12\x1a.bftrader.BfCancelOrderReq\x1a\x10.bftrader.BfVoid\"\x00\x12-\n\x05\x43lose\x12\x10.bftrader.BfVoid\x1a\x10.bftrader.BfVoid\"\x00\x62\x06proto3')
  ,
  dependencies=[bftrader__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)





import abc
from grpc.beta import implementations as beta_implementations
from grpc.framework.common import cardinality
from grpc.framework.interfaces.face import utilities as face_utilities

class BetaBfCtaServiceServicer(object):
  """<fill me in later!>"""
  __metaclass__ = abc.ABCMeta
  @abc.abstractmethod
  def Connect(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def GetRobotInfo(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def SendOrder(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def CancelOrder(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def Close(self, request, context):
    raise NotImplementedError()

class BetaBfCtaServiceStub(object):
  """The interface to which stubs will conform."""
  __metaclass__ = abc.ABCMeta
  @abc.abstractmethod
  def Connect(self, request, timeout):
    raise NotImplementedError()
  Connect.future = None
  @abc.abstractmethod
  def GetRobotInfo(self, request, timeout):
    raise NotImplementedError()
  GetRobotInfo.future = None
  @abc.abstractmethod
  def SendOrder(self, request, timeout):
    raise NotImplementedError()
  SendOrder.future = None
  @abc.abstractmethod
  def CancelOrder(self, request, timeout):
    raise NotImplementedError()
  CancelOrder.future = None
  @abc.abstractmethod
  def Close(self, request, timeout):
    raise NotImplementedError()
  Close.future = None

def beta_create_BfCtaService_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  request_deserializers = {
    ('bftrader.bfctaservice.BfCtaService', 'CancelOrder'): bftrader_pb2.BfCancelOrderReq.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'Close'): bftrader_pb2.BfVoid.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'Connect'): bftrader_pb2.BfConnectReq.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'GetRobotInfo'): bftrader_pb2.BfKvData.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'SendOrder'): bftrader_pb2.BfSendOrderReq.FromString,
  }
  response_serializers = {
    ('bftrader.bfctaservice.BfCtaService', 'CancelOrder'): bftrader_pb2.BfVoid.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'Close'): bftrader_pb2.BfVoid.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'Connect'): bftrader_pb2.BfConnectResp.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'GetRobotInfo'): bftrader_pb2.BfKvData.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'SendOrder'): bftrader_pb2.BfSendOrderResp.SerializeToString,
  }
  method_implementations = {
    ('bftrader.bfctaservice.BfCtaService', 'CancelOrder'): face_utilities.unary_unary_inline(servicer.CancelOrder),
    ('bftrader.bfctaservice.BfCtaService', 'Close'): face_utilities.unary_unary_inline(servicer.Close),
    ('bftrader.bfctaservice.BfCtaService', 'Connect'): face_utilities.unary_unary_inline(servicer.Connect),
    ('bftrader.bfctaservice.BfCtaService', 'GetRobotInfo'): face_utilities.unary_unary_inline(servicer.GetRobotInfo),
    ('bftrader.bfctaservice.BfCtaService', 'SendOrder'): face_utilities.unary_unary_inline(servicer.SendOrder),
  }
  server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
  return beta_implementations.server(method_implementations, options=server_options)

def beta_create_BfCtaService_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  request_serializers = {
    ('bftrader.bfctaservice.BfCtaService', 'CancelOrder'): bftrader_pb2.BfCancelOrderReq.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'Close'): bftrader_pb2.BfVoid.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'Connect'): bftrader_pb2.BfConnectReq.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'GetRobotInfo'): bftrader_pb2.BfKvData.SerializeToString,
    ('bftrader.bfctaservice.BfCtaService', 'SendOrder'): bftrader_pb2.BfSendOrderReq.SerializeToString,
  }
  response_deserializers = {
    ('bftrader.bfctaservice.BfCtaService', 'CancelOrder'): bftrader_pb2.BfVoid.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'Close'): bftrader_pb2.BfVoid.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'Connect'): bftrader_pb2.BfConnectResp.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'GetRobotInfo'): bftrader_pb2.BfKvData.FromString,
    ('bftrader.bfctaservice.BfCtaService', 'SendOrder'): bftrader_pb2.BfSendOrderResp.FromString,
  }
  cardinalities = {
    'CancelOrder': cardinality.Cardinality.UNARY_UNARY,
    'Close': cardinality.Cardinality.UNARY_UNARY,
    'Connect': cardinality.Cardinality.UNARY_UNARY,
    'GetRobotInfo': cardinality.Cardinality.UNARY_UNARY,
    'SendOrder': cardinality.Cardinality.UNARY_UNARY,
  }
  stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
  return beta_implementations.dynamic_stub(channel, 'bftrader.bfctaservice.BfCtaService', cardinalities, options=stub_options)
# @@protoc_insertion_point(module_scope)
