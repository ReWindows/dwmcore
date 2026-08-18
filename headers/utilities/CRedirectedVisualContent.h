#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CRedirectedVisualContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CRedirectedVisualContent@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRedirectedVisualContent@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ
    void ComputeBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z
    static long Create(CVisual *, CRedirectedVisualContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinglePrimitive@CRedirectedVisualContent@@UEBA_NXZ
    virtual bool HasSinglePrimitive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CRedirectedVisualContent@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRedirectedVisualContent@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRedirectedVisualContent@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z
    CRedirectedVisualContent(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRedirectedVisualContent@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRedirectedVisualContent@@MEAA@XZ
    virtual ~CRedirectedVisualContent();
};
