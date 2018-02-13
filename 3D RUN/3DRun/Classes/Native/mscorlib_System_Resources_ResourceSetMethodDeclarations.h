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

// System.Resources.ResourceSet
struct ResourceSet_t1804;
// System.IO.Stream
struct Stream_t1251;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1705;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t449;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1311;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C" void ResourceSet__ctor_m10281 (ResourceSet_t1804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C" void ResourceSet__ctor_m10282 (ResourceSet_t1804 * __this, Stream_t1251 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C" void ResourceSet__ctor_m10283 (ResourceSet_t1804 * __this, UnmanagedMemoryStream_t1705 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C" void ResourceSet__ctor_m10284 (ResourceSet_t1804 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m10285 (ResourceSet_t1804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C" void ResourceSet_Dispose_m10286 (ResourceSet_t1804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C" void ResourceSet_Dispose_m10287 (ResourceSet_t1804 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C" Object_t * ResourceSet_GetEnumerator_m10288 (ResourceSet_t1804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObjectInternal_m10289 (ResourceSet_t1804 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C" Object_t * ResourceSet_GetObject_m10290 (ResourceSet_t1804 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObject_m10291 (ResourceSet_t1804 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C" void ResourceSet_ReadResources_m10292 (ResourceSet_t1804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
