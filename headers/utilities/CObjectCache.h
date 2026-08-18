#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CObjectCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@CObjectCache@@QEAAPEAX_K@Z
    void * Alloc(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CObjectCache@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CObjectCache@@QEAAXPEAX@Z
    void Free(void *);
};
