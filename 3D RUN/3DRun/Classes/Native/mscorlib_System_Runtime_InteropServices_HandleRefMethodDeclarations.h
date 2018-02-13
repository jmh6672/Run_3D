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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
extern "C" void HandleRef__ctor_m2182 (HandleRef_t336 * __this, Object_t * ___wrapper, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
extern "C" IntPtr_t HandleRef_get_Handle_m2185 (HandleRef_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.HandleRef::ToIntPtr(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t HandleRef_ToIntPtr_m2210 (Object_t * __this /* static, unused */, HandleRef_t336  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
