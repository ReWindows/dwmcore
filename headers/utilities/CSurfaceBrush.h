#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 48 member(s).
class CSurfaceBrush {
public:
    class CSurfaceRenderStrategy;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSurfaceBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z
    CSurfaceBrush(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z
    long ComputeLayout(D2D_SIZE_F const &, WindissectOpaque *, CShape * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiftedOverlayType@CSurfaceBrush@@UEBA?AW4LiftedOverlayType@@XZ
    virtual int GetLiftedOverlayType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@CSurfaceBrush@@QEBAPEAVCResource@@XZ
    CResource * GetSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCompositionSurface@CSurfaceBrush@@UEBA_NXZ
    virtual bool HasCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingIntermediate@CSurfaceBrush@@UEBA_NXZ
    virtual bool HasRenderingIntermediate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CSurfaceBrush@@UEBA_NXZ
    virtual bool HasSwapChainContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CSurfaceBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z
    long ProcessSetHorizontalAlignment(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z
    long ProcessSetInterpolationMode(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSnapToPixels@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS@@@Z
    long ProcessSetSnapToPixels(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStretch@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSTRETCH@@@Z
    long ProcessSetStretch(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETSTRETCH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSuperDownSample@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSUPERDOWNSAMPLE@@@Z
    long ProcessSetSuperDownSample(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETSUPERDOWNSAMPLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z
    long ProcessSetSurface(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETSURFACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z
    long ProcessSetTransform(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetVerticalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT@@@Z
    long ProcessSetVerticalAlignment(CResourceTable *, tagMILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSurfaceBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSurfaceBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalAlignment@CSurfaceBrush@@QEAAJM@Z
    long SetHorizontalAlignment(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z
    long SetSurface(CResource *, WindissectOpaque const &, WindissectOpaque const *, WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z
    long SetTransform(CComponentTransform2D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalAlignment@CSurfaceBrush@@QEAAJM@Z
    long SetVerticalAlignment(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z
    bool TransformDirtyRegion(CMILMatrix const *, D2D_SIZE_F const &, CRectanglesShape const &, CRectanglesShape *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z
    static WindissectOpaque const * FindCommonRenderStrategy(CResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CSurfaceBrush@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurfaceBrush@@MEAA@XZ
    virtual ~CSurfaceBrush();
};
