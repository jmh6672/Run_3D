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

// System.DBNull
struct DBNull_t2087;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// System.IFormatProvider
struct IFormatProvider_t2176;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.DBNull::.ctor()
extern "C" void DBNull__ctor_m11986 (DBNull_t2087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DBNull__ctor_m11987 (DBNull_t2087 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::.cctor()
extern "C" void DBNull__cctor_m11988 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DBNull::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool DBNull_System_IConvertible_ToBoolean_m11989 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DBNull::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t DBNull_System_IConvertible_ToByte_m11990 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DBNull::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t DBNull_System_IConvertible_ToChar_m11991 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DBNull::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t51  DBNull_System_IConvertible_ToDateTime_m11992 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DBNull::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1520  DBNull_System_IConvertible_ToDecimal_m11993 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DBNull::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double DBNull_System_IConvertible_ToDouble_m11994 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DBNull::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t DBNull_System_IConvertible_ToInt16_m11995 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DBNull::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t DBNull_System_IConvertible_ToInt32_m11996 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DBNull::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t DBNull_System_IConvertible_ToInt64_m11997 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DBNull::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t DBNull_System_IConvertible_ToSByte_m11998 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DBNull::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float DBNull_System_IConvertible_ToSingle_m11999 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DBNull::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * DBNull_System_IConvertible_ToType_m12000 (DBNull_t2087 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DBNull::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t DBNull_System_IConvertible_ToUInt16_m12001 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DBNull::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t DBNull_System_IConvertible_ToUInt32_m12002 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DBNull::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t DBNull_System_IConvertible_ToUInt64_m12003 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DBNull_GetObjectData_m12004 (DBNull_t2087 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DBNull::ToString()
extern "C" String_t* DBNull_ToString_m12005 (DBNull_t2087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DBNull::ToString(System.IFormatProvider)
extern "C" String_t* DBNull_ToString_m12006 (DBNull_t2087 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;