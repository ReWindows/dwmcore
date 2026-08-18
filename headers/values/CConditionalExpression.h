#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 20 member(s).
class CConditionalExpression {
public:
    class ConditionExpressionListEntry;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConditionalExpression@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z
    CConditionalExpression(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    virtual long CalculateValueWorker(CExpressionValueStack *, uint64_t, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z
    void GetSampledConditionAnimation(CBaseExpression * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z
    long GetValue(CExpressionValueStack *, uint64_t, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z
    virtual void InsertDependenciesInOrder(ExpressionWalkContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    long IsAnyConditionSatisfied(CExpressionValueStack *, uint64_t, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CConditionalExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCalculation@CConditionalExpression@@UEAAXPEA_N@Z
    virtual void PrepareForCalculation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z
    long ProcessAddConditionAnimationResources(CResourceTable *, tagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z
    static long ProcessConditionalExpression(CConditionalExpression *, CExpressionValueStack *, uint64_t, int, bool *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION@@@Z
    long ProcessSetDefaultAnimation(CResourceTable *, tagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSelection@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_SETSELECTION@@@Z
    long ProcessSetSelection(CResourceTable *, tagMILCMD_CONDITIONALEXPRESSION_SETSELECTION const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConditionalExpression@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConditionalExpression@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConditionalExpression@@UEAA@XZ
    virtual ~CConditionalExpression();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z
    long AddStackValueToSum(CExpressionValue *, CExpressionValueStack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z
    long CalculateConditionValue(unsigned int, CExpressionValueStack *, uint64_t, bool *);
};
