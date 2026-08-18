#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CCommonRenderingShaderCache {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommonRenderingShaderCache@@QEAA@XZ
    ~CCommonRenderingShaderCache();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z
    long GetCommonRenderingShaderInternalNoRef(CD3DDevice *, CommonRenderingShaderDesc const &, unsigned int *, ID3D11PixelShader * *);
};
