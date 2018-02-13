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

// GooglePlayGames.Native.Cwrapper.EventManager/FetchAllCallback
struct FetchAllCallback_t95;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.EventManager/FetchCallback
struct FetchCallback_t96;
// System.IntPtr[]
struct IntPtrU5BU5D_t443;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Data.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.EventManager/FetchAllCallback,System.IntPtr)
extern "C" void EventManager_EventManager_FetchAll_m380 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, FetchAllCallback_t95 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.EventManager/FetchCallback,System.IntPtr)
extern "C" void EventManager_EventManager_Fetch_m381 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___data_source, String_t* ___event_id, FetchCallback_t96 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_Increment(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32)
extern "C" void EventManager_EventManager_Increment_m382 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___event_id, uint32_t ___steps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void EventManager_EventManager_FetchAllResponse_Dispose_m383 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t EventManager_EventManager_FetchAllResponse_GetStatus_m384 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAllResponse_GetData(System.Runtime.InteropServices.HandleRef,System.IntPtr[],System.UIntPtr)
extern "C" UIntPtr_t  EventManager_EventManager_FetchAllResponse_GetData_m385 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtrU5BU5D_t443* ___out_arg, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void EventManager_EventManager_FetchResponse_Dispose_m386 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t EventManager_EventManager_FetchResponse_GetStatus_m387 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t EventManager_EventManager_FetchResponse_GetData_m388 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
