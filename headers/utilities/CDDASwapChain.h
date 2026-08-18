#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 25 member(s).
class CDDASwapChain {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDDASwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrontToBackBuffer@CDDASwapChain@@UEAAJXZ
    virtual long CopyFrontToBackBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z
    static long Create(CD3DDevice *, IDXGISwapChainDWM1*, PixelFormatInfo const &, RenderTargetInfo const &, CDDASwapChain * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CDDASwapChain@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBuffer@CDDASwapChain@@UEBAPEAVIDeviceTarget@@XZ
    virtual IDeviceTarget * GetBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CDDASwapChain@@UEBAIXZ
    virtual unsigned int GetBufferCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CDDASwapChain@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CDDASwapChain@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CDDASwapChain@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatistics@CDDASwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetPresentStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CDDASwapChain@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CDDASwapChain@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CDDASwapChain@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CDDASwapChain@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual void NotifyRenderedRect(WindissectOpaque const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDDASwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDDASwapChain@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z
    long Initialize(CD3DDevice *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDASwapChain@@MEAA@XZ
    virtual ~CDDASwapChain();
};
