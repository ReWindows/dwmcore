#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
class CVisualBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CVisualBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderingRealization@CVisualBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z
    virtual long GetCurrentRenderingRealization(IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CVisualBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CVisualBitmap@@UEBA_NXZ
    virtual bool IsOpaque() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CVisualBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CVisualBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualChanged@CVisualBitmap@@IEAAXXZ
    void OnVisualChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualBitmap@@MEAA@XZ
    virtual ~CVisualBitmap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z
    bool CanUseCVI(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ
    long EnsureCachedVisualImage();
};
