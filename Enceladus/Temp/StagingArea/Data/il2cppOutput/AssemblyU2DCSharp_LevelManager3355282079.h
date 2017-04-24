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
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<PersonMover>
struct List_1_t1286517418;
// PersonMover
struct PersonMover_t1917396286;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t3057952155;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;
// LevelManager
struct LevelManager_t3355282079;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t3355282079  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject LevelManager::floor
	GameObject_t1756533147 * ___floor_2;
	// UnityEngine.GameObject LevelManager::person
	GameObject_t1756533147 * ___person_3;
	// System.Single LevelManager::close
	float ___close_4;
	// System.String[] LevelManager::allLevels
	StringU5BU5D_t1642385972* ___allLevels_5;
	// UnityEngine.AudioClip LevelManager::correct
	AudioClip_t1932558630 * ___correct_6;
	// UnityEngine.AudioClip LevelManager::cycle
	AudioClip_t1932558630 * ___cycle_7;
	// UnityEngine.AudioClip LevelManager::bump
	AudioClip_t1932558630 * ___bump_8;
	// System.Collections.Generic.List`1<PersonMover> LevelManager::people
	List_1_t1286517418 * ___people_9;
	// PersonMover LevelManager::activePlayer
	PersonMover_t1917396286 * ___activePlayer_10;
	// UnityEngine.GameObject[0...,0...] LevelManager::board
	GameObjectU5BU2CU5D_t3057952155* ___board_11;
	// System.Collections.Generic.List`1<UnityEngine.Color> LevelManager::colors
	List_1_t1389513207 * ___colors_12;
	// System.Int32 LevelManager::numPerson
	int32_t ___numPerson_13;
	// System.Int32 LevelManager::xsize
	int32_t ___xsize_14;
	// System.Int32 LevelManager::ysize
	int32_t ___ysize_15;
	// System.Int32 LevelManager::time
	int32_t ___time_16;
	// System.Int32 LevelManager::count
	int32_t ___count_17;
	// System.Int32 LevelManager::level
	int32_t ___level_18;
	// System.Boolean LevelManager::complete
	bool ___complete_19;
	// System.Boolean LevelManager::alldone
	bool ___alldone_20;

