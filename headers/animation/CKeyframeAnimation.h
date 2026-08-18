#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 45 member(s).
class CKeyframeAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyframeAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z
    CKeyframeAnimation(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    virtual long CalculateValueWorker(CExpressionValueStack *, uint64_t, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ
    float GetAnimationTimeLength() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ
    KeyframeValue const * GetLastKeyframeValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z
    long GetSampledStartingValue(CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z
    long Initialize(CResource *, unsigned int, int, int, int, unsigned char, uint64_t, int, float, int, float, int, unsigned int, KeyframeData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z
    virtual void InsertDependenciesInOrder(ExpressionWalkContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ
    virtual bool IsAutoCompleteOnScreenOccluded() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ
    virtual bool IsReadyForEvaluation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCalculation@CKeyframeAnimation@@UEAAXPEA_N@Z
    virtual void PrepareForCalculation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z
    long ProcessAddExpressionResources(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z
    virtual long ProcessSetBindingBroken(CResourceTable *, tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z
    long ProcessSetKeyframeData(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z
    long ProcessSetPathData(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_SETPATHDATA const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPlaybackRate@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE@@@Z
    long ProcessSetPlaybackRate(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z
    long ProcessSetProgress(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_SETPROGRESS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetProgressBehavior@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESSBEHAVIOR@@@Z
    long ProcessSetProgressBehavior(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_SETPROGRESSBEHAVIOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z
    long ProcessSetSeekState(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z
    long ProcessUpdatePlaybackState(CResourceTable *, tagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyframeAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyframeAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ
    virtual long StartAsTriggeredAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyframeAnimation@@UEAA@XZ
    virtual ~CKeyframeAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z
    void ReplaceLastKeyframeValueConstant(CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z
    long SampleExpressionsAndStartingValue(CExpressionValueStack *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual long SetOutputType(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z
    long AddKeyframeData(int, float, KeyframeData const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z
    void AdjustAllKeyframeTime(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z
    static long DetermineCoordinateSpace(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ
    float GetGlobalPlaybackRate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z
    float GetTimePositionWithinIteration(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z
    void PrepareSequenceForIteration(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z
    void ProcessExpressionKeyFrames(CExpressionValueStack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z
    long Reset(bool, CExpressionValueStack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ
    long SampleStartingValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z
    long SetInitialDelay(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z
    long SetIterationInfo(float, int, float, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z
    long SetKeyFrameData(int, int, KeyframeData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z
    long UpdatePlaybackState(int, bool, uint64_t);
};
