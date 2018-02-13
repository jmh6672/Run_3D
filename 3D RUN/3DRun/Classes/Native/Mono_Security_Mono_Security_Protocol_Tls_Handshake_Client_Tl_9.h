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

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct  TlsServerKeyExchange_t1287  : public HandshakeMessage_t1253
{
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::rsaParams
	RSAParameters_t1273  ___rsaParams_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::signedParams
	ByteU5BU5D_t20* ___signedParams_10;
};
