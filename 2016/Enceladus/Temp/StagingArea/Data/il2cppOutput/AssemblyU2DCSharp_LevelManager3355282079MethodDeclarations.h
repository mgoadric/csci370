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

// LevelManager
struct LevelManager_t3355282079;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Awake()
extern "C"  void LevelManager_Awake_m3116043147 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LevelManager::ValidSpace(UnityEngine.Vector2)
extern "C"  bool LevelManager_ValidSpace_m3531184680 (LevelManager_t3355282079 * __this, Vector2_t2243707579  ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream LevelManager::GenerateStreamFromString(System.String)
extern "C"  MemoryStream_t743994179 * LevelManager_GenerateStreamFromString_m1536814553 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevel(System.Int32)
extern "C"  void LevelManager_LoadLevel_m3683755483 (LevelManager_t3355282079 * __this, int32_t ___lev0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::ClearLevel()
extern "C"  void LevelManager_ClearLevel_m527202565 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::EndGameScreen()
extern "C"  void LevelManager_EndGameScreen_m1310847087 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Update()
extern "C"  void LevelManager_Update_m2027449311 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::CountUp()
extern "C"  void LevelManager_CountUp_m2552351506 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::CycleLevel()
extern "C"  void LevelManager_CycleLevel_m3749296510 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
