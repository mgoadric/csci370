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

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.TMP_Glyph
struct TMP_Glyph_t909793902;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t1899541111;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_TMP_FontAsset2530419979.h"
#include "TextMeshPro_TMPro_TMP_Glyph909793902.h"

// TMPro.TMP_FontAsset TMPro.TMP_FontUtilities::SearchForGlyph(TMPro.TMP_FontAsset,System.Int32,TMPro.TMP_Glyph&)
extern "C"  TMP_FontAsset_t2530419979 * TMP_FontUtilities_SearchForGlyph_m1032375666 (Il2CppObject * __this /* static, unused */, TMP_FontAsset_t2530419979 * ___font0, int32_t ___character1, TMP_Glyph_t909793902 ** ___glyph2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_FontAsset TMPro.TMP_FontUtilities::SearchForGlyph(System.Collections.Generic.List`1<TMPro.TMP_FontAsset>,System.Int32,TMPro.TMP_Glyph&)
extern "C"  TMP_FontAsset_t2530419979 * TMP_FontUtilities_SearchForGlyph_m3311715414 (Il2CppObject * __this /* static, unused */, List_1_t1899541111 * ___fonts0, int32_t ___character1, TMP_Glyph_t909793902 ** ___glyph2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
