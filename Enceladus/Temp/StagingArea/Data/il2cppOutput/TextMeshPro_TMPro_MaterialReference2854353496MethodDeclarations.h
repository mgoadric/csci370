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
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// UnityEngine.Material
struct Material_t193706927;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t627890505;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// TMPro.MaterialReference
struct MaterialReference_t2854353496;
struct MaterialReference_t2854353496_marshaled_pinvoke;
struct MaterialReference_t2854353496_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_MaterialReference2854353496.h"
#include "TextMeshPro_TMPro_TMP_FontAsset2530419979.h"
#include "TextMeshPro_TMPro_TMP_SpriteAsset2641813093.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void TMPro.MaterialReference::.ctor(System.Int32,TMPro.TMP_FontAsset,TMPro.TMP_SpriteAsset,UnityEngine.Material,System.Single)
extern "C"  void MaterialReference__ctor_m1307537542 (MaterialReference_t2854353496 * __this, int32_t ___index0, TMP_FontAsset_t2530419979 * ___fontAsset1, TMP_SpriteAsset_t2641813093 * ___spriteAsset2, Material_t193706927 * ___material3, float ___padding4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReference::Contains(TMPro.MaterialReference[],TMPro.TMP_FontAsset)
extern "C"  bool MaterialReference_Contains_m775171100 (Il2CppObject * __this /* static, unused */, MaterialReferenceU5BU5D_t627890505* ___materialReferences0, TMP_FontAsset_t2530419979 * ___fontAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.MaterialReference::AddMaterialReference(UnityEngine.Material,TMPro.TMP_FontAsset,TMPro.MaterialReference[],System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
extern "C"  int32_t MaterialReference_AddMaterialReference_m4258689577 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, TMP_FontAsset_t2530419979 * ___fontAsset1, MaterialReferenceU5BU5D_t627890505* ___materialReferences2, Dictionary_2_t1079703083 * ___materialReferenceIndexLookup3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.MaterialReference::AddMaterialReference(UnityEngine.Material,TMPro.TMP_SpriteAsset,TMPro.MaterialReference[],System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
extern "C"  int32_t MaterialReference_AddMaterialReference_m1423140423 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, TMP_SpriteAsset_t2641813093 * ___spriteAsset1, MaterialReferenceU5BU5D_t627890505* ___materialReferences2, Dictionary_2_t1079703083 * ___materialReferenceIndexLookup3, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MaterialReference_t2854353496;
struct MaterialReference_t2854353496_marshaled_pinvoke;

extern "C" void MaterialReference_t2854353496_marshal_pinvoke(const MaterialReference_t2854353496& unmarshaled, MaterialReference_t2854353496_marshaled_pinvoke& marshaled);
extern "C" void MaterialReference_t2854353496_marshal_pinvoke_back(const MaterialReference_t2854353496_marshaled_pinvoke& marshaled, MaterialReference_t2854353496& unmarshaled);
extern "C" void MaterialReference_t2854353496_marshal_pinvoke_cleanup(MaterialReference_t2854353496_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MaterialReference_t2854353496;
struct MaterialReference_t2854353496_marshaled_com;

extern "C" void MaterialReference_t2854353496_marshal_com(const MaterialReference_t2854353496& unmarshaled, MaterialReference_t2854353496_marshaled_com& marshaled);
extern "C" void MaterialReference_t2854353496_marshal_com_back(const MaterialReference_t2854353496_marshaled_com& marshaled, MaterialReference_t2854353496& unmarshaled);
extern "C" void MaterialReference_t2854353496_marshal_com_cleanup(MaterialReference_t2854353496_marshaled_com& marshaled);
