#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CDirtyRegionAnnotation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDirtyRegionAnnotation@@QEAA@XZ
    CDirtyRegionAnnotation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z
    int GetZ(CVisualTree const *, unsigned int, bool) const;
};
