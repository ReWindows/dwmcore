#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CDirectFlipInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CDirectFlipInfo@@QEAAJXZ
    long Activate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ
    long DisableIndependentFlip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ
    long EnsureIndependentFlipState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z
    int GetCutoffZ(COcclusionContext const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z
    long GetDeviceTarget(IDeviceTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    void Init(IOverlayMonitorTarget *, CVisual const *, CCompositionSurfaceInfo *, int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ
    bool IsIndependentFlip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ
    bool PresentNeeded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ
    bool RenderingRealizationChanged() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CDirectFlipInfo@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z
    bool UseSyncIntervalAndAllowTearing(IOverlaySwapChain *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDirectFlipInfo@@QEAA@XZ
    ~CDirectFlipInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcEarlyWakeup@CDirectFlipInfo@@IEAAXXZ
    void CalcEarlyWakeup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ
    void CalcIndependentFlipSupport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z
    long Present(IOverlaySwapChain *, unsigned int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ
    void const * UpdateHDRMetaData();
};
