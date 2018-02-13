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

// System.ResolveEventHandler
struct ResolveEventHandler_t2078;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1508;
// System.ResolveEventArgs
struct ResolveEventArgs_t2134;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m12590 (ResolveEventHandler_t2078 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1508 * ResolveEventHandler_Invoke_m12591 (ResolveEventHandler_t2078 * __this, Object_t * ___sender, ResolveEventArgs_t2134 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1508 * pinvoke_delegate_wrapper_ResolveEventHandler_t2078(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2134 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m12592 (ResolveEventHandler_t2078 * __this, Object_t * ___sender, ResolveEventArgs_t2134 * ___args, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1508 * ResolveEventHandler_EndInvoke_m12593 (ResolveEventHandler_t2078 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;