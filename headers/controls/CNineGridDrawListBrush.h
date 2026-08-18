#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CNineGridDrawListBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSurface@CNineGridDrawListBrush@@UEBA_NXZ
    virtual bool ContainsSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z
    virtual long EnumerateBrushes(CDrawingContext const *, long ( *)(CDrawListBrush const *, void *), void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorConversionRequired@CNineGridDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsColorConversionRequired(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z
    virtual bool IsOfType(int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNineGridDrawListBrush@@UEAA@XZ
    virtual ~CNineGridDrawListBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNineGridDrawListBrush@@AEAAJXZ
    long Initialize();
};
