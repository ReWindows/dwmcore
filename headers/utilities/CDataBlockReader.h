#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CDataBlockReader {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z
    long GetFirstItemSafe(unsigned int *, void const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z
    long GetNextItemSafe(unsigned int *, void const * *, unsigned int *);
};
