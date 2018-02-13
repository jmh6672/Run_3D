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

// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,System.Object,System.Object>
struct Action_3_t520;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_QuestUiRes.h"

// System.Void System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_3__ctor_m13861_gshared (Action_3_t520 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_3__ctor_m13861(__this, ___object, ___method, method) (( void (*) (Action_3_t520 *, Object_t *, IntPtr_t, const MethodInfo*))Action_3__ctor_m13861_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C" void Action_3_Invoke_m13862_gshared (Action_3_t520 * __this, int32_t ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
#define Action_3_Invoke_m13862(__this, ___arg1, ___arg2, ___arg3, method) (( void (*) (Action_3_t520 *, int32_t, Object_t *, Object_t *, const MethodInfo*))Action_3_Invoke_m13862_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_3_BeginInvoke_m13864_gshared (Action_3_t520 * __this, int32_t ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_3_BeginInvoke_m13864(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (Action_3_t520 *, int32_t, Object_t *, Object_t *, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_3_BeginInvoke_m13864_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_3_EndInvoke_m13866_gshared (Action_3_t520 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_3_EndInvoke_m13866(__this, ___result, method) (( void (*) (Action_3_t520 *, Object_t *, const MethodInfo*))Action_3_EndInvoke_m13866_gshared)(__this, ___result, method)
