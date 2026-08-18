#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CColorDrawListBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSurface@CColorDrawListBrush@@UEBA_NXZ
    virtual bool ContainsSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z
    static long Create(_D3DCOLORVALUE const &, CColorDrawListBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorConversionRequired@CColorDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsColorConversionRequired(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CColorDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z
    virtual bool IsOfType(int) const;
};
