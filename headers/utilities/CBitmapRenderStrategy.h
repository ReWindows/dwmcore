#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CBitmapRenderStrategy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z
    static void GetBitmap(CSurfaceBrush const *, IBitmapResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CSurfaceBrush const *, CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual long GetLayoutParameters(CSurfaceBrush const *, D2D_SIZE_F const &, D2D_SIZE_F *, D2D_RECT_F *, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z
    static bool HasRenderingRealization(IBitmapResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z
    virtual bool IsOpaque(CSurfaceBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CSurfaceBrush const *, CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForSurfaceNotifications@CBitmapRenderStrategy@@UEBA_NPEBVCResource@@@Z
    virtual bool ListenForSurfaceNotifications(CResource const *) const;
};
