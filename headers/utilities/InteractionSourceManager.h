#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 27 member(s).
class InteractionSourceManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ
    D2DVector3 GetActiveManipulationCenterpoint() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z
    float GetActiveManipulationDelta(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z
    float GetActiveManipulationVelocity(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z
    CConditionalExpression * GetSourceCenterpointModifierForActiveManipulation(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z
    CConditionalExpression * GetSourceModifierForActiveManipulation(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ
    bool HasActiveManipulation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z
    void InsertDependenciesForAxis(ExpressionWalkContext const &, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionSourceManager@@QEAA@PEAVCInteractionTracker@@@Z
    InteractionSourceManager(CInteractionTracker *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z
    bool IsInertiaEnabledForAxis(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ
    bool IsPositionRoundingSuggestedForActiveManipulation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ
    void OnInteractionTrackerTransitionToCustomAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z
    void OnInteractionTrackerTransitionToIdle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z
    void OnInteractionTrackerTransitionToInContact(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ
    void OnInteractionTrackerTransitionToInertia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z
    void OnManipulationChanged(int, CManipulation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z
    long ProcessSetManipulations(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS const *, MarshaledManipulationInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ
    void ReconfigureAllManipulations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z
    void TelemetrySetPosition(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ
    CChainingHelper * TryGetActiveChainingHelper() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ
    CManipulation * TryGetActiveManipulation() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionSourceManager@@QEAA@XZ
    ~InteractionSourceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z
    void AddActiveManipulation(CManipulation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ
    void ClearActiveManipulations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ
    CInteraction * GetActiveInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z
    bool IsManipulationActive(CManipulation const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationInMap@InteractionSourceManager@@AEAA_NPEAVCManipulation@@@Z
    bool IsManipulationInMap(CManipulation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ
    void UpdateActiveManipulations();
};
