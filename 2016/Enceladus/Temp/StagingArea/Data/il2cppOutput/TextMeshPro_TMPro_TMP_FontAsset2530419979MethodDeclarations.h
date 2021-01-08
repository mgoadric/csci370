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
// TMPro.FaceInfo
struct FaceInfo_t3239700425;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Glyph>
struct Dictionary_2_t4212586833;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair>
struct Dictionary_2_t585579557;
// TMPro.KerningTable
struct KerningTable_t2970824110;
// TMPro.TMP_Glyph[]
struct TMP_GlyphU5BU5D_t2828072987;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t2823602470;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_FaceInfo3239700425.h"
#include "TextMeshPro_TMPro_KerningTable2970824110.h"
#include "mscorlib_System_String2029220233.h"
#include "TextMeshPro_TMPro_TMP_FontAsset2530419979.h"

// TMPro.TMP_FontAsset TMPro.TMP_FontAsset::get_defaultFontAsset()
extern "C"  TMP_FontAsset_t2530419979 * TMP_FontAsset_get_defaultFontAsset_m2784102668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.FaceInfo TMPro.TMP_FontAsset::get_fontInfo()
extern "C"  FaceInfo_t3239700425 * TMP_FontAsset_get_fontInfo_m2980687897 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Glyph> TMPro.TMP_FontAsset::get_characterDictionary()
extern "C"  Dictionary_2_t4212586833 * TMP_FontAsset_get_characterDictionary_m655619658 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair> TMPro.TMP_FontAsset::get_kerningDictionary()
extern "C"  Dictionary_2_t585579557 * TMP_FontAsset_get_kerningDictionary_m2729009791 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.KerningTable TMPro.TMP_FontAsset::get_kerningInfo()
extern "C"  KerningTable_t2970824110 * TMP_FontAsset_get_kerningInfo_m1728483587 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::OnEnable()
extern "C"  void TMP_FontAsset_OnEnable_m2479149391 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::OnDisable()
extern "C"  void TMP_FontAsset_OnDisable_m2955446032 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::AddFaceInfo(TMPro.FaceInfo)
extern "C"  void TMP_FontAsset_AddFaceInfo_m409703858 (TMP_FontAsset_t2530419979 * __this, FaceInfo_t3239700425 * ___faceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::AddGlyphInfo(TMPro.TMP_Glyph[])
extern "C"  void TMP_FontAsset_AddGlyphInfo_m461729586 (TMP_FontAsset_t2530419979 * __this, TMP_GlyphU5BU5D_t2828072987* ___glyphInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::AddKerningInfo(TMPro.KerningTable)
extern "C"  void TMP_FontAsset_AddKerningInfo_m2328834146 (TMP_FontAsset_t2530419979 * __this, KerningTable_t2970824110 * ___kerningTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::ReadFontDefinition()
extern "C"  void TMP_FontAsset_ReadFontDefinition_m278189063 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::SortGlyphs()
extern "C"  void TMP_FontAsset_SortGlyphs_m3383067184 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacter(System.Int32)
extern "C"  bool TMP_FontAsset_HasCharacter_m706142349 (TMP_FontAsset_t2530419979 * __this, int32_t ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacter(System.Char)
extern "C"  bool TMP_FontAsset_HasCharacter_m1158357423 (TMP_FontAsset_t2530419979 * __this, Il2CppChar ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacter(System.Char,System.Boolean)
extern "C"  bool TMP_FontAsset_HasCharacter_m2000592176 (TMP_FontAsset_t2530419979 * __this, Il2CppChar ___character0, bool ___searchFallbacks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacters(System.String,System.Collections.Generic.List`1<System.Char>&)
extern "C"  bool TMP_FontAsset_HasCharacters_m3233102670 (TMP_FontAsset_t2530419979 * __this, String_t* ___text0, List_1_t2823602470 ** ___missingCharacters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacters(System.String)
extern "C"  bool TMP_FontAsset_HasCharacters_m2375848253 (TMP_FontAsset_t2530419979 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TMPro.TMP_FontAsset::GetCharacters(TMPro.TMP_FontAsset)
extern "C"  String_t* TMP_FontAsset_GetCharacters_m3412946357 (Il2CppObject * __this /* static, unused */, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] TMPro.TMP_FontAsset::GetCharactersArray(TMPro.TMP_FontAsset)
extern "C"  Int32U5BU5D_t3030399641* TMP_FontAsset_GetCharactersArray_m1841356317 (Il2CppObject * __this /* static, unused */, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::.ctor()
extern "C"  void TMP_FontAsset__ctor_m258704107 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
