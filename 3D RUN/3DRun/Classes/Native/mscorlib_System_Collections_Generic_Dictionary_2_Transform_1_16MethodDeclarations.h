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

// System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>
struct Transform_1_t2477;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Part.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Parti.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15362_gshared (Transform_1_t2477 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15362(__this, ___object, ___method, method) (( void (*) (Transform_1_t2477 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15362_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m15363_gshared (Transform_1_t2477 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15363(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2477 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m15363_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15364_gshared (Transform_1_t2477 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15364(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2477 *, int32_t, int32_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15364_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m15365_gshared (Transform_1_t2477 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15365(__this, ___result, method) (( int32_t (*) (Transform_1_t2477 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15365_gshared)(__this, ___result, method)
