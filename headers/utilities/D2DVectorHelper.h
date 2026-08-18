#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class D2DVectorHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z
    D2D_VECTOR_4F CalculatePlane(D2D_VECTOR_4F const &, D2D_VECTOR_4F const &, D2D_VECTOR_4F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z
    D2D_VECTOR_4F PlaneVectorIntersection(D2D_VECTOR_4F const &, D2D_VECTOR_4F const &, D2D_VECTOR_4F const &);
};
