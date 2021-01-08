#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct CharacterSelectionEvent_t2887241789;
// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct WordSelectionEvent_t2871480376;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct LinkSelectionEvent_t3735310088;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Canvas
struct Canvas_t209405766;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler
struct  TMP_TextEventHandler_t1517844021  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TMP_TextEventHandler/CharacterSelectionEvent TMPro.TMP_TextEventHandler::m_OnCharacterSelection
	CharacterSelectionEvent_t2887241789 * ___m_OnCharacterSelection_2;
	// TMPro.TMP_TextEventHandler/WordSelectionEvent TMPro.TMP_TextEventHandler::m_OnWordSelection
	WordSelectionEvent_t2871480376 * ___m_OnWordSelection_3;
	// TMPro.TMP_TextEventHandler/LinkSelectionEvent TMPro.TMP_TextEventHandler::m_OnLinkSelection
	LinkSelectionEvent_t3735310088 * ___m_OnLinkSelection_4;
	// TMPro.TMP_Text TMPro.TMP_TextEventHandler::m_TextComponent
	TMP_Text_t1920000777 * ___m_TextComponent_5;
	// UnityEngine.Camera TMPro.TMP_TextEventHandler::m_Camera
	Camera_t189460977 * ___m_Camera_6;
	// UnityEngine.Canvas TMPro.TMP_TextEventHandler::m_Canvas
	Canvas_t209405766 * ___m_Canvas_7;
	// System.Int32 TMPro.TMP_TextEventHandler::m_selectedLink
	int32_t ___m_selectedLink_8;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastCharIndex
	int32_t ___m_lastCharIndex_9;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastWordIndex
	int32_t ___m_lastWordIndex_10;

public:
	inline static int32_t get_offset_of_m_OnCharacterSelection_2() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_OnCharacterSelection_2)); }
	inline CharacterSelectionEvent_t2887241789 * get_m_OnCharacterSelection_2() const { return ___m_OnCharacterSelection_2; }
	inline CharacterSelectionEvent_t2887241789 ** get_address_of_m_OnCharacterSelection_2() { return &___m_OnCharacterSelection_2; }
	inline void set_m_OnCharacterSelection_2(CharacterSelectionEvent_t2887241789 * value)
	{
		___m_OnCharacterSelection_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnCharacterSelection_2, value);
	}

	inline static int32_t get_offset_of_m_OnWordSelection_3() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_OnWordSelection_3)); }
	inline WordSelectionEvent_t2871480376 * get_m_OnWordSelection_3() const { return ___m_OnWordSelection_3; }
	inline WordSelectionEvent_t2871480376 ** get_address_of_m_OnWordSelection_3() { return &___m_OnWordSelection_3; }
	inline void set_m_OnWordSelection_3(WordSelectionEvent_t2871480376 * value)
	{
		___m_OnWordSelection_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnWordSelection_3, value);
	}

	inline static int32_t get_offset_of_m_OnLinkSelection_4() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_OnLinkSelection_4)); }
	inline LinkSelectionEvent_t3735310088 * get_m_OnLinkSelection_4() const { return ___m_OnLinkSelection_4; }
	inline LinkSelectionEvent_t3735310088 ** get_address_of_m_OnLinkSelection_4() { return &___m_OnLinkSelection_4; }
	inline void set_m_OnLinkSelection_4(LinkSelectionEvent_t3735310088 * value)
	{
		___m_OnLinkSelection_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnLinkSelection_4, value);
	}

	inline static int32_t get_offset_of_m_TextComponent_5() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_TextComponent_5)); }
	inline TMP_Text_t1920000777 * get_m_TextComponent_5() const { return ___m_TextComponent_5; }
	inline TMP_Text_t1920000777 ** get_address_of_m_TextComponent_5() { return &___m_TextComponent_5; }
	inline void set_m_TextComponent_5(TMP_Text_t1920000777 * value)
	{
		___m_TextComponent_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_5, value);
	}

	inline static int32_t get_offset_of_m_Camera_6() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_Camera_6)); }
	inline Camera_t189460977 * get_m_Camera_6() const { return ___m_Camera_6; }
	inline Camera_t189460977 ** get_address_of_m_Camera_6() { return &___m_Camera_6; }
	inline void set_m_Camera_6(Camera_t189460977 * value)
	{
		___m_Camera_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_6, value);
	}

	inline static int32_t get_offset_of_m_Canvas_7() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_Canvas_7)); }
	inline Canvas_t209405766 * get_m_Canvas_7() const { return ___m_Canvas_7; }
	inline Canvas_t209405766 ** get_address_of_m_Canvas_7() { return &___m_Canvas_7; }
	inline void set_m_Canvas_7(Canvas_t209405766 * value)
	{
		___m_Canvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_7, value);
	}

	inline static int32_t get_offset_of_m_selectedLink_8() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_selectedLink_8)); }
	inline int32_t get_m_selectedLink_8() const { return ___m_selectedLink_8; }
	inline int32_t* get_address_of_m_selectedLink_8() { return &___m_selectedLink_8; }
	inline void set_m_selectedLink_8(int32_t value)
	{
		___m_selectedLink_8 = value;
	}

	inline static int32_t get_offset_of_m_lastCharIndex_9() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_lastCharIndex_9)); }
	inline int32_t get_m_lastCharIndex_9() const { return ___m_lastCharIndex_9; }
	inline int32_t* get_address_of_m_lastCharIndex_9() { return &___m_lastCharIndex_9; }
	inline void set_m_lastCharIndex_9(int32_t value)
	{
		___m_lastCharIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_lastWordIndex_10() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t1517844021, ___m_lastWordIndex_10)); }
	inline int32_t get_m_lastWordIndex_10() const { return ___m_lastWordIndex_10; }
	inline int32_t* get_address_of_m_lastWordIndex_10() { return &___m_lastWordIndex_10; }
	inline void set_m_lastWordIndex_10(int32_t value)
	{
		___m_lastWordIndex_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
