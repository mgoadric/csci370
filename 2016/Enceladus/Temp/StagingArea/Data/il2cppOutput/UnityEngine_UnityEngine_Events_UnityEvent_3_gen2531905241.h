﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "UnityEngine_UnityEngine_Events_UnityEventBase828812576.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>
struct  UnityEvent_3_t2531905241  : public UnityEventBase_t828812576
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3614634134* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2531905241, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3614634134* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3614634134* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_InvokeArray_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
