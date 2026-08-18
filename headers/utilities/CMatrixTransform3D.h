#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CMatrixTransform3D {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM3D@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_MATRIXTRANSFORM3D const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CMatrixTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CMatrixTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    virtual void GetRealization(D2D_SIZE_F const *, CMILMatrix *);
};
