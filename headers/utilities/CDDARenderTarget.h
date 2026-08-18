#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 33 member(s).
class CDDARenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDDARenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z
    static long Create(IDXGIOutputDWM *, CDesktopTree *, RenderTargetInfo const &, CMonitorTransform const &, CDDARenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@CDDARenderTarget@@UEAAXXZ
    virtual void ForceFullDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDDATarget@CDDARenderTarget@@UEAAPEAV1@XZ
    virtual CDDARenderTarget * GetDDATarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@CDDARenderTarget@@UEBAAEBVCMILMatrix@@XZ
    virtual CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CDDARenderTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeBounds@CDDARenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetTreeBounds() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDDARenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDDARenderTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RenderAndPresent(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z
    void SetSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z
    void UpdateTransform(CMonitorTransform const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDARenderTarget@@UEAA@XZ
    virtual ~CDDARenderTarget();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z
    CDDARenderTarget(IDXGIOutputDWM *, RenderTargetInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDDARenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void NotifyRenderedRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDDARenderTarget@@IEAAJXZ
    long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long Render(CDrawingContext *);
};
