#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class VisualCaptureBitsResponse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ
    virtual long OnPresentComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendResponse@VisualCaptureBitsResponse@@UEAAJJ@Z
    virtual long SendResponse(long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z
    VisualCaptureBitsResponse(CGlobalSurfaceManager *, CChannelContext *, CVisualTree *, WICRect const &, int, uint64_t, void *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualCaptureBitsResponse@@UEAA@XZ
    virtual ~VisualCaptureBitsResponse();
};
