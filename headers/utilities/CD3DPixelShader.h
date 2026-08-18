#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CD3DPixelShader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z
    static long Create(CD3DDevice *, void const *, uint64_t, CD3DPixelShader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CD3DPixelShader@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z
    long Initialize(CD3DResourceManager *, unsigned int, ID3D11PixelShader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ
    virtual void ReleaseD3DResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3DPixelShader@@MEAA@XZ
    virtual ~CD3DPixelShader();
};
