#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CRegionGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z
    virtual bool IsSameGeometry(CGeometry const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedForCpuClipping@CRegionGeometry@@UEBA_NPEA_N@Z
    virtual bool IsSupportedForCpuClipping(bool *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegionGeometry@@IEAA@PEAVCComposition@@@Z
    CRegionGeometry(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
};
