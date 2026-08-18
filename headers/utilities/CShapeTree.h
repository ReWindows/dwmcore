#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CShapeTree {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CShapeTree@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShapeTree@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CShapeTree@@UEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CShapeTree@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShapeTree@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShapeTree@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z
    long RenderIntermediate(CDrawingContext *, D2D_SIZE_F const &, D2D_SIZE_F const &, WindissectOpaque const &, WindissectOpaque const &, int, IRenderTargetBitmap * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z
    static bool ComputePartialIntermediate(CMILMatrix const &, D2D_VECTOR_2F const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    long DrawShapes(CDrawingContext *, D2D_SIZE_F const &);
};
