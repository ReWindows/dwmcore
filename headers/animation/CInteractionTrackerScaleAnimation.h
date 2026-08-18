#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CInteractionTrackerScaleAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractionTrackerScaleAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMotion@CInteractionTrackerScaleAnimation@@UEBAPEAVCMotion@@XZ
    virtual CMotion * GetMotion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z
    long Initialize(CInteractionTracker *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractionTrackerScaleAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractionTrackerScaleAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVelocityOnInertiaRestart@CInteractionTrackerScaleAnimation@@UEAAXXZ
    virtual void ResetVelocityOnInertiaRestart();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionTrackerScaleAnimation@@UEAA@XZ
    virtual ~CInteractionTrackerScaleAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDefaultInContactDelta@CInteractionTrackerScaleAnimation@@MEAAMMMMM@Z
    virtual float CalculateDefaultInContactDelta(float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z
    virtual long CalculateInContactValueWorker(CExpressionValueStack *, uint64_t, float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z
    virtual long CalculateInertiaValueWorker(CExpressionValueStack *, uint64_t, float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z
    virtual void InsertDependenciesInOrder(ExpressionWalkContext const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z
    virtual void PrepareForCalculation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ
    virtual void StartInContactWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z
    virtual void StartInertiaWorker(float, bool);
};
