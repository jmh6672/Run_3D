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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1390;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1197;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1391;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1289;
// System.Security.Cryptography.Oid
struct Oid_t1392;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Security.Cryptography.DSA
struct DSA_t1198;
// System.Security.Cryptography.RSA
struct RSA_t1191;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m6694 (PublicKey_t1390 * __this, X509Certificate_t1197 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1391 * PublicKey_get_EncodedKeyValue_m6695 (PublicKey_t1390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1391 * PublicKey_get_EncodedParameters_m6696 (PublicKey_t1390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1289 * PublicKey_get_Key_m6697 (PublicKey_t1390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1392 * PublicKey_get_Oid_m6698 (PublicKey_t1390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t20* PublicKey_GetUnsignedBigInteger_m6699 (Object_t * __this /* static, unused */, ByteU5BU5D_t20* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1198 * PublicKey_DecodeDSA_m6700 (Object_t * __this /* static, unused */, ByteU5BU5D_t20* ___rawPublicKey, ByteU5BU5D_t20* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1191 * PublicKey_DecodeRSA_m6701 (Object_t * __this /* static, unused */, ByteU5BU5D_t20* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
