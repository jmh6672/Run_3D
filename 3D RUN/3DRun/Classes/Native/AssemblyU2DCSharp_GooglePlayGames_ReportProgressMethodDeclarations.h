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

// GooglePlayGames.ReportProgress
struct ReportProgress_t50;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.ReportProgress::.ctor(System.Object,System.IntPtr)
extern "C" void ReportProgress__ctor_m1911 (ReportProgress_t50 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.ReportProgress::Invoke(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C" void ReportProgress_Invoke_m1912 (ReportProgress_t50 * __this, String_t* ___id, double ___progress, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.ReportProgress::BeginInvoke(System.String,System.Double,System.Action`1<System.Boolean>,System.AsyncCallback,System.Object)
extern "C" Object_t * ReportProgress_BeginInvoke_m1913 (ReportProgress_t50 * __this, String_t* ___id, double ___progress, Action_1_t66 * ___callback, AsyncCallback_t74 * ____callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.ReportProgress::EndInvoke(System.IAsyncResult)
extern "C" void ReportProgress_EndInvoke_m1914 (ReportProgress_t50 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
