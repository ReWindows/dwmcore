#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CPrimitiveGroupDrawListBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSurface@CPrimitiveGroupDrawListBrush@@UEBA_NXZ
    virtual bool ContainsSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z
    static long Create(CPrimitiveGroupDrawListGenerator *, SamplerMode, CPrimitiveGroupDrawListBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z
    virtual long EnumerateBrushes(CDrawingContext const *, long ( *)(CDrawListBrush const *, void *), void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsColorConversionRequired(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z
    virtual bool IsOfType(int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrimitiveGroupDrawListBrush@@UEAA@XZ
    virtual ~CPrimitiveGroupDrawListBrush();
};
