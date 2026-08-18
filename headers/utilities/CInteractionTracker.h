#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 110 member(s).
class CInteractionTracker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z
    void AddOrUpdatePendingInertiaStateChange(int, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ
    bool AreInteractionAnimationsAlive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z
    int BoundaryFromValue(float, int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z
    CInteractionTracker(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z
    static void CheckTargetsForInteractionSource(ExpressionReferenceInfo const *, CResource *, CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z
    float ClampValueToBoundary(int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z
    float GetCurrentValue(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z
    float GetCurrentVelocity(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z
    float GetInertiaDecayRate(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaModifierType@CInteractionTracker@@QEBA?AW4InertiaModifierType@@W4ScrollAxis@@H@Z
    int GetInertiaModifierType(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z
    float GetMostRecentCenterPoint(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ
    bool HasDefaultAnimations() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImpulse@CInteractionTracker@@QEBA_NXZ
    bool HasImpulse() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ
    bool HasRunningDefaultPositionAnimation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ
    bool HasRunningDefaultScaleAnimation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z
    void InsertDependenciesForAxis(ExpressionWalkContext const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z
    void InsertDependenciesForProperty(ExpressionWalkContext const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CInteractionTracker@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ
    bool IsOutOfBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z
    long ProcessApplyPositionImpulse(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z
    long ProcessApplyPositionShift(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z
    long ProcessApplyScaleImpulse(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z
    long ProcessDwmRestartCompleted(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z
    long ProcessDwmStarted(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_DWMSTARTED const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCallbackPropertyIdSet@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETCALLBACKPROPERTYIDSET@@@Z
    long ProcessSetCallbackPropertyIdSet(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETCALLBACKPROPERTYIDSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z
    long ProcessSetInertiaCenterpointX(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z
    long ProcessSetInertiaCenterpointY(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z
    long ProcessSetInertiaDecayRates(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z
    long ProcessSetInertiaModifierAnimations(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInternalProperties@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINTERNALPROPERTIES@@PEBXI@Z
    long ProcessSetInternalProperties(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETINTERNALPROPERTIES const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z
    long ProcessSetManipulations(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z
    long ProcessSetMaxPosition(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMaxScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXSCALE@@@Z
    long ProcessSetMaxScale(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETMAXSCALE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z
    long ProcessSetMinPosition(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETMINPOSITION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMinScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMINSCALE@@@Z
    long ProcessSetMinScale(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETMINSCALE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z
    long ProcessSetRequestedDeltaPosition(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z
    long ProcessSetRequestedPosition(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z
    long ProcessSetRequestedPositionAnimation(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z
    long ProcessSetRequestedScale(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z
    long ProcessSetRequestedScaleAnimation(CResourceTable *, tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z
    long RegisterIndirectTargetsForBoundTrackers(CBaseExpression *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z
    long SelectInertiaModifierForAxis(int, CExpressionValueStack *, uint64_t, IScalarForce * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z
    bool ShouldChainAllForAxis(int, CManipulation const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z
    bool ShouldChainForAxis(int, CManipulation const *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z
    long UpdateCenterPointForState(CExpressionValueStack *, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z
    bool WasInertiaStartedByImpulse(int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionTracker@@UEAA@XZ
    virtual ~CInteractionTracker();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z
    void AddPendingStateChange(int, D2DVector3, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z
    long AnimateToScale(float, D2DVector2const &, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z
    bool ApplyPositionImpulse(D2DVector3const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z
    void ApplyPositionShift(int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z
    bool ApplyScaleImpulse(float, D2DVector2const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z
    void BoostCompositorClock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z
    long CalculateCenterPointForAxis(CExpressionValueStack *, uint64_t, int, int, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ
    InertiaCallbackValues CalculateInertiaCallbackValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z
    float CalculatePositionAnimationDuration(D2DVector3const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z
    float CalculateScaleAnimationDuration(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z
    bool CheckAndUnRegisterDefaultAnimations(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForIdle@CInteractionTracker@@AEAAXXZ
    void CheckForIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ
    void CheckForOutOfBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z
    void ClearCustomAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z
    long CreateAndStartKeyframeAnimation(int, int, D2DVector4const &, float, CScrollKeyframeAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z
    void DemoteToBoundTracker(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z
    void DestroyDefaultAnimations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ
    void DestroyInteractionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ
    long EnsureInteractionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z
    void EnsurePositionIsGreaterThanOrEqualToMin(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z
    void EnsurePositionIsLessThanOrEqualToMax(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ
    void EnsureScaleIsGreaterThanOrEqualToMin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ
    void EnsureScaleIsLessThanOrEqualToMax();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z
    void GetAnimationForAxis(int, CScrollAnimation * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z
    int GetIndexOfCustomAnimation(IUnknown const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z
    D2DVector3 GetScaleAdjustedPositionIfNeeded(D2DVector3const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ
    WindissectOpaque * GetWeakRefToSelf();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ
    bool HasActiveCustomAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z
    void LogBoostCompositorClock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z
    void NotifyRequestIgnored(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ
    void ProcessMousewheelManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z
    long ScrollToPosition(D2DVector3const &, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ
    void SendPendingCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z
    void SendPendingStateChangeCallbacks(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z
    bool SendValuesChangedCallbackIfNecessary(D2DVector3, float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z
    bool SetCustomAnimation(CBaseExpression *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z
    void SetMaxPosition(D2DVector3const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxScale@CInteractionTracker@@AEAAXM@Z
    void SetMaxScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z
    void SetMinPosition(D2DVector3const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinScale@CInteractionTracker@@AEAAXM@Z
    void SetMinScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z
    void SetPosition(D2DVector3const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z
    void SetPositionInertiaDecayRate(D2DVector3const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z
    bool SetRequestedPosition(D2DVector3const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z
    bool SetRequestedScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z
    void SetScale(float, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z
    void SetScaleInertiaDecayRate(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z
    void SetState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z
    bool ShouldNotify(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z
    void StopCustomAndDefaultAnimations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z
    void StopCustomAnimation(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z
    void StopCustomAnimations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z
    bool TransitionToCustomAnimation(CBaseExpression *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToIdle@CInteractionTracker@@AEAAXXZ
    void TransitionToIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToInContact@CInteractionTracker@@AEAAXXZ
    void TransitionToInContact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z
    bool TransitionToInertia(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ
    void UpdatePositionRoundingSuggestion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z
    static long s_OnIdleAtFrameBegin(void *);
};
