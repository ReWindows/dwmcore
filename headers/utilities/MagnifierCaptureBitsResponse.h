#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class MagnifierCaptureBitsResponse {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z
    MagnifierCaptureBitsResponse(CGlobalSurfaceManager *, CMagnifierRenderTarget *, CChannelContext *, WICRect const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ
    virtual long OnPresentComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z
    virtual long SendResponse(long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MagnifierCaptureBitsResponse@@UEAA@XZ
    virtual ~MagnifierCaptureBitsResponse();
};
