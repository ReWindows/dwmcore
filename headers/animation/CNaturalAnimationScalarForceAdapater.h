#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CNaturalAnimationScalarForceAdapater {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNaturalAnimationScalarForceAdapater@@QEAA@XZ
    CNaturalAnimationScalarForceAdapater();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ
    virtual IntegrationState GetCurrentState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z
    virtual float GetFinalValue(float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFinalValue@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ
    virtual bool HasFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ
    virtual bool IsInMotion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z
    virtual float Update(float, CExpressionValueStack *, uint64_t);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNaturalAnimationScalarForceAdapater@@EEAA@XZ
    virtual ~CNaturalAnimationScalarForceAdapater();
};
