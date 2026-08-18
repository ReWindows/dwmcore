#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 76 member(s).
class CGlobalCompositionSurfaceInfo {
public:
    class CBindInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGlobalCompositionSurfaceInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreResourcesPinned@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool AreResourcesPinned() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcApprovedPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIPEAVIOverlayMonitorTarget@@@Z
    virtual unsigned int CalcApprovedPresentDuration(IOverlayMonitorTarget *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ
    virtual long CommitRecordedStatistics() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmIndependentFlipEntry@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z
    virtual long ConfirmIndependentFlipEntry(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void ConfirmRecordedStatistics(tagCOMPOSITION_TARGET_ID const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z
    virtual long DisableDirectFlip(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z
    virtual long DisableIndependentFlip(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z
    virtual long DisableOverlay(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NPEAVIOverlaySwapChain@@@Z
    virtual long EnableDirectFlip(uint64_t, bool, IOverlaySwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z
    virtual long EnableIndependentFlip(uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z
    virtual long EnableOverlay(uint64_t, IOverlaySwapChain *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CGlobalCompositionSurfaceInfo@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA?AU_D3DCOLORVALUE@@XZ
    virtual _D3DCOLORVALUE GetBorderColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentType@CGlobalCompositionSurfaceInfo@@UEBA?AW4BufferContentType@@XZ
    virtual int GetContentType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreateChannel@CGlobalCompositionSurfaceInfo@@UEBAIXZ
    virtual unsigned int GetCreateChannel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBindId@CGlobalCompositionSurfaceInfo@@UEBA_KXZ
    virtual uint64_t GetCurrentBindId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRects@CGlobalCompositionSurfaceInfo@@UEBAIPEAPEAUtagRECT@@@Z
    virtual unsigned int GetDirtyRects(tagRECT * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHDR10MetaData@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z
    virtual bool GetHDR10MetaData(DXGI_HDR_METADATA_HDR10*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInkCookie@CGlobalCompositionSurfaceInfo@@UEBAIXZ
    virtual unsigned int GetInkCookie() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ
    virtual int GetLastIndependentFlipState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPresentCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ
    virtual unsigned int GetLastPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z
    virtual bool GetLetterboxingMargins(D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLuid@CGlobalCompositionSurfaceInfo@@UEBA?AU_LUID@@XZ
    virtual _LUID GetLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ
    virtual unsigned int GetPresentDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentDurationTolerance@CGlobalCompositionSurfaceInfo@@UEBA_NPEAI@Z
    virtual bool GetPresentDurationTolerance(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ
    virtual unsigned int GetRealizationCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationIndex@CGlobalCompositionSurfaceInfo@@UEBAIXZ
    virtual unsigned int GetRealizationIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ
    virtual IBitmapRealization * GetRenderingRealization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetScaledLetterboxingMargins(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizePreference@CGlobalCompositionSurfaceInfo@@UEBA?AW4SizePreference@@XZ
    virtual int GetSizePreference() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasApprovedCustomDuration@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool HasApprovedCustomDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool HasSwapChainAttributes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdvancedDirectFlipCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsAdvancedDirectFlipCompatible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectFlip@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsDirectFlip() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsHDR() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHomogeneous@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsHomogeneous() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependentFlip@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsIndependentFlip() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsIndependentFlipNotify() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayAssigned@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsOverlayAssigned() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayPrevented@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsOverlayPrevented() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayRequired@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsOverlayRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsOverlayRevokable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScanoutCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsScanoutCompatible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ
    virtual bool IsSwapChain() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOverlayFrame@CGlobalCompositionSurfaceInfo@@UEAAXAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z
    virtual void NotifyOverlayFrame(tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRevoked@CGlobalCompositionSurfaceInfo@@UEAAXXZ
    virtual void NotifyRevoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ
    virtual bool PresentRateSupportsOverlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z
    virtual void PreventOverlay(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z
    virtual long ProcessSurfaceUpdate(CSM_SURFACE_UPDATE_const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGlobalCompositionSurfaceInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGlobalCompositionSurfaceInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnalogExclusive@CGlobalCompositionSurfaceInfo@@UEAAJ_N@Z
    virtual long SetAnalogExclusive(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z
    virtual long SetIndependentFlipDuration(uint64_t, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z
    virtual long SetIndependentFlipNotify(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRecentlyComposed@CGlobalCompositionSurfaceInfo@@UEAAXXZ
    virtual void SetRecentlyComposed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotifyOfFlipAway@CGlobalCompositionSurfaceInfo@@UEAA_NXZ
    virtual bool ShouldNotifyOfFlipAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetrySetConsumerProcessId@CGlobalCompositionSurfaceInfo@@UEAAXI@Z
    virtual void TelemetrySetConsumerProcessId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimePreviouslyRevoked@CGlobalCompositionSurfaceInfo@@UEBA_KXZ
    virtual uint64_t TimePreviouslyRevoked() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBitmapRealization@CGlobalCompositionSurfaceInfo@@UEBAPEAVIBitmapRealization@@XZ
    virtual IBitmapRealization * TryGetBitmapRealization() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEBAPEAVIBitmapRealization@@XZ
    virtual IBitmapRealization * TryGetRenderingRealization() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z
    virtual void UpdateSwapChainTelemetry(int, bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z
    CGlobalCompositionSurfaceInfo(_LUID, CCompositionSurfaceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ
    long ForceUpdateRenderingRealization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ
    ISwapChainRealization * GetSwapChainRealization() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z
    long ProcessSurfaceUpdateInternal(CSM_SURFACE_UPDATE_const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z
    bool UpdateRenderingRealization(ISwapChainRealization *, CSM_BUFFER_ATTRIBUTES const *, CSM_RGNDATA_const *, ScrollOptimization const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ
    virtual ~CGlobalCompositionSurfaceInfo();
};
