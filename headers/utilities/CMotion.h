#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CMotion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z
    virtual float AdvanceInertiaToTime(CExpressionValueStack *, uint64_t, float, float, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMotion@@QEAA@XZ
    CMotion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentVelocity@CMotion@@QEBAMXZ
    float GetCurrentVelocity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForceEngineCurrentValue@CMotion@@QEBAMXZ
    float GetForceEngineCurrentValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModifiedRestingValue@CMotion@@QEBAMXZ
    float GetModifiedRestingValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImpulse@CMotion@@QEBA_NXZ
    bool HasImpulse() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMotion@CMotion@@QEBA_NXZ
    bool IsInMotion() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMotion@@QEAA@XZ
    ~CMotion();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ
    virtual float AdvanceInertiaToTimeDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedPreviousDelta@CMotion@@MEBAMXZ
    virtual float GetAdjustedPreviousDelta() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z
    void InitializeDefaultBoundaryInertiaModifier(float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInContact@CMotion@@IEAAX_N@Z
    void StartInContact(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertia@CMotion@@IEAAXMM_N0@Z
    void StartInertia(float, float, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z
    float AdvanceInertiaToTimeInertiaModifier(CExpressionValueStack *, uint64_t);
};
