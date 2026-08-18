#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace CSparseStorage {
class AllocatedStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z
    static void ExpandStorage(WindissectOpaque * *, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z
    WindissectOpaque * FindSlot(unsigned int) const;
};
} // namespace CSparseStorage
