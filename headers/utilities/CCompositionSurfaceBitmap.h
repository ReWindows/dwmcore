#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 50 member(s).
class CCompositionSurfaceBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionSurfaceBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool CalcImageTransform(D2D_SIZE_F const &, CMILMatrix *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z
    static long Create(CComposition *, CCompositionSurfaceInfo *, CCompositionSurfaceBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z
    static long DrawContentBorders(CDrawingContext *, WindissectOpaque const &, WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    long DrawLetterboxingMargins(CDrawingContext *, D2D_SIZE_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ
    _D3DCOLORVALUE GetBorderColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z
    virtual long GetCurrentRenderingRealization(IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPresentCount@CCompositionSurfaceBitmap@@QEBAIXZ
    unsigned int GetLastPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUD2D_RECT_F@@@Z
    bool GetLetterboxingMargins(D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool GetScaledLetterboxingMargins(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ
    int GetSizePreference() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasApprovedCustomDuration@CCompositionSurfaceBitmap@@UEBA_NXZ
    virtual bool HasApprovedCustomDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinglePrimitive@CCompositionSurfaceBitmap@@UEBA_NXZ
    virtual bool HasSinglePrimitive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ
    bool HasSwapChainAttributes() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ
    virtual bool IsOpaque() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ
    bool IsSwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ
    virtual bool IsWhitePixelInTopLeft() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalid(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_NPEBVCRegion@@@Z
    virtual void NotifyUpdate(bool, CRegion const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z
    virtual long ProcessUpdate(CResourceTable const *, tagMILCMD_COMPOSITIONSURFACEBITMAP const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionSurfaceBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionSurfaceBitmap@@MEAA@XZ
    virtual ~CCompositionSurfaceBitmap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z
    long DrawLetterboxingMarginsInternal(CDrawingContext *, WindissectOpaque const &, CMILMatrix const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ
    IBitmapRealization * GetRenderingRealization() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z
    void SetSurfaceInfo(CCompositionSurfaceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ
    IBitmapRealization * TryGetRenderingRealization() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z
    bool UseLayoutSizeForBounds(D2D_SIZE_F const &) const;
};
