#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_ResponseStatus.h"

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct  AdvertisingResult_t23 
{
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;
};
// Native definition for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t23_marshaled
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
