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

#include "mscorlib_System_ValueType.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_EndpointDe.h"

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct  ConnectionRequest_t24 
{
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_t25  ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_t20* ___mPayload_1;
};
// Native definition for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t24_marshaled
{
	EndpointDetails_t25_marshaled ___mRemoteEndpoint_0;
	uint8_t* ___mPayload_1;
};
