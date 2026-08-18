#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CFrictionAccelerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accelerate@CFrictionAccelerator@@UEAAMPEAUIntegrationState@@M@Z
    virtual float Accelerate(IntegrationState *, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrictionAccelerator@@QEAA@M@Z
    CFrictionAccelerator(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CFrictionAccelerator@@UEBAMXZ
    virtual float GetFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValueOvershootBehavior@CFrictionAccelerator@@UEBA?AW4FinalValueOvershootBehavior@@XZ
    virtual int GetFinalValueOvershootBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFinalValue@CFrictionAccelerator@@UEBA_NXZ
    virtual bool HasFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValue@CFrictionAccelerator@@UEAAXM@Z
    virtual void SetFinalValue(float);
};
