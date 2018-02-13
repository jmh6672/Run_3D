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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t1360;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1171;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C" void NameValueCollection__ctor_m6560 (NameValueCollection_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameValueCollection__ctor_m6561 (NameValueCollection_t1360 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C" void NameValueCollection_Add_m6562 (NameValueCollection_t1360 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C" String_t* NameValueCollection_Get_m6563 (NameValueCollection_t1360 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C" String_t* NameValueCollection_AsSingleString_m6564 (Object_t * __this /* static, unused */, ArrayList_t1171 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C" String_t* NameValueCollection_GetKey_m6565 (NameValueCollection_t1360 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C" void NameValueCollection_InvalidateCachedArrays_m6566 (NameValueCollection_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
