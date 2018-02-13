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

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t1874;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2151;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t488;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1879;
// System.Reflection.MethodBase
struct MethodBase_t1123;
// System.Collections.IDictionary
struct IDictionary_t1302;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1106;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C" void MethodCall__ctor_m10507 (MethodCall_t1874 * __this, HeaderU5BU5D_t2151* ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m10508 (MethodCall_t1874 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m10509 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m10510 (MethodCall_t1874 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern "C" void MethodCall_InitMethodProperty_m10511 (MethodCall_t1874 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall_GetObjectData_m10512 (MethodCall_t1874 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t488* MethodCall_get_Args_m10513 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern "C" LogicalCallContext_t1879 * MethodCall_get_LogicalCallContext_m10514 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t1123 * MethodCall_get_MethodBase_m10515 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m10516 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern "C" Object_t * MethodCall_get_MethodSignature_m10517 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m10518 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern "C" void MethodCall_InitDictionary_m10519 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m10520 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C" String_t* MethodCall_get_Uri_m10521 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m10522 (MethodCall_t1874 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m10523 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern "C" void MethodCall_ResolveMethod_m10524 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern "C" Type_t * MethodCall_CastTo_m10525 (MethodCall_t1874 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m10526 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t1106* MethodCall_get_GenericArguments_m10527 (MethodCall_t1874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
