#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CInjectionAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInjectionAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceExpressionGraphDirty@CInjectionAnimation@@UEAA_NXZ
    virtual bool ForceExpressionGraphDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDependenciesInOrder@CInjectionAnimation@@UEAAXAEBUExpressionWalkContext@@@Z
    virtual void InsertDependenciesInOrder(ExpressionWalkContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CInjectionAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z
    long ProcessSetInjectionData(CResourceTable *, tagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInjectionAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInjectionAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInjectionAnimation@@UEAA@XZ
    virtual ~CInjectionAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    virtual long CalculateValueWorker(CExpressionValueStack *, uint64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCalculation@CInjectionAnimation@@MEAAXPEA_N@Z
    virtual void PrepareForCalculation(bool *);
};
