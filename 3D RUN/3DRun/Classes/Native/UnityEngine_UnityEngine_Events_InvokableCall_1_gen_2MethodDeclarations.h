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

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t2635;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2634;
// System.Object[]
struct ObjectU5BU5D_t488;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17426_gshared (InvokableCall_1_t2635 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m17426(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2635 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m17426_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17427_gshared (InvokableCall_1_t2635 * __this, UnityAction_1_t2634 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m17427(__this, ___action, method) (( void (*) (InvokableCall_1_t2635 *, UnityAction_1_t2634 *, const MethodInfo*))InvokableCall_1__ctor_m17427_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17428_gshared (InvokableCall_1_t2635 * __this, ObjectU5BU5D_t488* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m17428(__this, ___args, method) (( void (*) (InvokableCall_1_t2635 *, ObjectU5BU5D_t488*, const MethodInfo*))InvokableCall_1_Invoke_m17428_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17429_gshared (InvokableCall_1_t2635 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m17429(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2635 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m17429_gshared)(__this, ___targetObj, ___method, method)
