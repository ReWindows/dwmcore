#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CGravityBounceAccelerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z
    virtual float Accelerate(IntegrationState *, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGravityBounceAccelerator@@QEAA@MM@Z
    CGravityBounceAccelerator(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CGravityBounceAccelerator@@UEBAMXZ
    virtual float GetFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValueOvershootBehavior@CGravityBounceAccelerator@@UEBA?AW4FinalValueOvershootBehavior@@XZ
    virtual int GetFinalValueOvershootBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFinalValue@CGravityBounceAccelerator@@UEBA_NXZ
    virtual bool HasFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValue@CGravityBounceAccelerator@@UEAAXM@Z
    virtual void SetFinalValue(float);
};
