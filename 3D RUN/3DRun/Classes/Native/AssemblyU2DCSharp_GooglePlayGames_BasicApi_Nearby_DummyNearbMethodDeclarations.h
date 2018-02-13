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

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_t28;
// System.Collections.Generic.List`1<System.String>
struct List_1_t12;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t428;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_t429;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_t430;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t431;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_t432;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
extern "C" void DummyNearbyConnectionClient__ctor_m112 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxUnreliableMessagePayloadLength()
extern "C" int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_m113 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
extern "C" int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_m114 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendReliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
extern "C" void DummyNearbyConnectionClient_SendReliable_m115 (DummyNearbyConnectionClient_t28 * __this, List_1_t12 * ___recipientEndpointIds, ByteU5BU5D_t20* ___payload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendUnreliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
extern "C" void DummyNearbyConnectionClient_SendUnreliable_m116 (DummyNearbyConnectionClient_t28 * __this, List_1_t12 * ___recipientEndpointIds, ByteU5BU5D_t20* ___payload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartAdvertising(System.String,System.Collections.Generic.List`1<System.String>,System.Nullable`1<System.TimeSpan>,System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>,System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>)
extern "C" void DummyNearbyConnectionClient_StartAdvertising_m117 (DummyNearbyConnectionClient_t28 * __this, String_t* ___name, List_1_t12 * ___appIdentifiers, Nullable_1_t46  ___advertisingDuration, Action_1_t428 * ___resultCallback, Action_1_t429 * ___connectionRequestCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAdvertising()
extern "C" void DummyNearbyConnectionClient_StopAdvertising_m118 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendConnectionRequest(System.String,System.String,System.Byte[],System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>,GooglePlayGames.BasicApi.Nearby.IMessageListener)
extern "C" void DummyNearbyConnectionClient_SendConnectionRequest_m119 (DummyNearbyConnectionClient_t28 * __this, String_t* ___name, String_t* ___remoteEndpointId, ByteU5BU5D_t20* ___payload, Action_1_t430 * ___responseCallback, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::AcceptConnectionRequest(System.String,System.Byte[],GooglePlayGames.BasicApi.Nearby.IMessageListener)
extern "C" void DummyNearbyConnectionClient_AcceptConnectionRequest_m120 (DummyNearbyConnectionClient_t28 * __this, String_t* ___remoteEndpointId, ByteU5BU5D_t20* ___payload, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartDiscovery(System.String,System.Nullable`1<System.TimeSpan>,GooglePlayGames.BasicApi.Nearby.IDiscoveryListener)
extern "C" void DummyNearbyConnectionClient_StartDiscovery_m121 (DummyNearbyConnectionClient_t28 * __this, String_t* ___serviceId, Nullable_1_t46  ___advertisingTimeout, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopDiscovery(System.String)
extern "C" void DummyNearbyConnectionClient_StopDiscovery_m122 (DummyNearbyConnectionClient_t28 * __this, String_t* ___serviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::RejectConnectionRequest(System.String)
extern "C" void DummyNearbyConnectionClient_RejectConnectionRequest_m123 (DummyNearbyConnectionClient_t28 * __this, String_t* ___requestingEndpointId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::DisconnectFromEndpoint(System.String)
extern "C" void DummyNearbyConnectionClient_DisconnectFromEndpoint_m124 (DummyNearbyConnectionClient_t28 * __this, String_t* ___remoteEndpointId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAllConnections()
extern "C" void DummyNearbyConnectionClient_StopAllConnections_m125 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalEndpointId()
extern "C" String_t* DummyNearbyConnectionClient_LocalEndpointId_m126 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalDeviceId()
extern "C" String_t* DummyNearbyConnectionClient_LocalDeviceId_m127 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetAppBundleId()
extern "C" String_t* DummyNearbyConnectionClient_GetAppBundleId_m128 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetServiceId()
extern "C" String_t* DummyNearbyConnectionClient_GetServiceId_m129 (DummyNearbyConnectionClient_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
