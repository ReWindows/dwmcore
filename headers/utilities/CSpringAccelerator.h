#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CSpringAccelerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accelerate@CSpringAccelerator@@UEAAMPEAUIntegrationState@@M@Z
    virtual float Accelerate(IntegrationState *, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSpringAccelerator@@QEAA@XZ
    CSpringAccelerator();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSpringAccelerator@@QEAA@MM@Z
    CSpringAccelerator(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CSpringAccelerator@@UEBAMXZ
    virtual float GetFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValueOvershootBehavior@CSpringAccelerator@@UEBA?AW4FinalValueOvershootBehavior@@XZ
    virtual int GetFinalValueOvershootBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFinalValue@CSpringAccelerator@@UEBA_NXZ
    virtual bool HasFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValue@CSpringAccelerator@@UEAAXM@Z
    virtual void SetFinalValue(float);
};
