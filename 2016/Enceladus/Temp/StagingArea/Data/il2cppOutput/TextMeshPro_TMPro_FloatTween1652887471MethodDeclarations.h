#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t3443095683;
// TMPro.FloatTween
struct FloatTween_t1652887471;
struct FloatTween_t1652887471_marshaled_pinvoke;
struct FloatTween_t1652887471_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "TextMeshPro_TMPro_FloatTween1652887471.h"

// System.Single TMPro.FloatTween::get_startValue()
extern "C"  float FloatTween_get_startValue_m3007155899 (FloatTween_t1652887471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.FloatTween::set_startValue(System.Single)
extern "C"  void FloatTween_set_startValue_m1024652698 (FloatTween_t1652887471 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.FloatTween::get_targetValue()
extern "C"  float FloatTween_get_targetValue_m270425354 (FloatTween_t1652887471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.FloatTween::set_targetValue(System.Single)
extern "C"  void FloatTween_set_targetValue_m414659185 (FloatTween_t1652887471 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.FloatTween::get_duration()
extern "C"  float FloatTween_get_duration_m1759904574 (FloatTween_t1652887471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.FloatTween::set_duration(System.Single)
extern "C"  void FloatTween_set_duration_m1070304993 (FloatTween_t1652887471 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.FloatTween::get_ignoreTimeScale()
extern "C"  bool FloatTween_get_ignoreTimeScale_m924274103 (FloatTween_t1652887471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.FloatTween::set_ignoreTimeScale(System.Boolean)
extern "C"  void FloatTween_set_ignoreTimeScale_m1629669716 (FloatTween_t1652887471 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.FloatTween::TweenValue(System.Single)
extern "C"  void FloatTween_TweenValue_m2640815862 (FloatTween_t1652887471 * __this, float ___floatPercentage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.FloatTween::AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single>)
extern "C"  void FloatTween_AddOnChangedCallback_m2133935097 (FloatTween_t1652887471 * __this, UnityAction_1_t3443095683 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.FloatTween::GetIgnoreTimescale()
extern "C"  bool FloatTween_GetIgnoreTimescale_m3880561134 (FloatTween_t1652887471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.FloatTween::GetDuration()
extern "C"  float FloatTween_GetDuration_m776360909 (FloatTween_t1652887471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.FloatTween::ValidTarget()
extern "C"  bool FloatTween_ValidTarget_m1057038250 (FloatTween_t1652887471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct FloatTween_t1652887471;
struct FloatTween_t1652887471_marshaled_pinvoke;

extern "C" void FloatTween_t1652887471_marshal_pinvoke(const FloatTween_t1652887471& unmarshaled, FloatTween_t1652887471_marshaled_pinvoke& marshaled);
extern "C" void FloatTween_t1652887471_marshal_pinvoke_back(const FloatTween_t1652887471_marshaled_pinvoke& marshaled, FloatTween_t1652887471& unmarshaled);
extern "C" void FloatTween_t1652887471_marshal_pinvoke_cleanup(FloatTween_t1652887471_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct FloatTween_t1652887471;
struct FloatTween_t1652887471_marshaled_com;

extern "C" void FloatTween_t1652887471_marshal_com(const FloatTween_t1652887471& unmarshaled, FloatTween_t1652887471_marshaled_com& marshaled);
extern "C" void FloatTween_t1652887471_marshal_com_back(const FloatTween_t1652887471_marshaled_com& marshaled, FloatTween_t1652887471& unmarshaled);
extern "C" void FloatTween_t1652887471_marshal_com_cleanup(FloatTween_t1652887471_marshaled_com& marshaled);
