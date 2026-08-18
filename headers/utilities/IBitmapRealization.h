#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class IBitmapRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeviceTexture@IBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long EnsureDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingColorSpace@IBitmapRealization@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsMatchingColorSpace(int) const;
};
