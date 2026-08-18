#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CSurfaceDrawListBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z
    void ComputeLocalToSourceTransform(Matrix3x3*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLocalToTextureTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z
    void ComputeLocalToTextureTransform(Matrix3x3*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSurface@CSurfaceDrawListBrush@@UEBA_NXZ
    virtual bool ContainsSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z
    static long CreateWithContentRect(CDrawListBitmap const &, SamplerMode, D2D_RECT_F const &, CSurfaceDrawListBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z
    static long CreateWithTextureTransform(CDrawListBitmap const &, SamplerMode, Matrix3x3const &, CSurfaceDrawListBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ
    bool IsBoundless() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsColorConversionRequired(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z
    void SetSnapToPixelsReference(D2D_VECTOR_2F const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurfaceDrawListBrush@@UEAA@XZ
    virtual ~CSurfaceDrawListBrush();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z
    CSurfaceDrawListBrush(CDrawListBitmap const &, SamplerMode, Matrix3x3const &, bool);
};