public:
	inline static int32_t get_offset_of_floor_2() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___floor_2)); }
	inline GameObject_t1756533147 * get_floor_2() const { return ___floor_2; }
	inline GameObject_t1756533147 ** get_address_of_floor_2() { return &___floor_2; }
	inline void set_floor_2(GameObject_t1756533147 * value)
	{
		___floor_2 = value;
		Il2CppCodeGenWriteBarrier(&___floor_2, value);
	}

	inline static int32_t get_offset_of_person_3() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___person_3)); }
	inline GameObject_t1756533147 * get_person_3() const { return ___person_3; }
	inline GameObject_t1756533147 ** get_address_of_person_3() { return &___person_3; }
	inline void set_person_3(GameObject_t1756533147 * value)
	{
		___person_3 = value;
		Il2CppCodeGenWriteBarrier(&___person_3, value);
	}

	inline static int32_t get_offset_of_close_4() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___close_4)); }
	inline float get_close_4() const { return ___close_4; }
	inline float* get_address_of_close_4() { return &___close_4; }
	inline void set_close_4(float value)
	{
		___close_4 = value;
	}

	inline static int32_t get_offset_of_allLevels_5() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___allLevels_5)); }
	inline StringU5BU5D_t1642385972* get_allLevels_5() const { return ___allLevels_5; }
	inline StringU5BU5D_t1642385972** get_address_of_allLevels_5() { return &___allLevels_5; }
	inline void set_allLevels_5(StringU5BU5D_t1642385972* value)
	{
		___allLevels_5 = value;
		Il2CppCodeGenWriteBarrier(&___allLevels_5, value);
	}

	inline static int32_t get_offset_of_correct_6() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___correct_6)); }
	inline AudioClip_t1932558630 * get_correct_6() const { return ___correct_6; }
	inline AudioClip_t1932558630 ** get_address_of_correct_6() { return &___correct_6; }
	inline void set_correct_6(AudioClip_t1932558630 * value)
	{
		___correct_6 = value;
		Il2CppCodeGenWriteBarrier(&___correct_6, value);
	}

	inline static int32_t get_offset_of_cycle_7() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___cycle_7)); }
	inline AudioClip_t1932558630 * get_cycle_7() const { return ___cycle_7; }
	inline AudioClip_t1932558630 ** get_address_of_cycle_7() { return &___cycle_7; }
	inline void set_cycle_7(AudioClip_t1932558630 * value)
	{
		___cycle_7 = value;
		Il2CppCodeGenWriteBarrier(&___cycle_7, value);
	}

	inline static int32_t get_offset_of_bump_8() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___bump_8)); }
	inline AudioClip_t1932558630 * get_bump_8() const { return ___bump_8; }
	inline AudioClip_t1932558630 ** get_address_of_bump_8() { return &___bump_8; }
	inline void set_bump_8(AudioClip_t1932558630 * value)
	{
		___bump_8 = value;
		Il2CppCodeGenWriteBarrier(&___bump_8, value);
	}

	inline static int32_t get_offset_of_people_9() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___people_9)); }
	inline List_1_t1286517418 * get_people_9() const { return ___people_9; }
	inline List_1_t1286517418 ** get_address_of_people_9() { return &___people_9; }
	inline void set_people_9(List_1_t1286517418 * value)
	{
		___people_9 = value;
		Il2CppCodeGenWriteBarrier(&___people_9, value);
	}

	inline static int32_t get_offset_of_activePlayer_10() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___activePlayer_10)); }
	inline PersonMover_t1917396286 * get_activePlayer_10() const { return ___activePlayer_10; }
	inline PersonMover_t1917396286 ** get_address_of_activePlayer_10() { return &___activePlayer_10; }
	inline void set_activePlayer_10(PersonMover_t1917396286 * value)
	{
		___activePlayer_10 = value;
		Il2CppCodeGenWriteBarrier(&___activePlayer_10, value);
	}

	inline static int32_t get_offset_of_board_11() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___board_11)); }
	inline GameObjectU5BU2CU5D_t3057952155* get_board_11() const { return ___board_11; }
	inline GameObjectU5BU2CU5D_t3057952155** get_address_of_board_11() { return &___board_11; }
	inline void set_board_11(GameObjectU5BU2CU5D_t3057952155* value)
	{
		___board_11 = value;
		Il2CppCodeGenWriteBarrier(&___board_11, value);
	}

	inline static int32_t get_offset_of_colors_12() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___colors_12)); }
	inline List_1_t1389513207 * get_colors_12() const { return ___colors_12; }
	inline List_1_t1389513207 ** get_address_of_colors_12() { return &___colors_12; }
	inline void set_colors_12(List_1_t1389513207 * value)
	{
		___colors_12 = value;
		Il2CppCodeGenWriteBarrier(&___colors_12, value);
	}

	inline static int32_t get_offset_of_numPerson_13() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___numPerson_13)); }
	inline int32_t get_numPerson_13() const { return ___numPerson_13; }
	inline int32_t* get_address_of_numPerson_13() { return &___numPerson_13; }
	inline void set_numPerson_13(int32_t value)
	{
		___numPerson_13 = value;
	}

	inline static int32_t get_offset_of_xsize_14() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___xsize_14)); }
	inline int32_t get_xsize_14() const { return ___xsize_14; }
	inline int32_t* get_address_of_xsize_14() { return &___xsize_14; }
	inline void set_xsize_14(int32_t value)
	{
		___xsize_14 = value;
	}

	inline static int32_t get_offset_of_ysize_15() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___ysize_15)); }
	inline int32_t get_ysize_15() const { return ___ysize_15; }
	inline int32_t* get_address_of_ysize_15() { return &___ysize_15; }
	inline void set_ysize_15(int32_t value)
	{
		___ysize_15 = value;
	}

	inline static int32_t get_offset_of_time_16() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___time_16)); }
	inline int32_t get_time_16() const { return ___time_16; }
	inline int32_t* get_address_of_time_16() { return &___time_16; }
	inline void set_time_16(int32_t value)
	{
		___time_16 = value;
	}

	inline static int32_t get_offset_of_count_17() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___count_17)); }
	inline int32_t get_count_17() const { return ___count_17; }
	inline int32_t* get_address_of_count_17() { return &___count_17; }
	inline void set_count_17(int32_t value)
	{
		___count_17 = value;
	}

	inline static int32_t get_offset_of_level_18() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___level_18)); }
	inline int32_t get_level_18() const { return ___level_18; }
	inline int32_t* get_address_of_level_18() { return &___level_18; }
	inline void set_level_18(int32_t value)
	{
		___level_18 = value;
	}

	inline static int32_t get_offset_of_complete_19() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___complete_19)); }
	inline bool get_complete_19() const { return ___complete_19; }
	inline bool* get_address_of_complete_19() { return &___complete_19; }
	inline void set_complete_19(bool value)
	{
		___complete_19 = value;
	}

	inline static int32_t get_offset_of_alldone_20() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___alldone_20)); }
	inline bool get_alldone_20() const { return ___alldone_20; }
	inline bool* get_address_of_alldone_20() { return &___alldone_20; }
	inline void set_alldone_20(bool value)
	{
		___alldone_20 = value;
	}
};

struct LevelManager_t3355282079_StaticFields
{
public:
	// LevelManager LevelManager::S
	LevelManager_t3355282079 * ___S_21;

public:
	inline static int32_t get_offset_of_S_21() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079_StaticFields, ___S_21)); }
	inline LevelManager_t3355282079 * get_S_21() const { return ___S_21; }
	inline LevelManager_t3355282079 ** get_address_of_S_21() { return &___S_21; }
	inline void set_S_21(LevelManager_t3355282079 * value)
	{
		___S_21 = value;
		Il2CppCodeGenWriteBarrier(&___S_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
