#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 28 member(s).
class CExpression {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExpression@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@CExpression@@UEAAPEAVCBaseExpression@@XZ
    virtual CBaseExpression * GetOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z
    virtual void InsertDependenciesInOrder(ExpressionWalkContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z
    long ProcessSetNodesInfo(CResourceTable *, tagMILCMD_EXPRESSION_SETNODESINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPERSISTENTCACHE@@PEBXI@Z
    long ProcessSetPersistentCache(CResourceTable *, tagMILCMD_EXPRESSION_SETPERSISTENTCACHE const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z
    long ProcessSetReferenceInfo(CResourceTable *, tagMILCMD_EXPRESSION_SETREFERENCEINFO const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z
    long ProcessSetSources(CResourceTable *, tagMILCMD_EXPRESSION_SETSOURCES const *, void const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExpression@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSourcesForOwner@CExpression@@UEAAJXZ
    virtual long RegisterSourcesForOwner();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExpression@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z
    virtual void SetOwner(CBaseExpression *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    virtual long CalculateValueWorker(CExpressionValueStack *, uint64_t, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyForEvaluation@CExpression@@MEBA_NXZ
    virtual bool IsReadyForEvaluation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z
    virtual void PrepareForCalculation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSources@CExpression@@IEAAXXZ
    void UnregisterSources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExpression@@MEAA@XZ
    virtual ~CExpression();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z
    int AdjustPropertyTypeWithMask(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z
    void LogCacheAccess(bool, unsigned int, CExpressionValue *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z
    long PopulateCacheFromInitialValue(unsigned int, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValue@@@Z
    bool ReadValueFromCache(ExpressionReferenceInfoWithCache const *, CExpressionValue *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z
    long RegisterSourceForAnimation(CBaseExpression *, ExpressionReferenceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z
    long ResolveReference(ExpressionReferenceInfo const &, CExpressionValue *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z
    long ResolveReferenceWithCache(ExpressionReferenceNode const *, CExpressionValue *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreValueToCache@CExpression@@AEBAJPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z
    long StoreValueToCache(ExpressionReferenceInfoWithCache const *, CExpressionValue const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z
    long ValidateNodes(unsigned int, unsigned char const *, unsigned int *);
};
