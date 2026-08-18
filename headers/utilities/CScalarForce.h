#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CScalarForce {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z
    CScalarForce(IAccelerator *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@CScalarForce@@UEBA?BUIntegrationState@@XZ
    virtual IntegrationState GetCurrentState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CScalarForce@@UEBAMM@Z
    virtual float GetFinalValue(float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFinalValue@CScalarForce@@UEBA_NXZ
    virtual bool HasFinalValue() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z
    void Initialize(int, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMotion@CScalarForce@@UEBA_NXZ
    virtual bool IsInMotion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z
    virtual float Update(float, CExpressionValueStack *, uint64_t);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScalarForce@@EEAA@XZ
    virtual ~CScalarForce();
};
