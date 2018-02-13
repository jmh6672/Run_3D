#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t20;
// System.String
struct String_t;

#include "mscorlib_System_ValueType.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Connection_0.h"

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct  ConnectionResponse_t27 
{
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_t20* ___mPayload_4;
};
struct ConnectionResponse_t27_StaticFields{
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_t20* ___EmptyPayload_0;
};
// Native definition for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t27_marshaled
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	uint8_t* ___mPayload_4;
};
