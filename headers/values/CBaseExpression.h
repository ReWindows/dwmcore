#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 41 member(s).
class CBaseExpression {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    long CalculateValue(CExpressionValueStack *, uint64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ
    void EnsureExpressionIsUnregistered();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@CBaseExpression@@UEAAPEAV1@XZ
    virtual CBaseExpression * GetOwner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerformanceCounter@CBaseExpression@@QEBAPEAVCExpressionPerformanceCounter@@XZ
    CExpressionPerformanceCounter * GetPerformanceCounter() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTracingCookie@CBaseExpression@@QEBAIXZ
    unsigned int GetTracingCookie() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z
    void InsertInOrder(ExpressionWalkContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoCompleteOnScreenOccluded@CBaseExpression@@UEBA_NXZ
    virtual bool IsAutoCompleteOnScreenOccluded() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirtyForFrame@CBaseExpression@@QEBA_NXZ
    bool IsDirtyForFrame() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CBaseExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ
    long NotifyAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ
    long NotifyAnimationDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXI@Z
    long ProcessAddInitialValueExpressions(CResourceTable *, tagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z
    virtual long ProcessSetBindingBroken(CResourceTable *, tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHasOwningTrigger@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETHASOWNINGTRIGGER@@@Z
    long ProcessSetHasOwningTrigger(CResourceTable *, tagMILCMD_BASEEXPRESSION_SETHASOWNINGTRIGGER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z
    long ProcessSetTarget(CResourceTable *, tagMILCMD_BASEEXPRESSION_SETTARGET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z
    long ProcessSetTracingCookie(CResourceTable *, tagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z
    long RegisterIndirectTarget(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSourcesForOwner@CBaseExpression@@UEAAJXZ
    virtual long RegisterSourcesForOwner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CBaseExpression@@UEAAXPEAV1@@Z
    virtual void SetOwner(CBaseExpression *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z
    long SetTarget(unsigned int, CResource *, unsigned int, int, int, unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ
    virtual long StartAsTriggeredAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysApplyValueOnTarget@CBaseExpression@@MEBA_NXZ
    virtual bool AlwaysApplyValueOnTarget() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z
    CBaseExpression(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ
    void ForceDependentAnimationsDirtied();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceExpressionGraphDirty@CBaseExpression@@MEAA_NXZ
    virtual bool ForceExpressionGraphDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ
    virtual bool IsReadyForEvaluation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ
    long NotifyAnimationStopped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ
    CResource * ResolveTargetNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChannelHandle@CBaseExpression@@IEAAJI@Z
    long SetChannelHandle(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual long SetOutputType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z
    long SetOutputValue(CExpressionValue const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z
    long SetOutputValueOnTarget(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldLogPerfStats@CBaseExpression@@IEBA_NXZ
    bool ShouldLogPerfStats() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ
    long TryRegisterWithExpressionManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseExpression@@MEAA@XZ
    virtual ~CBaseExpression();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z
    bool IsExpressionValueValid(CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetOutputValue@CBaseExpression@@AEAAXXZ
    void LogSetOutputValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z
    static long MergeValueWithMask(CExpressionValue const *, CExpressionValue const *, SubchannelMaskInfo const *, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z
    long NotifyAnimationStateChanged(int);
};
