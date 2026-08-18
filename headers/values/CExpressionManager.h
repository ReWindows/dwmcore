#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 25 member(s).
class CExpressionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExpressionToBeRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z
    void AddExpressionToBeRemoved(CBaseExpression *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTriggeredAnimation@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z
    void AddTriggeredAnimation(CBaseExpression *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CExpressionManager@@SAJPEAPEAV1@@Z
    static long Create(CExpressionManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z
    void EnsureAutoCompleteOnOccludedAnimationRemoved(CBaseExpression *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z
    void InsertExpressionsInOrderForTarget(ExpressionWalkContext const &, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z
    ExpressionListEntry * LookupExpressionsForTarget(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInteractionTrackerExpressionProcessingComplete@CExpressionManager@@QEAAXXZ
    void NotifyInteractionTrackerExpressionProcessingComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z
    long QueueAnimationStateChange(int, CBaseExpression *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z
    void RegisterInteractionTrackerNotification(CInteractionTracker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExpressionToBeRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z
    void RemoveExpressionToBeRemoved(CBaseExpression *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z
    void SuspendAnimations(unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterBatchProcessingCompleteListener@CExpressionManager@@QEAAXPEAVIBatchProcessingCompleteListener@@@Z
    void UnRegisterBatchProcessingCompleteListener(IBatchProcessingCompleteListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z
    void UnregisterExpression(CBaseExpression *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z
    void UpdateExpressions(uint64_t, uint64_t);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExpressionManager@@AEAA@XZ
    CExpressionManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ
    void FlushQueuedSuspendAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z
    long InsertExpressionIntoTargetMap(CTargetMapEntry &, CBaseExpression *, SubchannelMaskInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimationBeSuspended@CExpressionManager@@AEAA_NPEAVCBaseExpression@@@Z
    bool ShouldAnimationBeSuspended(CBaseExpression *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkExpressionList@CExpressionManager@@CAXAEAV?$DynArray@PEAVCBaseExpression@@$00@@@Z
    static void ShrinkExpressionList(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkQueuedStateChanges@CExpressionManager@@AEAAXXZ
    void ShrinkQueuedStateChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z
    void UnregisterExpressionWorker(CBaseExpression *, WindissectOpaque *, unsigned int, SubchannelMaskInfo *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z
    void UpdateExpressionsWorker(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExpressionManager@@EEAA@XZ
    virtual ~CExpressionManager();
};
