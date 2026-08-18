#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CLineSegment {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLineSegment@@QEAA@XZ
    CLineSegment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z
    bool Intersects(CLineSegment const &, WindissectOpaque*) const;
};
