#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CMILPoolResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMILPoolResource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMILPoolResource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMILPoolResource@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMILPoolResource@@IEAA@PEAVIMILPoolManager@@@Z
    CMILPoolResource(IMILPoolManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CMILPoolResource@@MEAAXXZ
    virtual void FinalRelease();
};
