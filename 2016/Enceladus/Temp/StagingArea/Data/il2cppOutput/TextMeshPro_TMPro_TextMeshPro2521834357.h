#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t4206981150;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "TextMeshPro_TMPro_TMP_Text1920000777.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "TextMeshPro_TMPro_MaskingTypes259687445.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshPro
struct  TextMeshPro_t2521834357  : public TMP_Text_t1920000777
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_230;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_231;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t257310565 * ___m_renderer_232;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t3026937449 * ___m_meshFilter_233;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_234;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_235;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_236;
	// UnityEngine.Bounds TMPro.TextMeshPro::m_default_bounds
	Bounds_t3033363703  ___m_default_bounds_237;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t4206981150* ___m_subTextObjects_238;
	// System.Boolean TMPro.TextMeshPro::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_239;
	// System.Boolean TMPro.TextMeshPro::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_240;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_241;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_t2933234003  ___m_EnvMapMatrix_242;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t1172311765* ___m_RectTransformCorners_243;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_244;
	// System.Int32 TMPro.TextMeshPro::loopCountA
	int32_t ___loopCountA_245;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_246;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_230() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_hasFontAssetChanged_230)); }
	inline bool get_m_hasFontAssetChanged_230() const { return ___m_hasFontAssetChanged_230; }
	inline bool* get_address_of_m_hasFontAssetChanged_230() { return &___m_hasFontAssetChanged_230; }
	inline void set_m_hasFontAssetChanged_230(bool value)
	{
		___m_hasFontAssetChanged_230 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_231() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_previousLossyScaleY_231)); }
	inline float get_m_previousLossyScaleY_231() const { return ___m_previousLossyScaleY_231; }
	inline float* get_address_of_m_previousLossyScaleY_231() { return &___m_previousLossyScaleY_231; }
	inline void set_m_previousLossyScaleY_231(float value)
	{
		___m_previousLossyScaleY_231 = value;
	}

	inline static int32_t get_offset_of_m_renderer_232() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_renderer_232)); }
	inline Renderer_t257310565 * get_m_renderer_232() const { return ___m_renderer_232; }
	inline Renderer_t257310565 ** get_address_of_m_renderer_232() { return &___m_renderer_232; }
	inline void set_m_renderer_232(Renderer_t257310565 * value)
	{
		___m_renderer_232 = value;
		Il2CppCodeGenWriteBarrier(&___m_renderer_232, value);
	}

	inline static int32_t get_offset_of_m_meshFilter_233() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_meshFilter_233)); }
	inline MeshFilter_t3026937449 * get_m_meshFilter_233() const { return ___m_meshFilter_233; }
	inline MeshFilter_t3026937449 ** get_address_of_m_meshFilter_233() { return &___m_meshFilter_233; }
	inline void set_m_meshFilter_233(MeshFilter_t3026937449 * value)
	{
		___m_meshFilter_233 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshFilter_233, value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_234() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_isFirstAllocation_234)); }
	inline bool get_m_isFirstAllocation_234() const { return ___m_isFirstAllocation_234; }
	inline bool* get_address_of_m_isFirstAllocation_234() { return &___m_isFirstAllocation_234; }
	inline void set_m_isFirstAllocation_234(bool value)
	{
		___m_isFirstAllocation_234 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_235() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_max_characters_235)); }
	inline int32_t get_m_max_characters_235() const { return ___m_max_characters_235; }
	inline int32_t* get_address_of_m_max_characters_235() { return &___m_max_characters_235; }
	inline void set_m_max_characters_235(int32_t value)
	{
		___m_max_characters_235 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_236() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_max_numberOfLines_236)); }
	inline int32_t get_m_max_numberOfLines_236() const { return ___m_max_numberOfLines_236; }
	inline int32_t* get_address_of_m_max_numberOfLines_236() { return &___m_max_numberOfLines_236; }
	inline void set_m_max_numberOfLines_236(int32_t value)
	{
		___m_max_numberOfLines_236 = value;
	}

	inline static int32_t get_offset_of_m_default_bounds_237() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_default_bounds_237)); }
	inline Bounds_t3033363703  get_m_default_bounds_237() const { return ___m_default_bounds_237; }
	inline Bounds_t3033363703 * get_address_of_m_default_bounds_237() { return &___m_default_bounds_237; }
	inline void set_m_default_bounds_237(Bounds_t3033363703  value)
	{
		___m_default_bounds_237 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_238() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_subTextObjects_238)); }
	inline TMP_SubMeshU5BU5D_t4206981150* get_m_subTextObjects_238() const { return ___m_subTextObjects_238; }
	inline TMP_SubMeshU5BU5D_t4206981150** get_address_of_m_subTextObjects_238() { return &___m_subTextObjects_238; }
	inline void set_m_subTextObjects_238(TMP_SubMeshU5BU5D_t4206981150* value)
	{
		___m_subTextObjects_238 = value;
		Il2CppCodeGenWriteBarrier(&___m_subTextObjects_238, value);
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_239() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_isMaskingEnabled_239)); }
	inline bool get_m_isMaskingEnabled_239() const { return ___m_isMaskingEnabled_239; }
	inline bool* get_address_of_m_isMaskingEnabled_239() { return &___m_isMaskingEnabled_239; }
	inline void set_m_isMaskingEnabled_239(bool value)
	{
		___m_isMaskingEnabled_239 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_240() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___isMaskUpdateRequired_240)); }
	inline bool get_isMaskUpdateRequired_240() const { return ___isMaskUpdateRequired_240; }
	inline bool* get_address_of_isMaskUpdateRequired_240() { return &___isMaskUpdateRequired_240; }
	inline void set_isMaskUpdateRequired_240(bool value)
	{
		___isMaskUpdateRequired_240 = value;
	}

	inline static int32_t get_offset_of_m_maskType_241() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_maskType_241)); }
	inline int32_t get_m_maskType_241() const { return ___m_maskType_241; }
	inline int32_t* get_address_of_m_maskType_241() { return &___m_maskType_241; }
	inline void set_m_maskType_241(int32_t value)
	{
		___m_maskType_241 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_242() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_EnvMapMatrix_242)); }
	inline Matrix4x4_t2933234003  get_m_EnvMapMatrix_242() const { return ___m_EnvMapMatrix_242; }
	inline Matrix4x4_t2933234003 * get_address_of_m_EnvMapMatrix_242() { return &___m_EnvMapMatrix_242; }
	inline void set_m_EnvMapMatrix_242(Matrix4x4_t2933234003  value)
	{
		___m_EnvMapMatrix_242 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_243() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_RectTransformCorners_243)); }
	inline Vector3U5BU5D_t1172311765* get_m_RectTransformCorners_243() const { return ___m_RectTransformCorners_243; }
	inline Vector3U5BU5D_t1172311765** get_address_of_m_RectTransformCorners_243() { return &___m_RectTransformCorners_243; }
	inline void set_m_RectTransformCorners_243(Vector3U5BU5D_t1172311765* value)
	{
		___m_RectTransformCorners_243 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransformCorners_243, value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_244() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_isRegisteredForEvents_244)); }
	inline bool get_m_isRegisteredForEvents_244() const { return ___m_isRegisteredForEvents_244; }
	inline bool* get_address_of_m_isRegisteredForEvents_244() { return &___m_isRegisteredForEvents_244; }
	inline void set_m_isRegisteredForEvents_244(bool value)
	{
		___m_isRegisteredForEvents_244 = value;
	}

	inline static int32_t get_offset_of_loopCountA_245() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___loopCountA_245)); }
	inline int32_t get_loopCountA_245() const { return ___loopCountA_245; }
	inline int32_t* get_address_of_loopCountA_245() { return &___loopCountA_245; }
	inline void set_loopCountA_245(int32_t value)
	{
		___loopCountA_245 = value;
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_246() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_currentAutoSizeMode_246)); }
	inline bool get_m_currentAutoSizeMode_246() const { return ___m_currentAutoSizeMode_246; }
	inline bool* get_address_of_m_currentAutoSizeMode_246() { return &___m_currentAutoSizeMode_246; }
	inline void set_m_currentAutoSizeMode_246(bool value)
	{
		___m_currentAutoSizeMode_246 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
