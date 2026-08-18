#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CShapeDrawingContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CShapeDrawingContext@@QEAAJXZ
    long Render();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShapeDrawingContext@@QEAA@XZ
    ~CShapeDrawingContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z
    long ApplyTransformToDrawingContext(D2D_MATRIX_3X2_F const *);
};
