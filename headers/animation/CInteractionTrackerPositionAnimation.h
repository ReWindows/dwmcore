#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CInteractionTrackerPositionAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractionTrackerPositionAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z
    CInteractionTrackerPositionAnimation(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMotion@CInteractionTrackerPositionAnimation@@UEBAPEAVCMotion@@XZ
    virtual CMotion * GetMotion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z
    long Initialize(CInteractionTracker *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ
    virtual bool IsInMotion() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractionTrackerPositionAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractionTrackerPositionAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionTrackerPositionAnimation@@UEAA@XZ
    virtual ~CInteractionTrackerPositionAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDefaultInContactDelta@CInteractionTrackerPositionAnimation@@MEAAMMMMM@Z
    virtual float CalculateDefaultInContactDelta(float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z
    virtual long CalculateInContactValueWorker(CExpressionValueStack *, uint64_t, float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z
    virtual long CalculateInertiaValueWorker(CExpressionValueStack *, uint64_t, float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesInOrder@CInteractionTrackerPositionAnimation@@MEAAXAEBUExpressionWalkContext@@@Z
    virtual void InsertDependenciesInOrder(ExpressionWalkContext const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ
    virtual void StartInContactWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z
    virtual void StartInertiaWorker(float, bool);
};
