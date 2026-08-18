#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 24 member(s).
class CHolographicExclusiveView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z
    bool ActivateView(CHolographicClient *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicExclusiveView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z
    void DeactivateView(CHolographicClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHolographicExclusiveView@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z
    long ProcessSetSwapChain(CResourceTable *, tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z
    long ProcessSetViewData(CResourceTable *, tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ
    void PublishPresentData();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicExclusiveView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicExclusiveView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z
    void UpdateFrameStatistics(DXGI_FRAME_STATISTICS const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ
    long ActivateSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z
    long AttachSwapChain(CResource *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z
    CHolographicExclusiveView(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ
    void CloseSurfaceHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ
    void DeactivateSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ
    long OpenSurfaceHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z
    bool ProcessExclusiveSurfaceUpdate(unsigned int, EXCLUSIVE_SURFACE_UPDATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ
    void ReleaseSwapChain();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicExclusiveView@@EEAA@XZ
    virtual ~CHolographicExclusiveView();
};
