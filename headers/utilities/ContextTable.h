#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class ContextTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z
    void * Find(_SEB_RPC_PUBLISH_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z
    unsigned long Insert(_SEB_RPC_PUBLISH_DATA *, void *);
};
