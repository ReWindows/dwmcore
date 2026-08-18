#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CCommonRegistryData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ
    static long InitializeFromRegistry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCpuClipFlatteningEnabled@CCommonRegistryData@@SA_NXZ
    static bool IsCpuClipFlatteningEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z
    static bool IsShaderLinkingBlacklistedGpu(unsigned int, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ
    static void InitializeDWMKeysFromRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z
    static bool ParseGpuIdListKey(unsigned short const *, WindissectOpaque * *, unsigned int *);
};
