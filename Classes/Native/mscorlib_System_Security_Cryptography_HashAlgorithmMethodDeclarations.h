﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t646;
// System.Byte[]
struct ByteU5BU5D_t108;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
extern "C" void HashAlgorithm__ctor_m3319 (HashAlgorithm_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::System.IDisposable.Dispose()
extern "C" void HashAlgorithm_System_IDisposable_Dispose_m6771 (HashAlgorithm_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform()
extern "C" bool HashAlgorithm_get_CanReuseTransform_m6772 (HashAlgorithm_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" ByteU5BU5D_t108* HashAlgorithm_ComputeHash_m2394 (HashAlgorithm_t646 * __this, ByteU5BU5D_t108* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t108* HashAlgorithm_ComputeHash_m3329 (HashAlgorithm_t646 * __this, ByteU5BU5D_t108* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C" HashAlgorithm_t646 * HashAlgorithm_Create_m3328 (Object_t * __this /* static, unused */, String_t* ___hashName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash()
extern "C" ByteU5BU5D_t108* HashAlgorithm_get_Hash_m6773 (HashAlgorithm_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize()
extern "C" int32_t HashAlgorithm_get_HashSize_m6774 (HashAlgorithm_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Dispose(System.Boolean)
extern "C" void HashAlgorithm_Dispose_m6775 (HashAlgorithm_t646 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t HashAlgorithm_TransformBlock_m6776 (HashAlgorithm_t646 * __this, ByteU5BU5D_t108* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t108* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t108* HashAlgorithm_TransformFinalBlock_m6777 (HashAlgorithm_t646 * __this, ByteU5BU5D_t108* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
