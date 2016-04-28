// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: bfkv.proto
#ifndef GRPC_bfkv_2eproto__INCLUDED
#define GRPC_bfkv_2eproto__INCLUDED

#include "bfkv.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace bftrader {
namespace bfkv {

class BfKvService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncSetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncSetKvRaw(context, request, cq));
    }
    virtual ::grpc::Status GetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfKvData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>> AsyncGetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>>(AsyncGetKvRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncSetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>* AsyncGetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncSetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncSetKvRaw(context, request, cq));
    }
    ::grpc::Status GetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfKvData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>> AsyncGetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>>(AsyncGetKvRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncSetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>* AsyncGetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_SetKv_;
    const ::grpc::RpcMethod rpcmethod_GetKv_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SetKv() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetKv(::grpc::ServerContext* context, ::bftrader::BfKvData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_GetKv() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetKv(::grpc::ServerContext* context, ::bftrader::BfKvData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfKvData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SetKv<WithAsyncMethod_GetKv<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SetKv() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_GetKv() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace bfkv
}  // namespace bftrader


#endif  // GRPC_bfkv_2eproto__INCLUDED
