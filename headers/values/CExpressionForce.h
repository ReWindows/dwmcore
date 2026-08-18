#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class CExpressionForce {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z
    virtual float Accelerate(IntegrationState *, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExpressionForce@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z
    CExpressionForce(float, float, CConditionalExpression *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@CExpressionForce@@UEBA?BUIntegrationState@@XZ
    virtual IntegrationState GetCurrentState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CExpressionForce@@UEBAMXZ
    virtual float GetFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CExpressionForce@@UEBAMM@Z
    virtual float GetFinalValue(float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValueOvershootBehavior@CExpressionForce@@UEBA?AW4FinalValueOvershootBehavior@@XZ
    virtual int GetFinalValueOvershootBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFinalValue@CExpressionForce@@UEBA_NXZ
    virtual bool HasFinalValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMotion@CExpressionForce@@UEBA_NXZ
    virtual bool IsInMotion() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExpressionForce@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValue@CExpressionForce@@UEAAXM@Z
    virtual void SetFinalValue(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z
    virtual float Update(float, CExpressionValueStack *, uint64_t);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExpressionForce@@EEAA@XZ
    virtual ~CExpressionForce();
};
