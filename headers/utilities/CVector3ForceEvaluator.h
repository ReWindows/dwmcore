#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CVector3ForceEvaluator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z
    D2DVector3 AdvanceToTime(float, IAccelerator *, IAccelerator *, IAccelerator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z
    void ChangeBasis(D2DMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z
    void Reset(D2DVector3, D2DVector3, IAccelerator *, IAccelerator *, IAccelerator *);
};
