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

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Advertisin.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_ResponseStatus.h"

// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
extern "C" void AdvertisingResult__ctor_m93 (AdvertisingResult_t23 * __this, int32_t ___status, String_t* ___localEndpointName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
extern "C" bool AdvertisingResult_get_Succeeded_m94 (AdvertisingResult_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
extern "C" int32_t AdvertisingResult_get_Status_m95 (AdvertisingResult_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
extern "C" String_t* AdvertisingResult_get_LocalEndpointName_m96 (AdvertisingResult_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AdvertisingResult_t23_marshal(const AdvertisingResult_t23& unmarshaled, AdvertisingResult_t23_marshaled& marshaled);
extern "C" void AdvertisingResult_t23_marshal_back(const AdvertisingResult_t23_marshaled& marshaled, AdvertisingResult_t23& unmarshaled);
extern "C" void AdvertisingResult_t23_marshal_cleanup(AdvertisingResult_t23_marshaled& marshaled);
