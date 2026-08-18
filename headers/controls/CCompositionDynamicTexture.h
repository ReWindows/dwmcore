#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
class CCompositionDynamicTexture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CCompositionDynamicTexture@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionDynamicTexture@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z
    long AppendDirtyRects(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CCompositionDynamicTexture@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CCompositionDynamicTexture@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CCompositionDynamicTexture@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CCompositionDynamicTexture@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinglePrimitive@CCompositionDynamicTexture@@UEBA_NXZ
    virtual bool HasSinglePrimitive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CCompositionDynamicTexture@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrawListCacheDirty@CCompositionDynamicTexture@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    virtual bool IsDrawListCacheDirty(CDrawListCache *, CDrawingContext *, D2D_SIZE_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CCompositionDynamicTexture@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextureChanged@CCompositionDynamicTexture@@QEAAXXZ
    void OnTextureChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionDynamicTexture@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionDynamicTexture@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z
    long SetDirtyRects(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionDynamicTexture@@UEAA@XZ
    virtual ~CCompositionDynamicTexture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCompositionDynamicTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
