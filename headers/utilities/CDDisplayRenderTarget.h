#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 102 member(s).
class CDDisplayRenderTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRect@CDDisplayRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void AddDirtyRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z
    virtual bool AddOcclusionRegion(CRegion *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDDisplayRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z
    virtual bool BoostFrameRate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z
    virtual void CleanupComputeScribble(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ
    virtual COverlayContext * CollectOverlayCandidates() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ
    virtual void ForceFullDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopPlaneScaling@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool GetDesktopPlaneScaling() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CDDisplayRenderTarget@@UEBAPEAVCDesktopTree@@XZ
    virtual CDesktopTree * GetDesktopTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ
    virtual CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ
    virtual float GetInflationScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z
    virtual bool GetLastMonitorTime(MonitorTime *, MonitorTime *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ
    virtual CMonitorTransform const & GetMonitorTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNominalRefreshRate@CDDisplayRenderTarget@@UEBA?AUDXGI_RATIONAL@@XZ
    virtual DXGI_RATIONAL GetNominalRefreshRate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutstandingPresentCount@CDDisplayRenderTarget@@UEBAI_K@Z
    virtual unsigned int GetOutstandingPresentCount(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayContext@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ
    virtual COverlayContext * GetOverlayContext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlaySwapChain@CDDisplayRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ
    virtual IOverlaySwapChain * GetOverlaySwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CDDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CDDisplayRenderTarget@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CDDisplayRenderTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z
    virtual bool GetStats(uint64_t, tagCOMPOSITION_TARGET_STATS_2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChain@CDDisplayRenderTarget@@UEBAPEAVISwapChain@@XZ
    virtual ISwapChain * GetSwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z
    virtual unsigned int GetSyncLockCount(uint64_t, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncLockGroupId@CDDisplayRenderTarget@@UEBAIXZ
    virtual unsigned int GetSyncLockGroupId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ
    virtual tagCOMPOSITION_TARGET_ID const & GetTargetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z
    virtual uint64_t GetTargetTime(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeBounds@CDDisplayRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetTreeBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@CDDisplayRenderTarget@@UEBA_KXZ
    virtual uint64_t GetVBlankDuration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ
    virtual long HandleDDAArrivalOrDeparture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool IsComputeScribbleSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependentFlipSupported@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool IsIndependentFlipSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool IsOccluded() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CDDisplayRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryInCloneGroup@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool IsPrimaryInCloneGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool IsPrimaryMonitor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVBlankBoostSupported@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool IsVBlankBoostSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVRRMaxDuration@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool IsVRRMaxDuration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_DDISPLAYRENDERTARGET_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ
    virtual void ProcessDelayUnpin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE@@@Z
    long ProcessSetDesktopTree(CResourceTable *, tagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z
    virtual long ProcessUpdateRefreshRate(CResourceTable *, tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateSDRToHDRMultiplier@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z
    long ProcessUpdateSDRToHDRMultiplier(CResourceTable *, tagMILCMD_DDISPLAYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z
    long ProcessUpdateTransform(CResourceTable *, tagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDDisplayRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ
    virtual void ReleaseSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RenderAndPresent(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX@Z
    virtual long SetSyncRefreshCountWaitTarget(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z
    virtual void SyncLock(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ
    virtual long UpdateMPOCaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseSuperSample@CDDisplayRenderTarget@@UEBA_NXZ
    virtual bool UseSuperSample() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z
    virtual long WaitForVBlank(void *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ
    void AddComputeScribbleDirtyRects();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z
    CDDisplayRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ
    long EnsureDXGIOutput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClearMode@CDDisplayRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ
    virtual int GetClearMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void NotifyRenderedRect(WindissectOpaque const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDDisplayRenderTarget@@IEAAJXZ
    long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ
    bool PresentNeeded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long Render(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z
    long RenderComposeTop(CDrawingContext *, CComposeTop *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z
    long RenderDirtyRegion(CDrawingContext *, CComposeTop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ
    void ResetSyncLockGroup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z
    void SetSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ
    long TryEnsureSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ
    void UpdateAlphaMode();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDisplayRenderTarget@@MEAA@XZ
    virtual ~CDDisplayRenderTarget();
};
