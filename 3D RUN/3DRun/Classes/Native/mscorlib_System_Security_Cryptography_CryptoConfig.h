﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t1236;

#include "mscorlib_System_Object.h"

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t1305  : public Object_t
{
};
struct CryptoConfig_t1305_StaticFields{
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	Object_t * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t1236 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t1236 * ___oid_2;
};
