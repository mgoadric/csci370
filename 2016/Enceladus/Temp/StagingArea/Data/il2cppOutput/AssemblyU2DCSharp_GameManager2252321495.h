#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GameManager::intro
	bool ___intro_2;
	// UnityEngine.GameObject GameManager::goal
	GameObject_t1756533147 * ___goal_3;
	// UnityEngine.GameObject GameManager::level
	GameObject_t1756533147 * ___level_4;
	// UnityEngine.GameObject GameManager::moves
	GameObject_t1756533147 * ___moves_5;
	// UnityEngine.GameObject GameManager::marquee
	GameObject_t1756533147 * ___marquee_6;

public:
	inline static int32_t get_offset_of_intro_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___intro_2)); }
	inline bool get_intro_2() const { return ___intro_2; }
	inline bool* get_address_of_intro_2() { return &___intro_2; }
	inline void set_intro_2(bool value)
	{
		___intro_2 = value;
	}

	inline static int32_t get_offset_of_goal_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___goal_3)); }
	inline GameObject_t1756533147 * get_goal_3() const { return ___goal_3; }
	inline GameObject_t1756533147 ** get_address_of_goal_3() { return &___goal_3; }
	inline void set_goal_3(GameObject_t1756533147 * value)
	{
		___goal_3 = value;
		Il2CppCodeGenWriteBarrier(&___goal_3, value);
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___level_4)); }
	inline GameObject_t1756533147 * get_level_4() const { return ___level_4; }
	inline GameObject_t1756533147 ** get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(GameObject_t1756533147 * value)
	{
		___level_4 = value;
		Il2CppCodeGenWriteBarrier(&___level_4, value);
	}

	inline static int32_t get_offset_of_moves_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___moves_5)); }
	inline GameObject_t1756533147 * get_moves_5() const { return ___moves_5; }
	inline GameObject_t1756533147 ** get_address_of_moves_5() { return &___moves_5; }
	inline void set_moves_5(GameObject_t1756533147 * value)
	{
		___moves_5 = value;
		Il2CppCodeGenWriteBarrier(&___moves_5, value);
	}

	inline static int32_t get_offset_of_marquee_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___marquee_6)); }
	inline GameObject_t1756533147 * get_marquee_6() const { return ___marquee_6; }
	inline GameObject_t1756533147 ** get_address_of_marquee_6() { return &___marquee_6; }
	inline void set_marquee_6(GameObject_t1756533147 * value)
	{
		___marquee_6 = value;
		Il2CppCodeGenWriteBarrier(&___marquee_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
