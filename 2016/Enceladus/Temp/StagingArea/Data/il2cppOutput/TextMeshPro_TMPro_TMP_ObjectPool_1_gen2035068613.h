﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UI.Mask>>
struct Stack_1_t3434807524;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UI.Mask>>
struct UnityAction_1_t3713665121;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UI.Mask>>
struct  TMP_ObjectPool_1_t2035068613  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<T> TMPro.TMP_ObjectPool`1::m_Stack
	Stack_1_t3434807524 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> TMPro.TMP_ObjectPool`1::m_ActionOnGet
	UnityAction_1_t3713665121 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> TMPro.TMP_ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t3713665121 * ___m_ActionOnRelease_2;
	// System.Int32 TMPro.TMP_ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(TMP_ObjectPool_1_t2035068613, ___m_Stack_0)); }
	inline Stack_1_t3434807524 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3434807524 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3434807524 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Stack_0, value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(TMP_ObjectPool_1_t2035068613, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t3713665121 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t3713665121 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t3713665121 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ActionOnGet_1, value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(TMP_ObjectPool_1_t2035068613, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t3713665121 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t3713665121 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t3713665121 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ActionOnRelease_2, value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TMP_ObjectPool_1_t2035068613, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
