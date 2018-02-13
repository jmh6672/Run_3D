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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Connection_1.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Connection_0.h"

// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
extern "C" void ConnectionResponse__ctor_m100 (ConnectionResponse_t27 * __this, int64_t ___localClientId, String_t* ___remoteEndpointId, int32_t ___code, ByteU5BU5D_t20* ___payload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
extern "C" void ConnectionResponse__cctor_m101 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
extern "C" int64_t ConnectionResponse_get_LocalClientId_m102 (ConnectionResponse_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
extern "C" String_t* ConnectionResponse_get_RemoteEndpointId_m103 (ConnectionResponse_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
extern "C" int32_t ConnectionResponse_get_ResponseStatus_m104 (ConnectionResponse_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
extern "C" ByteU5BU5D_t20* ConnectionResponse_get_Payload_m105 (ConnectionResponse_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
extern "C" ConnectionResponse_t27  ConnectionResponse_Rejected_m106 (Object_t * __this /* static, unused */, int64_t ___localClientId, String_t* ___remoteEndpointId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
extern "C" ConnectionResponse_t27  ConnectionResponse_NetworkNotConnected_m107 (Object_t * __this /* static, unused */, int64_t ___localClientId, String_t* ___remoteEndpointId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
extern "C" ConnectionResponse_t27  ConnectionResponse_InternalError_m108 (Object_t * __this /* static, unused */, int64_t ___localClientId, String_t* ___remoteEndpointId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
extern "C" ConnectionResponse_t27  ConnectionResponse_EndpointNotConnected_m109 (Object_t * __this /* static, unused */, int64_t ___localClientId, String_t* ___remoteEndpointId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
extern "C" ConnectionResponse_t27  ConnectionResponse_Accepted_m110 (Object_t * __this /* static, unused */, int64_t ___localClientId, String_t* ___remoteEndpointId, ByteU5BU5D_t20* ___payload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
extern "C" ConnectionResponse_t27  ConnectionResponse_AlreadyConnected_m111 (Object_t * __this /* static, unused */, int64_t ___localClientId, String_t* ___remoteEndpointId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ConnectionResponse_t27_marshal(const ConnectionResponse_t27& unmarshaled, ConnectionResponse_t27_marshaled& marshaled);
extern "C" void ConnectionResponse_t27_marshal_back(const ConnectionResponse_t27_marshaled& marshaled, ConnectionResponse_t27& unmarshaled);
extern "C" void ConnectionResponse_t27_marshal_cleanup(ConnectionResponse_t27_marshaled& marshaled);
