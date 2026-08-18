#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CComputeScribbleRenderer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z
    static long Create(IMonitorTarget *, CComputeScribbleRenderer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z
    long GetOverlayMonitorTarget(IOverlayMonitorTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z
    static bool IsDriverWhitelisted(CD3DDevice const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z
    long PostRender(IMonitorTarget *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRender@CComputeScribbleRenderer@@QEAAJXZ
    long PreRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ
    long ScheduleScribble();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ
    CComputeScribbleFramebuffer * GetBackBufferData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ
    IOverlaySwapChain * GetOverlaySwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z
    long Initialize(IOverlayMonitorTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDelayedActivation@CComputeScribbleRenderer@@AEAA_NXZ
    bool ProcessDelayedActivation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComputeScribbleRenderer@@EEAA@XZ
    virtual ~CComputeScribbleRenderer();
};
