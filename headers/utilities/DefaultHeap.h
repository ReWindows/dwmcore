#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class DefaultHeap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@DefaultHeap@@SAPEAX_K@Z
    static void * Alloc(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocClear@DefaultHeap@@SAPEAX_K@Z
    static void * AllocClear(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@DefaultHeap@@SAXPEAX@Z
    static void Free(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z
    static void * Realloc(void *, uint64_t);
};
