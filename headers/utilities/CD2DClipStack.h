#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CD2DClipStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z
    long Push(D2D_RECT_F const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushExact@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z
    long PushExact(D2D_RECT_F const &, int);
};
