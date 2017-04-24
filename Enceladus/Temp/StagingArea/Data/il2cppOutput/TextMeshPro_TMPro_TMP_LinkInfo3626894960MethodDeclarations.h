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

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// TMPro.TMP_LinkInfo
struct TMP_LinkInfo_t3626894960;
struct TMP_LinkInfo_t3626894960_marshaled_pinvoke;
struct TMP_LinkInfo_t3626894960_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_TMP_LinkInfo3626894960.h"

// System.Void TMPro.TMP_LinkInfo::SetLinkID(System.Char[],System.Int32,System.Int32)
extern "C"  void TMP_LinkInfo_SetLinkID_m1361767664 (TMP_LinkInfo_t3626894960 * __this, CharU5BU5D_t1328083999* ___text0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TMPro.TMP_LinkInfo::GetLinkText()
extern "C"  String_t* TMP_LinkInfo_GetLinkText_m251098912 (TMP_LinkInfo_t3626894960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TMPro.TMP_LinkInfo::GetLinkID()
extern "C"  String_t* TMP_LinkInfo_GetLinkID_m1715767854 (TMP_LinkInfo_t3626894960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TMP_LinkInfo_t3626894960;
struct TMP_LinkInfo_t3626894960_marshaled_pinvoke;

extern "C" void TMP_LinkInfo_t3626894960_marshal_pinvoke(const TMP_LinkInfo_t3626894960& unmarshaled, TMP_LinkInfo_t3626894960_marshaled_pinvoke& marshaled);
extern "C" void TMP_LinkInfo_t3626894960_marshal_pinvoke_back(const TMP_LinkInfo_t3626894960_marshaled_pinvoke& marshaled, TMP_LinkInfo_t3626894960& unmarshaled);
extern "C" void TMP_LinkInfo_t3626894960_marshal_pinvoke_cleanup(TMP_LinkInfo_t3626894960_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TMP_LinkInfo_t3626894960;
struct TMP_LinkInfo_t3626894960_marshaled_com;

extern "C" void TMP_LinkInfo_t3626894960_marshal_com(const TMP_LinkInfo_t3626894960& unmarshaled, TMP_LinkInfo_t3626894960_marshaled_com& marshaled);
extern "C" void TMP_LinkInfo_t3626894960_marshal_com_back(const TMP_LinkInfo_t3626894960_marshaled_com& marshaled, TMP_LinkInfo_t3626894960& unmarshaled);
extern "C" void TMP_LinkInfo_t3626894960_marshal_com_cleanup(TMP_LinkInfo_t3626894960_marshaled_com& marshaled);
