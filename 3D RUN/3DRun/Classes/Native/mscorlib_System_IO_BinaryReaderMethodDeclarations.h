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

// System.IO.BinaryReader
struct BinaryReader_t1670;
// System.IO.Stream
struct Stream_t1251;
// System.Text.Encoding
struct Encoding_t1307;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Char[]
struct CharU5BU5D_t735;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" void BinaryReader__ctor_m9356 (BinaryReader_t1670 * __this, Stream_t1251 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryReader__ctor_m9357 (BinaryReader_t1670 * __this, Stream_t1251 * ___input, Encoding_t1307 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C" void BinaryReader_System_IDisposable_Dispose_m9358 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.BinaryReader::get_BaseStream()
extern "C" Stream_t1251 * BinaryReader_get_BaseStream_m9359 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Close()
extern "C" void BinaryReader_Close_m9360 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C" void BinaryReader_Dispose_m9361 (BinaryReader_t1670 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C" void BinaryReader_FillBuffer_m9362 (BinaryReader_t1670 * __this, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C" int32_t BinaryReader_Read_m9363 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m9364 (BinaryReader_t1670 * __this, ByteU5BU5D_t20* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m9365 (BinaryReader_t1670 * __this, CharU5BU5D_t735* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C" int32_t BinaryReader_ReadCharBytes_m9366 (BinaryReader_t1670 * __this, CharU5BU5D_t735* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C" int32_t BinaryReader_Read7BitEncodedInt_m9367 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C" bool BinaryReader_ReadBoolean_m9368 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C" uint8_t BinaryReader_ReadByte_m9369 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32)
extern "C" ByteU5BU5D_t20* BinaryReader_ReadBytes_m9370 (BinaryReader_t1670 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C" uint16_t BinaryReader_ReadChar_m9371 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C" Decimal_t1520  BinaryReader_ReadDecimal_m9372 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C" double BinaryReader_ReadDouble_m9373 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C" int16_t BinaryReader_ReadInt16_m9374 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C" int32_t BinaryReader_ReadInt32_m9375 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C" int64_t BinaryReader_ReadInt64_m9376 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C" int8_t BinaryReader_ReadSByte_m9377 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C" String_t* BinaryReader_ReadString_m9378 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C" float BinaryReader_ReadSingle_m9379 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C" uint16_t BinaryReader_ReadUInt16_m9380 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C" uint32_t BinaryReader_ReadUInt32_m9381 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C" uint64_t BinaryReader_ReadUInt64_m9382 (BinaryReader_t1670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C" void BinaryReader_CheckBuffer_m9383 (BinaryReader_t1670 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;