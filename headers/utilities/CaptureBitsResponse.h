#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CaptureBitsResponse {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z
    CaptureBitsResponse(CGlobalSurfaceManager *, CChannelContext *, CVisualTree *, float, WICRect const &, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ
    virtual long OnPresentComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z
    virtual long SendResponse(long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ
    long CalcSectionBitmapSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ
    long CreateRenderTargetBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ
    long CreateSectionBitmap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@CaptureBitsResponse@@IEAAJXZ
    long GetBits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ
    long MapSectionBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ
    long RenderForCapture();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CaptureBitsResponse@@MEAA@XZ
    virtual ~CaptureBitsResponse();
};
