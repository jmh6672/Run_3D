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

// GooglePlayGames.Native.NativeEventClient
struct NativeEventClient_t224;
// GooglePlayGames.Native.PInvoke.EventManager
struct EventManager_t225;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Events.IEvent>>
struct Action_2_t221;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Events.IEvent>
struct Action_2_t223;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSource.h"

// System.Void GooglePlayGames.Native.NativeEventClient::.ctor(GooglePlayGames.Native.PInvoke.EventManager)
extern "C" void NativeEventClient__ctor_m968 (NativeEventClient_t224 * __this, EventManager_t225 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeEventClient::FetchAllEvents(GooglePlayGames.BasicApi.DataSource,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Events.IEvent>>)
extern "C" void NativeEventClient_FetchAllEvents_m969 (NativeEventClient_t224 * __this, int32_t ___source, Action_2_t221 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeEventClient::FetchEvent(GooglePlayGames.BasicApi.DataSource,System.String,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Events.IEvent>)
extern "C" void NativeEventClient_FetchEvent_m970 (NativeEventClient_t224 * __this, int32_t ___source, String_t* ___eventId, Action_2_t223 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeEventClient::IncrementEvent(System.String,System.UInt32)
extern "C" void NativeEventClient_IncrementEvent_m971 (NativeEventClient_t224 * __this, String_t* ___eventId, uint32_t ___stepsToIncrement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
