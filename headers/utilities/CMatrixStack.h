#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CMatrixStack {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ
    CMILMatrix const * GetTopByReference() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z
    long Push(CMILMatrix const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z
    void Top(CMILMatrix *) const;
};
