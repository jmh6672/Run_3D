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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Transform_1_t2621;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17203_gshared (Transform_1_t2621 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17203(__this, ___object, ___method, method) (( void (*) (Transform_1_t2621 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17203_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2612  Transform_1_Invoke_m17204_gshared (Transform_1_t2621 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17204(__this, ___key, ___value, method) (( KeyValuePair_2_t2612  (*) (Transform_1_t2621 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m17204_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17205_gshared (Transform_1_t2621 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17205(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2621 *, Object_t *, int32_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17205_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2612  Transform_1_EndInvoke_m17206_gshared (Transform_1_t2621 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17206(__this, ___result, method) (( KeyValuePair_2_t2612  (*) (Transform_1_t2621 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17206_gshared)(__this, ___result, method)
