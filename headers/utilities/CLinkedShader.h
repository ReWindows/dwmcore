#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CLinkedShader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z
    CLinkedShader(ID3D10Blob *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z
    long CreateResource(CD3DDevice *, CD3DPixelShader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z
    long GetShadersNoRef(CD3DDevice *, unsigned int *, ID3D11PixelShader * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLinkedShader@@UEAA@XZ
    virtual ~CLinkedShader();
};
