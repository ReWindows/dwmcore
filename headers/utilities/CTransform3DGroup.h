#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CTransform3DGroup {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ
    virtual void BreakLinksForCycles();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z
    CTransform3DGroup(CComposition *, CChannelContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    virtual void GetRealization(D2D_SIZE_F const *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    void GetRealizationWorker(D2D_SIZE_F const *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CTransform3DGroup@@MEAAPEAVCResource@@XZ
    virtual CResource * GetResource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransform3DGroup@@MEAA@XZ
    virtual ~CTransform3DGroup();
};
