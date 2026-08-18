#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CSharedSection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedSection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTION@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_SHAREDSECTION const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharedSection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedSection@@UEAAKXZ
    virtual unsigned long Release();
};
