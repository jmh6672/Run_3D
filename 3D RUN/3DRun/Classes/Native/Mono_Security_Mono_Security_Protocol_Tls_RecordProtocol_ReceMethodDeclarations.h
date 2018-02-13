#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1249;
// System.AsyncCallback
struct AsyncCallback_t74;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.IO.Stream
struct Stream_t1251;
// System.Exception
struct Exception_t492;
// System.Threading.WaitHandle
struct WaitHandle_t1303;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6029 (ReceiveRecordAsyncResult_t1249 * __this, AsyncCallback_t74 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t20* ___initialBuffer, Stream_t1251 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1251 * ReceiveRecordAsyncResult_get_Record_m6030 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t20* ReceiveRecordAsyncResult_get_ResultingBuffer_m6031 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t20* ReceiveRecordAsyncResult_get_InitialBuffer_m6032 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6033 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t492 * ReceiveRecordAsyncResult_get_AsyncException_m6034 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6035 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1303 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6036 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m6037 (ReceiveRecordAsyncResult_t1249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6038 (ReceiveRecordAsyncResult_t1249 * __this, Exception_t492 * ___ex, ByteU5BU5D_t20* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6039 (ReceiveRecordAsyncResult_t1249 * __this, Exception_t492 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6040 (ReceiveRecordAsyncResult_t1249 * __this, ByteU5BU5D_t20* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
