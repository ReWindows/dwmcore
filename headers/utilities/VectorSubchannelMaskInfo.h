#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class VectorSubchannelMaskInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxMaskIndex@VectorSubchannelMaskInfo@@QEBAIXZ
    unsigned int GetMaxMaskIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z
    long InsertMaskElement(unsigned char);
};
