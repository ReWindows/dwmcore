#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CVisualSurfaceRenderStrategy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CSurfaceBrush const *, CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual long GetLayoutParameters(CSurfaceBrush const *, D2D_SIZE_F const &, D2D_SIZE_F *, D2D_RECT_F *, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHitTestable@CVisualSurfaceRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z
    virtual bool IsHitTestable(CSurfaceBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CVisualSurfaceRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z
    virtual bool IsOpaque(CSurfaceBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CVisualSurfaceRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CSurfaceBrush const *, CDrawingContext *, bool *) const;
};
