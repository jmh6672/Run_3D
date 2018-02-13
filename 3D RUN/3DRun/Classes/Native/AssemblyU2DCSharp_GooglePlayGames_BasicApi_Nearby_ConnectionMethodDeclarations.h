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
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Connection.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_EndpointDe.h"

// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.String,System.Byte[])
extern "C" void ConnectionRequest__ctor_m97 (ConnectionRequest_t24 * __this, String_t* ___remoteEndpointId, String_t* ___remoteDeviceId, String_t* ___remoteEndpointName, String_t* ___serviceId, ByteU5BU5D_t20* ___payload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
extern "C" EndpointDetails_t25  ConnectionRequest_get_RemoteEndpoint_m98 (ConnectionRequest_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
extern "C" ByteU5BU5D_t20* ConnectionRequest_get_Payload_m99 (ConnectionRequest_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ConnectionRequest_t24_marshal(const ConnectionRequest_t24& unmarshaled, ConnectionRequest_t24_marshaled& marshaled);
extern "C" void ConnectionRequest_t24_marshal_back(const ConnectionRequest_t24_marshaled& marshaled, ConnectionRequest_t24& unmarshaled);
extern "C" void ConnectionRequest_t24_marshal_cleanup(ConnectionRequest_t24_marshaled& marshaled);
