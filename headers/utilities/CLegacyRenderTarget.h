#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 105 member(s).
class CLegacyRenderTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRect@CLegacyRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void AddDirtyRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z
    virtual bool AddOcclusionRegion(CRegion *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacyRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z
    virtual bool BoostFrameRate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupComputeScribble@CLegacyRenderTarget@@UEAAX_N@Z
    virtual void CleanupComputeScribble(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ
    virtual COverlayContext * CollectOverlayCandidates() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ
    virtual void ForceFullDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopPlaneScaling@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool GetDesktopPlaneScaling() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CLegacyRenderTarget@@UEBAPEAVCDesktopTree@@XZ
    virtual CDesktopTree * GetDesktopTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ
    virtual CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ
    virtual float GetInflationScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z
    virtual bool GetLastMonitorTime(MonitorTime *, MonitorTime *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ
    virtual CMonitorTransform const & GetMonitorTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNominalRefreshRate@CLegacyRenderTarget@@UEBA?AUDXGI_RATIONAL@@XZ
    virtual DXGI_RATIONAL GetNominalRefreshRate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z
    virtual unsigned int GetOutstandingPresentCount(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayContext@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ
    virtual COverlayContext * GetOverlayContext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlaySwapChain@CLegacyRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ
    virtual IOverlaySwapChain * GetOverlaySwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CLegacyRenderTarget@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CLegacyRenderTarget@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CLegacyRenderTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z
    virtual bool GetStats(uint64_t, tagCOMPOSITION_TARGET_STATS_2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChain@CLegacyRenderTarget@@UEBAPEAVISwapChain@@XZ
    virtual ISwapChain * GetSwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z
    virtual unsigned int GetSyncLockCount(uint64_t, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncLockGroupId@CLegacyRenderTarget@@UEBAIXZ
    virtual unsigned int GetSyncLockGroupId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ
    virtual tagCOMPOSITION_TARGET_ID const & GetTargetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetTime@CLegacyRenderTarget@@UEAA_K_K0@Z
    virtual uint64_t GetTargetTime(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeBounds@CLegacyRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetTreeBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@CLegacyRenderTarget@@UEBA_KXZ
    virtual uint64_t GetVBlankDuration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ
    virtual long HandleDDAArrivalOrDeparture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool IsComputeScribbleSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependentFlipSupported@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool IsIndependentFlipSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool IsOccluded() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryInCloneGroup@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool IsPrimaryInCloneGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool IsPrimaryMonitor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVBlankBoostSupported@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool IsVBlankBoostSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVRRMaxDuration@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool IsVRRMaxDuration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_LEGACYRENDERTARGET_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDelayUnpin@CLegacyRenderTarget@@UEAAXXZ
    virtual void ProcessDelayUnpin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE@@@Z
    long ProcessSetDesktopTree(CResourceTable *, tagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z
    virtual long ProcessUpdateRefreshRate(CResourceTable *, tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z
    long ProcessUpdateSDRToHDRMultiplier(CResourceTable *, tagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z
    long ProcessUpdateTransform(CResourceTable *, tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacyRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacyRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ
    virtual void ReleaseSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RenderAndPresent(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z
    virtual long SetSyncRefreshCountWaitTarget(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z
    virtual void SyncLock(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ
    virtual long UpdateMPOCaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ
    virtual bool UseSuperSample() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlank@CLegacyRenderTarget@@UEBAJPEAX@Z
    virtual long WaitForVBlank(void *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z
    CLegacyRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ
    long EnsureDXGIOutput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ
    virtual long EnsureSwapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ
    virtual int GetClearMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CLegacyRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLegacyRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CLegacyRenderTarget@@IEAAJXZ
    long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ
    bool PresentNeeded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long Render(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z
    long RenderComposeTop(CDrawingContext *, CComposeTop *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z
    virtual long RenderDirtyRegion(CDrawingContext *, CComposeTop *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z
    void SetSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ
    void UpdateAlphaMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ
    virtual bool UseLegacyPresent() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyRenderTarget@@MEAA@XZ
    virtual ~CLegacyRenderTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ
    void AddComputeScribbleDirtyRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ
    void CheckForMajorityScreenVideoNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ
    void CheckForceParallelMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ
    long GetPresentError() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void NotifyRenderedRect(WindissectOpaque const *, bool);
};
