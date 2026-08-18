#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CNullRenderStrategy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CNullRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CSurfaceBrush const *, CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutParameters@CNullRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual long GetLayoutParameters(CSurfaceBrush const *, D2D_SIZE_F const &, D2D_SIZE_F *, D2D_RECT_F *, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CNullRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CSurfaceBrush const *, CDrawingContext *, bool *) const;
};
