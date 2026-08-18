#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CVisualReference {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualReference@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualReference@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualReference@@UEAAKXZ
    virtual unsigned long Release();
};
