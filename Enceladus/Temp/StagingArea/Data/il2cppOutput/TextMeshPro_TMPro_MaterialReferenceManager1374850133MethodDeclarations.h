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

// TMPro.MaterialReferenceManager
struct MaterialReferenceManager_t1374850133;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_TMP_FontAsset2530419979.h"
#include "TextMeshPro_TMPro_TMP_SpriteAsset2641813093.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// TMPro.MaterialReferenceManager TMPro.MaterialReferenceManager::get_instance()
extern "C"  MaterialReferenceManager_t1374850133 * MaterialReferenceManager_get_instance_m3947234959 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontAsset(TMPro.TMP_FontAsset)
extern "C"  void MaterialReferenceManager_AddFontAsset_m1163437388 (Il2CppObject * __this /* static, unused */, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontAssetInternal(TMPro.TMP_FontAsset)
extern "C"  void MaterialReferenceManager_AddFontAssetInternal_m1995788303 (MaterialReferenceManager_t1374850133 * __this, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAsset(TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAsset_m3154657708 (Il2CppObject * __this /* static, unused */, TMP_SpriteAsset_t2641813093 * ___spriteAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAssetInternal(TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAssetInternal_m249689103 (MaterialReferenceManager_t1374850133 * __this, TMP_SpriteAsset_t2641813093 * ___spriteAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAsset(System.Int32,TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAsset_m3610402557 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 * ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAssetInternal(System.Int32,TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAssetInternal_m516834684 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 * ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontMaterial(System.Int32,UnityEngine.Material)
extern "C"  void MaterialReferenceManager_AddFontMaterial_m2080836477 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontMaterialInternal(System.Int32,UnityEngine.Material)
extern "C"  void MaterialReferenceManager_AddFontMaterialInternal_m3771166942 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::Contains(TMPro.TMP_FontAsset)
extern "C"  bool MaterialReferenceManager_Contains_m507763353 (MaterialReferenceManager_t1374850133 * __this, TMP_FontAsset_t2530419979 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::Contains(TMPro.TMP_SpriteAsset)
extern "C"  bool MaterialReferenceManager_Contains_m1107047611 (MaterialReferenceManager_t1374850133 * __this, TMP_SpriteAsset_t2641813093 * ___sprite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetFontAsset(System.Int32,TMPro.TMP_FontAsset&)
extern "C"  bool MaterialReferenceManager_TryGetFontAsset_m1983858403 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, TMP_FontAsset_t2530419979 ** ___fontAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetFontAssetInternal(System.Int32,TMPro.TMP_FontAsset&)
extern "C"  bool MaterialReferenceManager_TryGetFontAssetInternal_m1910386836 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, TMP_FontAsset_t2530419979 ** ___fontAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetSpriteAsset(System.Int32,TMPro.TMP_SpriteAsset&)
extern "C"  bool MaterialReferenceManager_TryGetSpriteAsset_m3197813835 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 ** ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetSpriteAssetInternal(System.Int32,TMPro.TMP_SpriteAsset&)
extern "C"  bool MaterialReferenceManager_TryGetSpriteAssetInternal_m3287915256 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 ** ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetMaterial(System.Int32,UnityEngine.Material&)
extern "C"  bool MaterialReferenceManager_TryGetMaterial_m1620801658 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, Material_t193706927 ** ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetMaterialInternal(System.Int32,UnityEngine.Material&)
extern "C"  bool MaterialReferenceManager_TryGetMaterialInternal_m701219455 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, Material_t193706927 ** ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::.ctor()
extern "C"  void MaterialReferenceManager__ctor_m948668133 (MaterialReferenceManager_t1374850133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
