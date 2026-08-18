#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CLegacyAnimationTrigger {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacyAnimationTrigger@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLegacyAnimationTrigger@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z
    long ProcessTrigger(CResourceTable *, tagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacyAnimationTrigger@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacyAnimationTrigger@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyAnimationTrigger@@UEAA@XZ
    virtual ~CLegacyAnimationTrigger();
};
