﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "TextMeshPro_TMPro_CaretPosition420625986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.CaretInfo
struct  CaretInfo_t598977269 
{
public:
	// System.Int32 TMPro.CaretInfo::index
	int32_t ___index_0;
	// TMPro.CaretPosition TMPro.CaretInfo::position
	int32_t ___position_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(CaretInfo_t598977269, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(CaretInfo_t598977269, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
