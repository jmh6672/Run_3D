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

// System.Reflection.AmbiguousMatchException
struct AmbiguousMatchException_t1741;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AmbiguousMatchException::.ctor()
extern "C" void AmbiguousMatchException__ctor_m9937 (AmbiguousMatchException_t1741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.String)
extern "C" void AmbiguousMatchException__ctor_m9938 (AmbiguousMatchException_t1741 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AmbiguousMatchException__ctor_m9939 (AmbiguousMatchException_t1741 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
