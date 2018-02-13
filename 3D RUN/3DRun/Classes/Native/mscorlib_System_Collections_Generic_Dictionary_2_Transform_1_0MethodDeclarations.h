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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt32,System.UInt32>
struct Transform_1_t2300;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13381_gshared (Transform_1_t2300 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13381(__this, ___object, ___method, method) (( void (*) (Transform_1_t2300 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13381_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt32,System.UInt32>::Invoke(TKey,TValue)
extern "C" uint32_t Transform_1_Invoke_m13382_gshared (Transform_1_t2300 * __this, Object_t * ___key, uint32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13382(__this, ___key, ___value, method) (( uint32_t (*) (Transform_1_t2300 *, Object_t *, uint32_t, const MethodInfo*))Transform_1_Invoke_m13382_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt32,System.UInt32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13383_gshared (Transform_1_t2300 * __this, Object_t * ___key, uint32_t ___value, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13383(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2300 *, Object_t *, uint32_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13383_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt32,System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C" uint32_t Transform_1_EndInvoke_m13384_gshared (Transform_1_t2300 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13384(__this, ___result, method) (( uint32_t (*) (Transform_1_t2300 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13384_gshared)(__this, ___result, method)
