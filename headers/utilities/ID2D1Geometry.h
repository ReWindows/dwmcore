#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class ID2D1Geometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z
    long FillContainsPoint(D2D_POINT_2F, D2D_MATRIX_3X2_F const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z
    long Outline(D2D_MATRIX_3X2_F const *, ID2D1SimplifiedGeometrySink *) const;
};
