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

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2940;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1083;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_3__ctor_m21267_gshared (UnityEvent_3_t2940 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m21267(__this, method) (( void (*) (UnityEvent_3_t2940 *, const MethodInfo*))UnityEvent_3__ctor_m21267_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m21268_gshared (UnityEvent_3_t2940 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m21268(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_3_t2940 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m21268_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1083 * UnityEvent_3_GetDelegate_m21269_gshared (UnityEvent_3_t2940 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m21269(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1083 * (*) (UnityEvent_3_t2940 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m21269_gshared)(__this, ___target, ___theFunction, method)
