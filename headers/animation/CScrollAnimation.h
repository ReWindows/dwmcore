#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 35 member(s).
class CScrollAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z
    void ApplyImpulse(float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z
    CScrollAnimation(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    virtual long CalculateValueWorker(CExpressionValueStack *, uint64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ
    bool CanDetermineModifiedRestingValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ
    float GetBoundedEndpoint() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ
    float GetForceEngineCurrentValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ
    float GetInertiaStartVelocity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialValue@CScrollAnimation@@QEBAMXZ
    float GetInitialValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ
    float GetModifiedRestingValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ
    float GetNaturalEndpoint() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocity@CScrollAnimation@@QEBAMXZ
    float GetVelocity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ
    bool HasActiveInertiaForce() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImpulse@CScrollAnimation@@QEBA_NXZ
    bool HasImpulse() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMotion@CScrollAnimation@@UEBA_NXZ
    virtual bool IsInMotion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z
    virtual void PrepareForCalculation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVelocityOnInertiaRestart@CScrollAnimation@@UEAAXXZ
    virtual void ResetVelocityOnInertiaRestart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ
    long SelectInertiaModifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertia@CScrollAnimation@@QEAAXM_N@Z
    void StartInertia(float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CScrollAnimation@@QEAAJXZ
    long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ
    bool WasInertiaStartedByImpulse() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScrollAnimation@@UEAA@XZ
    virtual ~CScrollAnimation();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ
    CInteractionTracker * GetInteractionTracker() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z
    long Initialize(CInteractionTracker *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z
    float UpdateValueWithChaining(float, float, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysApplyValueOnTarget@CScrollAnimation@@EEBA_NXZ
    virtual bool AlwaysApplyValueOnTarget() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ
    float CalculateCurrentElapsedTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z
    long CalculateInContactDelta(CExpressionValueStack *, uint64_t, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z
    long CalculateInContactValue(CExpressionValueStack *, uint64_t, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z
    long CalculateInertiaValue(CExpressionValueStack *, uint64_t, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z
    long CalculateValueForState(CExpressionValueStack *, uint64_t, int, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInContact@CScrollAnimation@@AEAAXXZ
    void StartInContact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ
    CChainingHelper * TryGetChainingHelper() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z
    void UpdateChainingDirection(float);
};
