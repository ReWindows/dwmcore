#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CInteractionTrackerBindingManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z
    void AddOrUpdatePendingInertiaStateChangeForBoundTrackers(CInteractionTracker *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z
    bool BoundTrackersHaveActiveCustomAnimations(CInteractionTracker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z
    void BringBoundTrackersPositionAndScaleInSync(CInteractionTracker const *, CInteractionTracker *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionTrackerBindingManager@@QEAA@PEAVCComposition@@@Z
    CInteractionTrackerBindingManager(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CInteractionTrackerBindingManager@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z
    long ProcessSetTrackerBindingMode(CResourceTable *, tagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z
    long RegisterIndirectTargetsForBoundTrackers(CInteractionTracker *, CBaseExpression *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z
    void RemoveTrackerBindings(CInteractionTracker *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z
    long SetCustomAnimationFinalValue(CInteractionTracker *, CKeyframeAnimation *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M@Z
    void SetRequestedBoundTrackerScale(CInteractionTracker *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z
    void TryUpdateBoundTrackerInertiaCallbackValues(CInteractionTracker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z
    void UpdateBoundTrackerPosition(CInteractionTracker *, D2DVector3const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z
    void UpdateBoundTrackerScale(CInteractionTracker *, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z
    void UpdateBoundTrackerState(CInteractionTracker *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionTrackerBindingManager@@UEAA@XZ
    virtual ~CInteractionTrackerBindingManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z
    void AddOrUpdateTrackerBindings(CInteractionTracker *, CInteractionTracker *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z
    void BringBoundTrackersStateInSync(CInteractionTracker *, CInteractionTracker *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z
    InertiaCallbackValues CalculateBoundTrackerInertiaCallbackValues(CInteractionTracker *, CInteractionTracker *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z
    void TransitionDisconnectedTrackersToIdle(CInteractionTracker *, CInteractionTracker *);
};
