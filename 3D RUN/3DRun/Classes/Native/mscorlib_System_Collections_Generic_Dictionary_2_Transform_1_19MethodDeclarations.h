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

// System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,System.Collections.Generic.KeyValuePair`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>>
struct Transform_1_t2481;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Part.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Parti.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,System.Collections.Generic.KeyValuePair`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15394_gshared (Transform_1_t2481 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15394(__this, ___object, ___method, method) (( void (*) (Transform_1_t2481 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15394_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,System.Collections.Generic.KeyValuePair`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2471  Transform_1_Invoke_m15395_gshared (Transform_1_t2481 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15395(__this, ___key, ___value, method) (( KeyValuePair_2_t2471  (*) (Transform_1_t2481 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m15395_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,System.Collections.Generic.KeyValuePair`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15396_gshared (Transform_1_t2481 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15396(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2481 *, int32_t, int32_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15396_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,System.Collections.Generic.KeyValuePair`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2471  Transform_1_EndInvoke_m15397_gshared (Transform_1_t2481 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15397(__this, ___result, method) (( KeyValuePair_2_t2471  (*) (Transform_1_t2481 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15397_gshared)(__this, ___result, method)
