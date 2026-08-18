#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CCpuClippingData {
public:
    class CpuClipRealization;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z
    static bool CalcScopeTransformFromWorld(CMILMatrix const &, CMILMatrix const &, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanIgnoreAncestorCpuClips@CCpuClippingData@@QEBA_NXZ
    bool CanIgnoreAncestorCpuClips() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CCpuClippingData@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeMode@CCpuClippingData@@QEBA?AW4CpuClippingScopeMode@@XZ
    int GetScopeMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCpuClip@CCpuClippingData@@QEBA_NXZ
    bool HasCpuClip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z
    static bool ShouldRealizeCpuClipOnGpu(CShape const *, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z
    bool TransformToDifferentScope(CCpuClippingData *, CMILMatrix const &, CMILMatrix const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z
    long Update(CVisualTree const *, CVisual *, CScopedClipStack const &, CShape const *, CMILMatrix const *, CCpuClippingData const *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCpuClippingData@@QEAA@XZ
    ~CCpuClippingData();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z
    static bool IsScopePreservingTransform(CMILMatrix const &);
};
