#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 33 member(s).
class CLegacyStereoSwapChain {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacyStereoSwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIndependentFlipSupport@CLegacyStereoSwapChain@@UEBA_NXZ
    virtual bool CheckIndependentFlipSupport() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CLegacyStereoSwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z
    virtual bool CheckMultiplaneOverlaySupport(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const *, unsigned int, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CLegacyStereoSwapChain@@UEBAJIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupportsConvertPresentToMPO@CLegacyStereoSwapChain@@UEBA_NXZ
    virtual bool CheckSupportsConvertPresentToMPO() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ
    virtual long CopyFrontToBackBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CLegacyStereoSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    virtual long GetMultiplaneOverlayCaps(DXGI_MULTIPLANE_OVERLAY_CAPS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVariableRefreshRate@CLegacyStereoSwapChain@@UEBA_NPEAI@Z
    virtual bool IsVariableRefreshRate(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z
    virtual long PresentDFlip(unsigned int, unsigned int, bool, unsigned int, IOverlayPlaneResource *, int, int, void const *, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMPO@CLegacyStereoSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z
    virtual long PresentMPO(unsigned int, unsigned int, int, void const *, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacyStereoSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacyStereoSwapChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CLegacyStereoSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CLegacyStereoSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentFlipApprovedDuration@CLegacyStereoSwapChain@@UEAAX_K@Z
    virtual void SetIndependentFlipApprovedDuration(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLatencyHint@CLegacyStereoSwapChain@@UEAAXW4DXGI_LATENCY_HINT@@@Z
    virtual void SetLatencyHint(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CLegacyStereoSwapChain@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVBlankDuration@CLegacyStereoSwapChain@@UEAA_NI_K@Z
    virtual bool SetVBlankDuration(unsigned int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyStereoSwapChain@@UEAA@XZ
    virtual ~CLegacyStereoSwapChain();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z
    static long Create(CD3DDevice *, DXGI_OUTPUT_DWM_DESC const &, IDXGISwapChainDWM1*, PixelFormatInfo const &, RenderTargetInfo const &, CLegacyStereoSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffers@CLegacyStereoSwapChain@@MEAAJXZ
    virtual long ResetBuffers();
};
