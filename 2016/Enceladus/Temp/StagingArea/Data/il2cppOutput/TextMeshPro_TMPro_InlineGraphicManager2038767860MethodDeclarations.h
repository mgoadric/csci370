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

// TMPro.InlineGraphicManager
struct InlineGraphicManager_t2038767860;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// TMPro.InlineGraphic
struct InlineGraphic_t2372877673;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t261436805;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023;
// TMPro.TMP_Sprite
struct TMP_Sprite_t104383505;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_TMP_SpriteAsset2641813093.h"
#include "TextMeshPro_TMPro_InlineGraphic2372877673.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// TMPro.TMP_SpriteAsset TMPro.InlineGraphicManager::get_spriteAsset()
extern "C"  TMP_SpriteAsset_t2641813093 * InlineGraphicManager_get_spriteAsset_m4090137638 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::set_spriteAsset(TMPro.TMP_SpriteAsset)
extern "C"  void InlineGraphicManager_set_spriteAsset_m1846087155 (InlineGraphicManager_t2038767860 * __this, TMP_SpriteAsset_t2641813093 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.InlineGraphic TMPro.InlineGraphicManager::get_inlineGraphic()
extern "C"  InlineGraphic_t2372877673 * InlineGraphicManager_get_inlineGraphic_m2749519144 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::set_inlineGraphic(TMPro.InlineGraphic)
extern "C"  void InlineGraphicManager_set_inlineGraphic_m1858598993 (InlineGraphicManager_t2038767860 * __this, InlineGraphic_t2372877673 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer TMPro.InlineGraphicManager::get_canvasRenderer()
extern "C"  CanvasRenderer_t261436805 * InlineGraphicManager_get_canvasRenderer_m2604078191 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] TMPro.InlineGraphicManager::get_uiVertex()
extern "C"  UIVertexU5BU5D_t3048644023* InlineGraphicManager_get_uiVertex_m914728949 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::Awake()
extern "C"  void InlineGraphicManager_Awake_m511238571 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnEnable()
extern "C"  void InlineGraphicManager_OnEnable_m3661891836 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnDisable()
extern "C"  void InlineGraphicManager_OnDisable_m643555071 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnDestroy()
extern "C"  void InlineGraphicManager_OnDestroy_m2707914465 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::LoadSpriteAsset(TMPro.TMP_SpriteAsset)
extern "C"  void InlineGraphicManager_LoadSpriteAsset_m4144546676 (InlineGraphicManager_t2038767860 * __this, TMP_SpriteAsset_t2641813093 * ___spriteAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::AddInlineGraphicsChild()
extern "C"  void InlineGraphicManager_AddInlineGraphicsChild_m1759818521 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::AllocatedVertexBuffers(System.Int32)
extern "C"  void InlineGraphicManager_AllocatedVertexBuffers_m2430408849 (InlineGraphicManager_t2038767860 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::UpdatePivot(UnityEngine.Vector2)
extern "C"  void InlineGraphicManager_UpdatePivot_m1240813075 (InlineGraphicManager_t2038767860 * __this, Vector2_t2243707579  ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::ClearUIVertex()
extern "C"  void InlineGraphicManager_ClearUIVertex_m1707644619 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::DrawSprite(UnityEngine.UIVertex[],System.Int32)
extern "C"  void InlineGraphicManager_DrawSprite_m938591611 (InlineGraphicManager_t2038767860 * __this, UIVertexU5BU5D_t3048644023* ___uiVertices0, int32_t ___spriteCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_Sprite TMPro.InlineGraphicManager::GetSprite(System.Int32)
extern "C"  TMP_Sprite_t104383505 * InlineGraphicManager_GetSprite_m244899920 (InlineGraphicManager_t2038767860 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.InlineGraphicManager::GetSpriteIndexByHashCode(System.Int32)
extern "C"  int32_t InlineGraphicManager_GetSpriteIndexByHashCode_m967441616 (InlineGraphicManager_t2038767860 * __this, int32_t ___hashCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.InlineGraphicManager::GetSpriteIndexByIndex(System.Int32)
extern "C"  int32_t InlineGraphicManager_GetSpriteIndexByIndex_m1318907733 (InlineGraphicManager_t2038767860 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::SetUIVertex(UnityEngine.UIVertex[])
extern "C"  void InlineGraphicManager_SetUIVertex_m1665529625 (InlineGraphicManager_t2038767860 * __this, UIVertexU5BU5D_t3048644023* ___uiVertex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::.ctor()
extern "C"  void InlineGraphicManager__ctor_m2918674896 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
