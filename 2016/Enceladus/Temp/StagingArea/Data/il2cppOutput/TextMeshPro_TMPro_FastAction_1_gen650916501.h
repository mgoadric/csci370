﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.Action`1<TMPro.TMP_ColorGradient>>
struct LinkedList_1_t1266344958;
// System.Collections.Generic.Dictionary`2<System.Action`1<TMPro.TMP_ColorGradient>,System.Collections.Generic.LinkedListNode`1<System.Action`1<TMPro.TMP_ColorGradient>>>
struct Dictionary_2_t3511649280;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`1<TMPro.TMP_ColorGradient>
struct  FastAction_1_t650916501  : public Il2CppObject
{
public:
	// System.Collections.Generic.LinkedList`1<System.Action`1<A>> TMPro.FastAction`1::delegates
	LinkedList_1_t1266344958 * ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> TMPro.FastAction`1::lookup
	Dictionary_2_t3511649280 * ___lookup_1;

public:
	inline static int32_t get_offset_of_delegates_0() { return static_cast<int32_t>(offsetof(FastAction_1_t650916501, ___delegates_0)); }
	inline LinkedList_1_t1266344958 * get_delegates_0() const { return ___delegates_0; }
	inline LinkedList_1_t1266344958 ** get_address_of_delegates_0() { return &___delegates_0; }
	inline void set_delegates_0(LinkedList_1_t1266344958 * value)
	{
		___delegates_0 = value;
		Il2CppCodeGenWriteBarrier(&___delegates_0, value);
	}

	inline static int32_t get_offset_of_lookup_1() { return static_cast<int32_t>(offsetof(FastAction_1_t650916501, ___lookup_1)); }
	inline Dictionary_2_t3511649280 * get_lookup_1() const { return ___lookup_1; }
	inline Dictionary_2_t3511649280 ** get_address_of_lookup_1() { return &___lookup_1; }
	inline void set_lookup_1(Dictionary_2_t3511649280 * value)
	{
		___lookup_1 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
