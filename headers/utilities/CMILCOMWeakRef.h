#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CMILCOMWeakRef {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMILCOMWeakRef@@QEAA@PEAUIUnknown@@@Z
    CMILCOMWeakRef(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateWeakRef@CMILCOMWeakRef@@UEAAXXZ
    virtual void InvalidateWeakRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Resolve(_GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CMILCOMWeakRef@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
