﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Int32>
struct UnityAction_3_t2864862121;

#include "UnityEngine_UnityEngine_Events_BaseInvokableCall2229564840.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>
struct  InvokableCall_3_t1573763807  : public BaseInvokableCall_t2229564840
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t2864862121 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t1573763807, ___Delegate_0)); }
	inline UnityAction_3_t2864862121 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t2864862121 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t2864862121 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___Delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
