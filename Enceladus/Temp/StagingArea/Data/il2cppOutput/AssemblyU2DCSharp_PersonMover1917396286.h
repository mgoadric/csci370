#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<PersonMover>
struct List_1_t1286517418;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PersonMover
struct  PersonMover_t1917396286  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PersonMover::active
	bool ___active_2;
	// System.Boolean PersonMover::responsible
	bool ___responsible_3;
	// System.Boolean PersonMover::settled
	bool ___settled_4;
	// System.Boolean PersonMover::moving
	bool ___moving_5;
	// System.Single PersonMover::easing
	float ___easing_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> PersonMover::done
	List_1_t1612828711 * ___done_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> PersonMover::act
	List_1_t1612828711 * ___act_8;
	// System.Collections.Generic.List`1<PersonMover> PersonMover::others
	List_1_t1286517418 * ___others_9;
	// UnityEngine.Color PersonMover::mycolor
	Color_t2020392075  ___mycolor_10;
	// UnityEngine.Vector2 PersonMover::myloc
	Vector2_t2243707579  ___myloc_11;
	// UnityEngine.Vector3 PersonMover::moveloc
	Vector3_t2243707580  ___moveloc_12;
	// UnityEngine.Vector2 PersonMover::firstloc
	Vector2_t2243707579  ___firstloc_13;
	// UnityEngine.Vector2 PersonMover::lastmove
	Vector2_t2243707579  ___lastmove_14;
	// UnityEngine.Vector3 PersonMover::start
	Vector3_t2243707580  ___start_15;

public:
	inline static int32_t get_offset_of_active_2() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___active_2)); }
	inline bool get_active_2() const { return ___active_2; }
	inline bool* get_address_of_active_2() { return &___active_2; }
	inline void set_active_2(bool value)
	{
		___active_2 = value;
	}

	inline static int32_t get_offset_of_responsible_3() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___responsible_3)); }
	inline bool get_responsible_3() const { return ___responsible_3; }
	inline bool* get_address_of_responsible_3() { return &___responsible_3; }
	inline void set_responsible_3(bool value)
	{
		___responsible_3 = value;
	}

	inline static int32_t get_offset_of_settled_4() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___settled_4)); }
	inline bool get_settled_4() const { return ___settled_4; }
	inline bool* get_address_of_settled_4() { return &___settled_4; }
	inline void set_settled_4(bool value)
	{
		___settled_4 = value;
	}

	inline static int32_t get_offset_of_moving_5() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___moving_5)); }
	inline bool get_moving_5() const { return ___moving_5; }
	inline bool* get_address_of_moving_5() { return &___moving_5; }
	inline void set_moving_5(bool value)
	{
		___moving_5 = value;
	}

	inline static int32_t get_offset_of_easing_6() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___easing_6)); }
	inline float get_easing_6() const { return ___easing_6; }
	inline float* get_address_of_easing_6() { return &___easing_6; }
	inline void set_easing_6(float value)
	{
		___easing_6 = value;
	}

	inline static int32_t get_offset_of_done_7() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___done_7)); }
	inline List_1_t1612828711 * get_done_7() const { return ___done_7; }
	inline List_1_t1612828711 ** get_address_of_done_7() { return &___done_7; }
	inline void set_done_7(List_1_t1612828711 * value)
	{
		___done_7 = value;
		Il2CppCodeGenWriteBarrier(&___done_7, value);
	}

	inline static int32_t get_offset_of_act_8() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___act_8)); }
	inline List_1_t1612828711 * get_act_8() const { return ___act_8; }
	inline List_1_t1612828711 ** get_address_of_act_8() { return &___act_8; }
	inline void set_act_8(List_1_t1612828711 * value)
	{
		___act_8 = value;
		Il2CppCodeGenWriteBarrier(&___act_8, value);
	}

	inline static int32_t get_offset_of_others_9() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___others_9)); }
	inline List_1_t1286517418 * get_others_9() const { return ___others_9; }
	inline List_1_t1286517418 ** get_address_of_others_9() { return &___others_9; }
	inline void set_others_9(List_1_t1286517418 * value)
	{
		___others_9 = value;
		Il2CppCodeGenWriteBarrier(&___others_9, value);
	}

	inline static int32_t get_offset_of_mycolor_10() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___mycolor_10)); }
	inline Color_t2020392075  get_mycolor_10() const { return ___mycolor_10; }
	inline Color_t2020392075 * get_address_of_mycolor_10() { return &___mycolor_10; }
	inline void set_mycolor_10(Color_t2020392075  value)
	{
		___mycolor_10 = value;
	}

	inline static int32_t get_offset_of_myloc_11() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___myloc_11)); }
	inline Vector2_t2243707579  get_myloc_11() const { return ___myloc_11; }
	inline Vector2_t2243707579 * get_address_of_myloc_11() { return &___myloc_11; }
	inline void set_myloc_11(Vector2_t2243707579  value)
	{
		___myloc_11 = value;
	}

	inline static int32_t get_offset_of_moveloc_12() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___moveloc_12)); }
	inline Vector3_t2243707580  get_moveloc_12() const { return ___moveloc_12; }
	inline Vector3_t2243707580 * get_address_of_moveloc_12() { return &___moveloc_12; }
	inline void set_moveloc_12(Vector3_t2243707580  value)
	{
		___moveloc_12 = value;
	}

	inline static int32_t get_offset_of_firstloc_13() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___firstloc_13)); }
	inline Vector2_t2243707579  get_firstloc_13() const { return ___firstloc_13; }
	inline Vector2_t2243707579 * get_address_of_firstloc_13() { return &___firstloc_13; }
	inline void set_firstloc_13(Vector2_t2243707579  value)
	{
		___firstloc_13 = value;
	}

	inline static int32_t get_offset_of_lastmove_14() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___lastmove_14)); }
	inline Vector2_t2243707579  get_lastmove_14() const { return ___lastmove_14; }
	inline Vector2_t2243707579 * get_address_of_lastmove_14() { return &___lastmove_14; }
	inline void set_lastmove_14(Vector2_t2243707579  value)
	{
		___lastmove_14 = value;
	}

	inline static int32_t get_offset_of_start_15() { return static_cast<int32_t>(offsetof(PersonMover_t1917396286, ___start_15)); }
	inline Vector3_t2243707580  get_start_15() const { return ___start_15; }
	inline Vector3_t2243707580 * get_address_of_start_15() { return &___start_15; }
	inline void set_start_15(Vector3_t2243707580  value)
	{
		___start_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
