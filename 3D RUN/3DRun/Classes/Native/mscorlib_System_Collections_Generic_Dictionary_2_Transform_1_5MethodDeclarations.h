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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult>
struct Transform_1_t2324;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Match.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13636_gshared (Transform_1_t2324 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13636(__this, ___object, ___method, method) (( void (*) (Transform_1_t2324 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13636_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m13637_gshared (Transform_1_t2324 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13637(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2324 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m13637_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13638_gshared (Transform_1_t2324 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13638(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2324 *, Object_t *, int32_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13638_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m13639_gshared (Transform_1_t2324 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13639(__this, ___result, method) (( int32_t (*) (Transform_1_t2324 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13639_gshared)(__this, ___result, method)
