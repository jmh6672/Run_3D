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

// GooglePlayGames.Native.PInvoke.EventManager
struct EventManager_t225;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse>
struct Action_1_t455;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchResponse>
struct Action_1_t456;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.EventManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void EventManager__ctor_m1328 (EventManager_t225 * __this, GameServices_t210 * ___services, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::FetchAll(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse>)
extern "C" void EventManager_FetchAll_m1329 (EventManager_t225 * __this, int32_t ___source, Action_1_t455 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::InternalFetchAllCallback(System.IntPtr,System.IntPtr)
extern "C" void EventManager_InternalFetchAllCallback_m1330 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::Fetch(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchResponse>)
extern "C" void EventManager_Fetch_m1331 (EventManager_t225 * __this, int32_t ___source, String_t* ___eventId, Action_1_t456 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C" void EventManager_InternalFetchCallback_m1332 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::Increment(System.String,System.UInt32)
extern "C" void EventManager_Increment_m1333 (EventManager_t225 * __this, String_t* ___eventId, uint32_t ___steps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
