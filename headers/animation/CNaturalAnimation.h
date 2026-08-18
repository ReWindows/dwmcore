#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 43 member(s).
class CNaturalAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNaturalAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysSetProperty@CNaturalAnimation@@UEBA_NXZ
    virtual bool AlwaysSetProperty() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z
    CNaturalAnimation(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    virtual long CalculateValueWorker(CExpressionValueStack *, uint64_t, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z
    long GetForceForAxis(int, float, float, IScalarForce * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z
    void GetVector3Force(CVector3Force * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesInOrder@CNaturalAnimation@@UEAAXAEBUExpressionWalkContext@@@Z
    virtual void InsertDependenciesInOrder(ExpressionWalkContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CNaturalAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCalculation@CNaturalAnimation@@UEAAXPEA_N@Z
    virtual void PrepareForCalculation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z
    virtual long ProcessSetBindingBroken(CResourceTable *, tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z
    long ProcessSetBounceParameters(CResourceTable *, tagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z
    long ProcessSetCommonParameters(CResourceTable *, tagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFinalValue@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETFINALVALUE@@@Z
    long ProcessSetFinalValue(CResourceTable *, tagMILCMD_NATURALANIMATION_SETFINALVALUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInitialValue@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETINITIALVALUE@@@Z
    long ProcessSetInitialValue(CResourceTable *, tagMILCMD_NATURALANIMATION_SETINITIALVALUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInitialVelocity@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETINITIALVELOCITY@@@Z
    long ProcessSetInitialVelocity(CResourceTable *, tagMILCMD_NATURALANIMATION_SETINITIALVELOCITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z
    long ProcessSetSpringParameters(CResourceTable *, tagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNaturalAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNaturalAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ
    virtual long StartAsTriggeredAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNaturalAnimation@@UEAA@XZ
    virtual ~CNaturalAnimation();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputType@CNaturalAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual long SetOutputType(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ
    float CalculateAnimationElapsedTimeInSeconds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z
    void CalculateValue(CExpressionValueStack *, uint64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearState@CNaturalAnimation@@AEAAXXZ
    void ClearState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z
    void EnsureAccelerator(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z
    void ExpressionValueFromInternalValue(WindissectOpaque, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ
    bool GenerateVector3Basis();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ
    WindissectOpaque GetStopValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForces@CNaturalAnimation@@AEAAXXZ
    void InitializeForces();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ
    bool IsPastDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z
    WindissectOpaque PeekStackValue(CExpressionValueStack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z
    void PushValueToStack(WindissectOpaque, CExpressionValueStack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ
    long SampleInitialValueAndFinalValueIfNecessary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z
    long SetScalarProperty(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z
    void SetStartTimeIfNecessary(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z
    long SetTimespanProperty(unsigned int, TimeSpan const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z
    long SetVector2Property(unsigned int, D2DVector2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z
    long SetVector3Property(unsigned int, D2DVector3const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ
    long SetupAnimationIfNecessary();
};
