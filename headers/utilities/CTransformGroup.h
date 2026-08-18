#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CTransformGroup {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ
    virtual void BreakLinksForCycles();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z
    CTransformGroup(CComposition *, CChannelContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    virtual void GetRealization(D2D_SIZE_F const *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    void GetRealizationWorker(D2D_SIZE_F const *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CTransformGroup@@MEAAPEAVCResource@@XZ
    virtual CResource * GetResource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransformGroup@@MEAA@XZ
    virtual ~CTransformGroup();
};
