#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 61 member(s).
class CDDisplaySwapChain {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDDisplaySwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanTransitionComputeScribble@CDDisplaySwapChain@@UEBA_NXZ
    virtual bool CanTransitionComputeScribble() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDirectFlipSupport@CDDisplaySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z
    virtual bool CheckDirectFlipSupport(IOverlayPlaneResource *, int, WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIndependentFlipSupport@CDDisplaySwapChain@@UEBA_NXZ
    virtual bool CheckIndependentFlipSupport() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z
    virtual bool CheckMultiplaneOverlaySupport(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const *, unsigned int, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ
    virtual long CheckOcclusionState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CDDisplaySwapChain@@UEBAJIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z
    virtual void CleanupComputeScribble(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableComputeScribble@CDDisplaySwapChain@@UEAAJPEAVIMonitorTarget@@@Z
    virtual long EnableComputeScribble(IMonitorTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ
    long EnsureDisplayBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFlipAwayFenceForPlane@CDDisplaySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z
    virtual long EnsureFlipAwayFenceForPlane(unsigned int, tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ
    virtual IDeviceTarget * GetBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CDDisplaySwapChain@@UEBAIXZ
    virtual unsigned int GetBufferCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySource@CDDisplaySwapChain@@UEBAPEAUIDisplaySource@Core@Display@Devices@Windows@@XZ
    virtual ::Windows::Devices::Display::Core::IDisplaySource * GetDisplaySource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlipAwayValue@CDDisplaySwapChain@@UEBA_KXZ
    virtual uint64_t GetFlipAwayValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    virtual long GetMultiplaneOverlayCaps(DXGI_MULTIPLANE_OVERLAY_CAPS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalBackBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ
    virtual ISwapChainBuffer * GetPhysicalBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z
    virtual ISwapChainBuffer * GetPhysicalBuffer(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalFrontBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ
    virtual ISwapChainBuffer * GetPhysicalFrontBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CDDisplaySwapChain@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z
    virtual long GetPresentStatisticsDWM(DXGI_FRAME_STATISTICS_DWM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComputeScribbleSupported@CDDisplaySwapChain@@UEBA_NXZ
    virtual bool IsComputeScribbleSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRealizationBitmapReleased@CDDisplaySwapChain@@UEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z
    virtual void NotifyRealizationBitmapReleased(::Windows::Devices::Display::Core::IDisplaySurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentDFlip@CDDisplaySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z
    virtual long PresentDFlip(unsigned int, unsigned int, bool, unsigned int, IOverlayPlaneResource *, int, int, void const *, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z
    virtual long PresentMPO(unsigned int, unsigned int, int, void const *, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDDisplaySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDDisplaySwapChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CDDisplaySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CDDisplaySwapChain@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z
    virtual long SetFrontBufferRenderingMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareProtection@CDDisplaySwapChain@@UEAAJ_N@Z
    virtual long SetHardwareProtection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLatencyHint@CDDisplaySwapChain@@UEAAXW4DXGI_LATENCY_HINT@@@Z
    virtual void SetLatencyHint(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CDDisplaySwapChain@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z
    virtual bool SetVBlankDuration(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ
    virtual long UpdateRefreshRate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z
    long ComputeCachedHdrMetadata(int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z
    long CreateScanout(unsigned int, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int, unsigned int, ::Windows::Devices::Display::Core::IDisplayScanout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z
    long ExecutePresent(::Windows::Devices::Display::Core::IDisplayScanout *, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z
    long FindCachedDesktopScanout(bool, DWM_PRESENT_MULTIPLANE_OVERLAY const &, ::Windows::Devices::Display::Core::IDisplayScanout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z
    long FindCachedGeneralScanout(bool, unsigned int, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int, unsigned int, int, ::Windows::Devices::Display::Core::IDisplayScanout * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z
    int GetDisplayRotationFromDxgiRotation(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ
    long InitializeVBlankWaitEventHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z
    void PostPresent(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z
    long PrePresent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z
    long SetPerPresentDisplayScanoutOptions(DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int, ::Windows::Devices::Display::Core::IDisplayScanout *, bool, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ
    void TransitionAwayCurrentPrimaries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devices@Windows@@W4DisplaySourceStatus@3456@PEA_N@Z
    long TranslateExecutePresentResult(int, int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDisplaySwapChain@@MEAA@XZ
    virtual ~CDDisplaySwapChain();
};
