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

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t31;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_NearbyConn.h"

// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
extern "C" void NearbyConnectionConfiguration__ctor_m135 (NearbyConnectionConfiguration_t30 * __this, Action_1_t31 * ___callback, int64_t ___localClientId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
extern "C" int64_t NearbyConnectionConfiguration_get_LocalClientId_m136 (NearbyConnectionConfiguration_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
extern "C" Action_1_t31 * NearbyConnectionConfiguration_get_InitializationCallback_m137 (NearbyConnectionConfiguration_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
