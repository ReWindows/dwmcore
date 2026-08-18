#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CLegacyVisualCaptureRenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacyVisualCaptureRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLegacyVisualCaptureRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z
    long ProcessCaptureBits(CChannelContext *, tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacyVisualCaptureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacyVisualCaptureRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
};
