#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CProxyGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CProxyGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedForCpuClipping@CProxyGeometry@@UEBA_NPEA_N@Z
    virtual bool IsSupportedForCpuClipping(bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOMETRY@@@Z
    long ProcessSetGeometry(CResourceTable *, tagMILCMD_PROXYGEOMETRY_SETGEOMETRY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z
    long ProcessSetViewBox(CResourceTable *, tagMILCMD_PROXYGEOMETRY_SETVIEWBOX const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetShapeTransformRealization(D2D_SIZE_F const *, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransform@CProxyGeometry@@MEBA_NXZ
    virtual bool HasTransform() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProxyGeometry@@MEAA@XZ
    virtual ~CProxyGeometry();
};
