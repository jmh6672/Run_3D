#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t20;
// System.Object
struct Object_t;

#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"

// Mono.Security.Protocol.Tls.TlsCipherSuite
struct  TlsCipherSuite_t1269  : public CipherSuite_t1226
{
	// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::header
	ByteU5BU5D_t20* ___header_21;
	// System.Object Mono.Security.Protocol.Tls.TlsCipherSuite::headerLock
	Object_t * ___headerLock_22;
};
