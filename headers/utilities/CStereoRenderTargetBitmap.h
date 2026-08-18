#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CStereoRenderTargetBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CStereoRenderTargetBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z
    static long Create(IDeviceTextureTarget *, IStereoRenderTargetBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRightEyeRenderTargetBitmap@CStereoRenderTargetBitmap@@UEAAPEAVIRenderTargetBitmap@@XZ
    virtual IRenderTargetBitmap * GetRightEyeRenderTargetBitmap();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CStereoRenderTargetBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStereoRenderTargetBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CStereoRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStereoRenderTargetBitmap@@UEAA@XZ
    virtual ~CStereoRenderTargetBitmap();
};
