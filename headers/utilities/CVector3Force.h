#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CVector3Force {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z
    CVector3Force(IAccelerator *, IAccelerator *, IAccelerator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z
    D2DVector3 Update(float, CExpressionValueStack *, uint64_t);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVector3Force@@EEAA@XZ
    virtual ~CVector3Force();
};
