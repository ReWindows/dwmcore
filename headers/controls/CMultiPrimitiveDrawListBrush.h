#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CMultiPrimitiveDrawListBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSurface@CMultiPrimitiveDrawListBrush@@UEBA_NXZ
    virtual bool ContainsSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z
    virtual long EnumerateBrushes(CDrawingContext const *, long ( *)(CDrawListBrush const *, void *), void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorConversionRequired@CMultiPrimitiveDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsColorConversionRequired(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CMultiPrimitiveDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z
    virtual bool IsOfType(int) const;
};
