#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CPrimitiveGroupRenderStrategy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CSurfaceBrush const *, CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(CSurfaceBrush const *, D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual long GetLayoutParameters(CSurfaceBrush const *, D2D_SIZE_F const &, D2D_SIZE_F *, D2D_RECT_F *, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CSurfaceBrush const *, CDrawingContext *, bool *) const;
};
