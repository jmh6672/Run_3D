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
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_EndpointDe.h"

// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String,System.String)
extern "C" void EndpointDetails__ctor_m130 (EndpointDetails_t25 * __this, String_t* ___endpointId, String_t* ___deviceId, String_t* ___name, String_t* ___serviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
extern "C" String_t* EndpointDetails_get_EndpointId_m131 (EndpointDetails_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_DeviceId()
extern "C" String_t* EndpointDetails_get_DeviceId_m132 (EndpointDetails_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
extern "C" String_t* EndpointDetails_get_Name_m133 (EndpointDetails_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
extern "C" String_t* EndpointDetails_get_ServiceId_m134 (EndpointDetails_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void EndpointDetails_t25_marshal(const EndpointDetails_t25& unmarshaled, EndpointDetails_t25_marshaled& marshaled);
extern "C" void EndpointDetails_t25_marshal_back(const EndpointDetails_t25_marshaled& marshaled, EndpointDetails_t25& unmarshaled);
extern "C" void EndpointDetails_t25_marshal_cleanup(EndpointDetails_t25_marshaled& marshaled);
