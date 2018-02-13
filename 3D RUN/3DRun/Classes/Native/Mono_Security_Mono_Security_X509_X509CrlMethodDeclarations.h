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

// Mono.Security.X509.X509Crl
struct X509Crl_t1205;
// System.Byte[]
struct ByteU5BU5D_t20;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1199;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1204;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1197;
// System.Security.Cryptography.DSA
struct DSA_t1198;
// System.Security.Cryptography.RSA
struct RSA_t1191;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1289;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m5775 (X509Crl_t1205 * __this, ByteU5BU5D_t20* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m5776 (X509Crl_t1205 * __this, ByteU5BU5D_t20* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1199 * X509Crl_get_Extensions_m5777 (X509Crl_t1205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t20* X509Crl_get_Hash_m5778 (X509Crl_t1205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m5779 (X509Crl_t1205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t51  X509Crl_get_NextUpdate_m5780 (X509Crl_t1205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m5781 (X509Crl_t1205 * __this, ByteU5BU5D_t20* ___array1, ByteU5BU5D_t20* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1204 * X509Crl_GetCrlEntry_m5782 (X509Crl_t1205 * __this, X509Certificate_t1197 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1204 * X509Crl_GetCrlEntry_m5783 (X509Crl_t1205 * __this, ByteU5BU5D_t20* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m5784 (X509Crl_t1205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m5785 (X509Crl_t1205 * __this, DSA_t1198 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m5786 (X509Crl_t1205 * __this, RSA_t1191 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m5787 (X509Crl_t1205 * __this, AsymmetricAlgorithm_t1289 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
