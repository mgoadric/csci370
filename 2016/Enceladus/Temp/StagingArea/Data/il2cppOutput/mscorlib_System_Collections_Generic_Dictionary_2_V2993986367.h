﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Action`2<System.Boolean,System.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,System.Object>>>
struct Dictionary_2_t4290926524;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,System.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,System.Object>>>
struct  ValueCollection_t2993986367  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t4290926524 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2993986367, ___dictionary_0)); }
	inline Dictionary_2_t4290926524 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4290926524 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4290926524 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
