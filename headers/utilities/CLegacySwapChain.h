#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 55 member(s).
class CLegacySwapChain {
public:
    class CBufferResource;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacySwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanTransitionComputeScribble@CLegacySwapChain@@UEBA_NXZ
    virtual bool CanTransitionComputeScribble() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z
    virtual bool CheckDirectFlipSupport(IOverlayPlaneResource *, int, WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIndependentFlipSupport@CLegacySwapChain@@UEBA_NXZ
    virtual bool CheckIndependentFlipSupport() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z
    virtual bool CheckMultiplaneOverlaySupport(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const *, unsigned int, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CLegacySwapChain@@UEBAJXZ
    virtual long CheckOcclusionState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAJIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z
    virtual void CleanupComputeScribble(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFlipAwayFenceForPlane@CLegacySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z
    virtual long EnsureFlipAwayFenceForPlane(unsigned int, tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ
    virtual IDeviceTarget * GetBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CLegacySwapChain@@UEBAIXZ
    virtual unsigned int GetBufferCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlipAwayValue@CLegacySwapChain@@UEBA_KXZ
    virtual uint64_t GetFlipAwayValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    virtual long GetMultiplaneOverlayCaps(DXGI_MULTIPLANE_OVERLAY_CAPS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalBackBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ
    virtual ISwapChainBuffer * GetPhysicalBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z
    virtual ISwapChainBuffer * GetPhysicalBuffer(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalFrontBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ
    virtual ISwapChainBuffer * GetPhysicalFrontBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CLegacySwapChain@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z
    virtual long GetPresentStatisticsDWM(DXGI_FRAME_STATISTICS_DWM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ
    virtual unsigned int GetVidPnTargetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ
    virtual bool IsComputeScribbleSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CLegacySwapChain@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z
    virtual long PresentDFlip(unsigned int, unsigned int, bool, unsigned int, IOverlayPlaneResource *, int, int, void const *, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z
    virtual long PresentMPO(unsigned int, unsigned int, int, void const *, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacySwapChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CLegacySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrontBufferRenderingMode@CLegacySwapChain@@UEAAJ_N@Z
    virtual long SetFrontBufferRenderingMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z
    virtual long SetHardwareProtection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLatencyHint@CLegacySwapChain@@UEAAXW4DXGI_LATENCY_HINT@@@Z
    virtual void SetLatencyHint(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CLegacySwapChain@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z
    virtual bool SetVBlankDuration(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ
    virtual long UpdateRefreshRate();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z
    CLegacySwapChain(CD3DDevice *, IDXGISwapChainDWM1*, unsigned int, PixelFormatInfo const &, RenderTargetInfo const &, RefreshRateInfo const &, unsigned int, unsigned int, _LUID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z
    static long Create(CD3DDevice *, DXGI_OUTPUT_DWM_DESC const &, IDXGISwapChainDWM1*, PixelFormatInfo const &, RenderTargetInfo const &, int, CLegacySwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z
    long CreateBackBuffer(ID3D11Texture2D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLegacySwapChain@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z
    void PostPresent(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrePresent@CLegacySwapChain@@IEAAX_N@Z
    void PrePresent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ
    void ReleaseBackBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffers@CLegacySwapChain@@MEAAJXZ
    virtual long ResetBuffers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacySwapChain@@MEAA@XZ
    virtual ~CLegacySwapChain();
};
