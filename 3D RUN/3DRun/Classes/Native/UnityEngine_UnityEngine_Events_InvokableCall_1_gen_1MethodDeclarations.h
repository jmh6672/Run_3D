﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2607;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t842;
// System.Object[]
struct ObjectU5BU5D_t488;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17043_gshared (InvokableCall_1_t2607 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m17043(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2607 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m17043_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17044_gshared (InvokableCall_1_t2607 * __this, UnityAction_1_t842 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m17044(__this, ___action, method) (( void (*) (InvokableCall_1_t2607 *, UnityAction_1_t842 *, const MethodInfo*))InvokableCall_1__ctor_m17044_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17045_gshared (InvokableCall_1_t2607 * __this, ObjectU5BU5D_t488* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m17045(__this, ___args, method) (( void (*) (InvokableCall_1_t2607 *, ObjectU5BU5D_t488*, const MethodInfo*))InvokableCall_1_Invoke_m17045_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17046_gshared (InvokableCall_1_t2607 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m17046(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2607 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m17046_gshared)(__this, ___targetObj, ___method, method)
