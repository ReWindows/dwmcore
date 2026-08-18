#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CScaleMotion {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ
    virtual float AdvanceInertiaToTimeDefault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ
    virtual float CalculateNaturalEndpoint() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ
    virtual float CurrentInertiaVelocity() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeToMinimumVelocity@CScaleMotion@@MEBAMXZ
    virtual float TimeToMinimumVelocity() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z
    float UnboundedValueAtTime(float) const;
};
