#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CScopedClipStack {
public:
    class ClippingScopeState;
    class CpuClipStackState;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CScopedClipStack@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z
    void DuplicateScopeToClipStack(CScopedClipStack *, CMILMatrix const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z
    void EnterClippingScope(bool, IDeviceTarget const *, CMILMatrix const &, CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ
    bool HasCpuClipsInScope() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ
    bool HasDeferredD2DLayers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ
    bool HasGpuClipsInScope() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z
    void PopCpuClipFromScope(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z
    long PushCpuClipToScope(CShape const *, CShape const *, CMILMatrix const *, int, bool, CCpuClipAntialiasSink *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z
    void RestoreScopeFromClipStack(CScopedClipStack const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseCpuClippingInScope@CScopedClipStack@@QEBA_NXZ
    bool UseCpuClippingInScope() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScopedClipStack@@QEAA@XZ
    ~CScopedClipStack();
};
