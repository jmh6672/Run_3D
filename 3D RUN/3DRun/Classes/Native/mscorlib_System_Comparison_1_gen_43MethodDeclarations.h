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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2905;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m20889_gshared (Comparison_1_t2905 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m20889(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2905 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m20889_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m20890_gshared (Comparison_1_t2905 * __this, UILineInfo_t888  ___x, UILineInfo_t888  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m20890(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2905 *, UILineInfo_t888 , UILineInfo_t888 , const MethodInfo*))Comparison_1_Invoke_m20890_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m20891_gshared (Comparison_1_t2905 * __this, UILineInfo_t888  ___x, UILineInfo_t888  ___y, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m20891(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2905 *, UILineInfo_t888 , UILineInfo_t888 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m20891_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m20892_gshared (Comparison_1_t2905 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m20892(__this, ___result, method) (( int32_t (*) (Comparison_1_t2905 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m20892_gshared)(__this, ___result, method)
