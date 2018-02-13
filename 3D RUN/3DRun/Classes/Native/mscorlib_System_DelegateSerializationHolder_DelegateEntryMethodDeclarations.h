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

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2093;
// System.Delegate
struct Delegate_t453;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;

#include "codegen/il2cpp-codegen.h"

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m12116 (DelegateEntry_t2093 * __this, Delegate_t453 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t453 * DelegateEntry_DeserializeDelegate_m12117 (DelegateEntry_t2093 * __this, SerializationInfo_t1108 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
