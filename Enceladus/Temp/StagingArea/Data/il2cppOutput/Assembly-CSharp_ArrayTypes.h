#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// PersonMover
struct PersonMover_t1917396286;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_PersonMover1917396286.h"
#include "AssemblyU2DCSharp_TMPro_Examples_VertexJitter_Vert2147777005.h"

#pragma once
// PersonMover[]
struct PersonMoverU5BU5D_t883955723  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PersonMover_t1917396286 * m_Items[1];

public:
	inline PersonMover_t1917396286 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PersonMover_t1917396286 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PersonMover_t1917396286 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PersonMover_t1917396286 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PersonMover_t1917396286 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PersonMover_t1917396286 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// TMPro.Examples.VertexJitter/VertexAnim[]
struct VertexAnimU5BU5D_t1450067904  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VertexAnim_t2147777005  m_Items[1];

public:
	inline VertexAnim_t2147777005  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAnim_t2147777005 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAnim_t2147777005  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAnim_t2147777005  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAnim_t2147777005 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAnim_t2147777005  value)
	{
		m_Items[index] = value;
	}
};
