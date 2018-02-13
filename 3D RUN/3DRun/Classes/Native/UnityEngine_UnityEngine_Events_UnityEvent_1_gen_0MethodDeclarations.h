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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t657;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t841;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1083;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m3918_gshared (UnityEvent_1_t657 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3918(__this, method) (( void (*) (UnityEvent_1_t657 *, const MethodInfo*))UnityEvent_1__ctor_m3918_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m3921_gshared (UnityEvent_1_t657 * __this, UnityAction_1_t841 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m3921(__this, ___call, method) (( void (*) (UnityEvent_1_t657 *, UnityAction_1_t841 *, const MethodInfo*))UnityEvent_1_AddListener_m3921_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m17026_gshared (UnityEvent_1_t657 * __this, UnityAction_1_t841 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m17026(__this, ___call, method) (( void (*) (UnityEvent_1_t657 *, UnityAction_1_t841 *, const MethodInfo*))UnityEvent_1_RemoveListener_m17026_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m17027_gshared (UnityEvent_1_t657 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m17027(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t657 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m17027_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1083 * UnityEvent_1_GetDelegate_m17028_gshared (UnityEvent_1_t657 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17028(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1083 * (*) (UnityEvent_1_t657 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m17028_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1083 * UnityEvent_1_GetDelegate_m17029_gshared (Object_t * __this /* static, unused */, UnityAction_1_t841 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17029(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1083 * (*) (Object_t * /* static, unused */, UnityAction_1_t841 *, const MethodInfo*))UnityEvent_1_GetDelegate_m17029_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3920_gshared (UnityEvent_1_t657 * __this, Color_t659  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3920(__this, ___arg0, method) (( void (*) (UnityEvent_1_t657 *, Color_t659 , const MethodInfo*))UnityEvent_1_Invoke_m3920_gshared)(__this, ___arg0, method)
