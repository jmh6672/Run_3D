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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
struct UnityAdsDelegate_2_t2942;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m21273_gshared (UnityAdsDelegate_2_t2942 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m21273(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t2942 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m21273_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m21274_gshared (UnityAdsDelegate_2_t2942 * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m21274(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t2942 *, Object_t *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_Invoke_m21274_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m21275_gshared (UnityAdsDelegate_2_t2942 * __this, Object_t * ___p1, Object_t * ___p2, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m21275(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t2942 *, Object_t *, Object_t *, AsyncCallback_t74 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m21275_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m21276_gshared (UnityAdsDelegate_2_t2942 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m21276(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t2942 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m21276_gshared)(__this, ___result, method)
