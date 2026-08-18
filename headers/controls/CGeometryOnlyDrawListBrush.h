#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CGeometryOnlyDrawListBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSurface@CGeometryOnlyDrawListBrush@@UEBA_NXZ
    virtual bool ContainsSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z
    static long Create(CGeometryOnlyDrawListBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorConversionRequired@CGeometryOnlyDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsColorConversionRequired(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z
    virtual bool IsOfType(int) const;
};
