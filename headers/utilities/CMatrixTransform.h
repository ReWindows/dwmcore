#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CMatrixTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_MATRIXTRANSFORM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CMatrixTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    virtual void GetRealization(D2D_SIZE_F const *, CMILMatrix *);
};
