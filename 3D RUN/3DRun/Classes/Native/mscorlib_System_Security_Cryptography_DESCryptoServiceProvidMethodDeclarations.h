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

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1973;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1153;
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m10971 (DESCryptoServiceProvider_t1973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m10972 (DESCryptoServiceProvider_t1973 * __this, ByteU5BU5D_t20* ___rgbKey, ByteU5BU5D_t20* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m10973 (DESCryptoServiceProvider_t1973 * __this, ByteU5BU5D_t20* ___rgbKey, ByteU5BU5D_t20* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m10974 (DESCryptoServiceProvider_t1973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m10975 (DESCryptoServiceProvider_t1973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
