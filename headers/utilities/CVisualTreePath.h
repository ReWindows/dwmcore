#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CVisualTreePath {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z
    long Append(CVisual const *, CVisualTree const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z
    CVisualTreePath(CVisualTree const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ
    WindissectOpaque GetDebugString() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLast@CVisualTreePath@@QEAAJXZ
    long RemoveLast();
};
