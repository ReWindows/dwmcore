#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CPositionMotion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z
    float AdvanceInertiaToTime(CExpressionValueStack *, uint64_t, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z
    float CalculateInContactValue(float, float, float, float, float, float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ
    virtual float AdvanceInertiaToTimeDefault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ
    virtual float CalculateNaturalEndpoint() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ
    virtual float CurrentInertiaVelocity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedPreviousDelta@CPositionMotion@@MEBAMXZ
    virtual float GetAdjustedPreviousDelta() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeToMinimumVelocity@CPositionMotion@@MEBAMXZ
    virtual float TimeToMinimumVelocity() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ
    void AdvanceDeltaDueToScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ
    float CurrentInertiaPanningVelocity() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z
    float UnboundedInertiaPanningAtTime(float) const;
};
