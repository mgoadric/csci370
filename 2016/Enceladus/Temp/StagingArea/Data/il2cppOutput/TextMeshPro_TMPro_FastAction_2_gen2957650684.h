﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.Action`2<System.Boolean,TMPro.TextMeshProUGUI>>
struct LinkedList_1_t1074868151;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Boolean,TMPro.TextMeshProUGUI>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,TMPro.TextMeshProUGUI>>>
struct Dictionary_2_t1292740860;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`2<System.Boolean,TMPro.TextMeshProUGUI>
struct  FastAction_2_t2957650684  : public Il2CppObject
{
public:
	// System.Collections.Generic.LinkedList`1<System.Action`2<A,B>> TMPro.FastAction`2::delegates
	LinkedList_1_t1074868151 * ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`2<A,B>,System.Collections.Generic.LinkedListNode`1<System.Action`2<A,B>>> TMPro.FastAction`2::lookup
	Dictionary_2_t1292740860 * ___lookup_1;

public:
	inline static int32_t get_offset_of_delegates_0() { return static_cast<int32_t>(offsetof(FastAction_2_t2957650684, ___delegates_0)); }
	inline LinkedList_1_t1074868151 * get_delegates_0() const { return ___delegates_0; }
	inline LinkedList_1_t1074868151 ** get_address_of_delegates_0() { return &___delegates_0; }
	inline void set_delegates_0(LinkedList_1_t1074868151 * value)
	{
		___delegates_0 = value;
		Il2CppCodeGenWriteBarrier(&___delegates_0, value);
	}

	inline static int32_t get_offset_of_lookup_1() { return static_cast<int32_t>(offsetof(FastAction_2_t2957650684, ___lookup_1)); }
	inline Dictionary_2_t1292740860 * get_lookup_1() const { return ___lookup_1; }
	inline Dictionary_2_t1292740860 ** get_address_of_lookup_1() { return &___lookup_1; }
	inline void set_lookup_1(Dictionary_2_t1292740860 * value)
	{
		___lookup_1 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
