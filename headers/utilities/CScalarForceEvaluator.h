#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CScalarForceEvaluator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z
    float AdvanceToTime(float, IAccelerator *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ
    bool IsInMotion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z
    void Reset(float, float, IAccelerator *, ForceThreshold const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@CScalarForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@PEAUIAccelerator@@M@Z
    Derivative Evaluate(IntegrationState &, IAccelerator *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z
    IntegrationState Integrate(IntegrationState &, IAccelerator *, float, float);
};
