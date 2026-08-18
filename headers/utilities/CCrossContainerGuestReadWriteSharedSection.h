#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CCrossContainerGuestReadWriteSharedSection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCrossContainerGuestReadWriteSharedSection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCrossContainerGuestReadWriteSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSharedSectionId@CCrossContainerGuestReadWriteSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION_SETSHAREDSECTIONID@@@Z
    long ProcessSetSharedSectionId(CResourceTable *, tagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION_SETSHAREDSECTIONID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CCrossContainerGuestReadWriteSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCrossContainerGuestReadWriteSharedSection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCrossContainerGuestReadWriteSharedSection@@UEAAKXZ
    virtual unsigned long Release();
};
