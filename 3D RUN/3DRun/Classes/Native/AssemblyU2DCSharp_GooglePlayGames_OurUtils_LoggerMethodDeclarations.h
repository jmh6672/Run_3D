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

// GooglePlayGames.OurUtils.Logger
struct Logger_t61;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
extern "C" void Logger__ctor_m258 (Logger_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
extern "C" void Logger__cctor_m259 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
extern "C" bool Logger_get_DebugLogEnabled_m260 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
extern "C" void Logger_set_DebugLogEnabled_m261 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
extern "C" bool Logger_get_WarningLogEnabled_m262 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
extern "C" void Logger_set_WarningLogEnabled_m263 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
extern "C" void Logger_d_m264 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
extern "C" void Logger_w_m265 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
extern "C" void Logger_e_m266 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
extern "C" String_t* Logger_describe_m267 (Object_t * __this /* static, unused */, ByteU5BU5D_t20* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
extern "C" String_t* Logger_ToLogMessage_m268 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___logType, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
