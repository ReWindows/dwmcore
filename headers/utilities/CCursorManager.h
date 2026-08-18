#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CCursorManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z
    bool TryClaimCursorState(uint64_t, CCursorVisual *, uint64_t, CCursorState * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCursorManager@@QEAA@XZ
    ~CCursorManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z
    long EnsureCursorState(uint64_t, CCursorState * *);
};
