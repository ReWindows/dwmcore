#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CPathGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z
    long ProcessSetPath(CResourceTable *, tagMILCMD_PATHGEOMETRY_SETPATH const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPathGeometry@@MEAA@XZ
    virtual ~CPathGeometry();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z
    void SetPath(CPathData const *);
};
