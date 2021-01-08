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

// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;
// System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset>
struct List_1_t2010934225;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "TextMeshPro_TMPro_TMP_SpriteAsset2641813093.h"

// TMPro.TMP_SpriteAsset TMPro.TMP_SpriteAsset::get_defaultSpriteAsset()
extern "C"  TMP_SpriteAsset_t2641813093 * TMP_SpriteAsset_get_defaultSpriteAsset_m2933764040 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_SpriteAsset::OnEnable()
extern "C"  void TMP_SpriteAsset_OnEnable_m2974241585 (TMP_SpriteAsset_t2641813093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_SpriteAsset::GetDefaultSpriteMaterial()
extern "C"  Material_t193706927 * TMP_SpriteAsset_GetDefaultSpriteMaterial_m1091766009 (TMP_SpriteAsset_t2641813093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_SpriteAsset::UpdateLookupTables()
extern "C"  void TMP_SpriteAsset_UpdateLookupTables_m3503057291 (TMP_SpriteAsset_t2641813093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_SpriteAsset::GetSpriteIndexFromHashcode(System.Int32)
extern "C"  int32_t TMP_SpriteAsset_GetSpriteIndexFromHashcode_m3656471504 (TMP_SpriteAsset_t2641813093 * __this, int32_t ___hashCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_SpriteAsset::GetSpriteIndexFromUnicode(System.Int32)
extern "C"  int32_t TMP_SpriteAsset_GetSpriteIndexFromUnicode_m328633336 (TMP_SpriteAsset_t2641813093 * __this, int32_t ___unicode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_SpriteAsset::GetSpriteIndexFromName(System.String)
extern "C"  int32_t TMP_SpriteAsset_GetSpriteIndexFromName_m3542801045 (TMP_SpriteAsset_t2641813093 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_SpriteAsset TMPro.TMP_SpriteAsset::SearchFallbackForSprite(TMPro.TMP_SpriteAsset,System.Int32,System.Int32&)
extern "C"  TMP_SpriteAsset_t2641813093 * TMP_SpriteAsset_SearchFallbackForSprite_m831482720 (Il2CppObject * __this /* static, unused */, TMP_SpriteAsset_t2641813093 * ___spriteAsset0, int32_t ___unicode1, int32_t* ___spriteIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_SpriteAsset TMPro.TMP_SpriteAsset::SearchFallbackForSprite(System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset>,System.Int32,System.Int32&)
extern "C"  TMP_SpriteAsset_t2641813093 * TMP_SpriteAsset_SearchFallbackForSprite_m252012506 (Il2CppObject * __this /* static, unused */, List_1_t2010934225 * ___spriteAssets0, int32_t ___unicode1, int32_t* ___spriteIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_SpriteAsset::.ctor()
extern "C"  void TMP_SpriteAsset__ctor_m1658667465 (TMP_SpriteAsset_t2641813093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
