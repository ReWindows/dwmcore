#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CEmptyRegionDrawListBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSurface@CEmptyRegionDrawListBrush@@UEBA_NXZ
    virtual bool ContainsSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z
    virtual long EnumerateBrushes(CDrawingContext const *, long ( *)(CDrawListBrush const *, void *), void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorConversionRequired@CEmptyRegionDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsColorConversionRequired(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CEmptyRegionDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z
    virtual bool IsOfType(int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEmptyRegionDrawListBrush@@UEAA@XZ
    virtual ~CEmptyRegionDrawListBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z
    long Initialize(CDrawingContext *, D2D_RECT_F const &);
};
