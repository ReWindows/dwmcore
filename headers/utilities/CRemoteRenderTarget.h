#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 62 member(s).
class CRemoteRenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRemoteRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ
    virtual void ForceFullDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CRemoteRenderTarget@@UEBAPEAVCDesktopTree@@XZ
    virtual CDesktopTree * GetDesktopTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@CRemoteRenderTarget@@UEBAAEBVCMILMatrix@@XZ
    virtual CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMonitorTime@CRemoteRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z
    virtual bool GetLastMonitorTime(MonitorTime *, MonitorTime *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNominalRefreshRate@CRemoteRenderTarget@@UEBA?AUDXGI_RATIONAL@@XZ
    virtual DXGI_RATIONAL GetNominalRefreshRate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CRemoteRenderTarget@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CRemoteRenderTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStats@CRemoteRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z
    virtual bool GetStats(uint64_t, tagCOMPOSITION_TARGET_STATS_2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChain@CRemoteRenderTarget@@UEBAPEAVISwapChain@@XZ
    virtual ISwapChain * GetSwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeBounds@CRemoteRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetTreeBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@CRemoteRenderTarget@@UEBA_KXZ
    virtual uint64_t GetVBlankDuration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ
    virtual long HandleDDAArrivalOrDeparture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ
    virtual bool IsPrimaryMonitor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_REMOTERENDERTARGET_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE@@@Z
    long ProcessSetDesktopTree(CResourceTable *, tagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z
    long ProcessUpdateTransform(CResourceTable *, tagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRemoteRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRemoteRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RenderAndPresent(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyncRefreshCountWaitTarget@CRemoteRenderTarget@@UEAAJIPEAPEAX@Z
    virtual long SetSyncRefreshCountWaitTarget(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlank@CRemoteRenderTarget@@UEBAJPEAX@Z
    virtual long WaitForVBlank(void *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRemoteRenderTarget@@UEAA@XZ
    virtual ~CRemoteRenderTarget();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z
    CRemoteRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ
    long EnsureSwapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ
    uint64_t GetPresentTime() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CRemoteRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CRemoteRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void NotifyRenderedRect(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CRemoteRenderTarget@@IEAAJXZ
    long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long Render(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z
    long RenderComposeTop(CDrawingContext *, CComposeTop *, bool);
};
