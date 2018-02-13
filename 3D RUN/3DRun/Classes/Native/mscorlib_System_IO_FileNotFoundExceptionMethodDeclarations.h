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

// System.IO.FileNotFoundException
struct FileNotFoundException_t1680;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileNotFoundException::.ctor()
extern "C" void FileNotFoundException__ctor_m9404 (FileNotFoundException_t1680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
extern "C" void FileNotFoundException__ctor_m9405 (FileNotFoundException_t1680 * __this, String_t* ___message, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException__ctor_m9406 (FileNotFoundException_t1680 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::get_Message()
extern "C" String_t* FileNotFoundException_get_Message_m9407 (FileNotFoundException_t1680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException_GetObjectData_m9408 (FileNotFoundException_t1680 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::ToString()
extern "C" String_t* FileNotFoundException_ToString_m9409 (FileNotFoundException_t1680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
