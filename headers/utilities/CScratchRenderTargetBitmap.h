#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CScratchRenderTargetBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ
    virtual void FinalRelease();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScratchRenderTargetBitmap@@IEAA@XZ
    CScratchRenderTargetBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z
    static long Create(IDeviceTextureTarget *, CScratchRenderTargetBitmap * *);
};
