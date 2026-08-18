#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 24 member(s).
class CGradientBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CGradientBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ
    virtual void NotifyAtlasEntryInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAtlasEntryReallocated@CGradientBrush@@UEAAXXZ
    virtual void NotifyAtlasEntryReallocated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z
    long ProcessSetColorStops(CResourceTable *, tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETEXTENDMODE@@@Z
    long ProcessSetExtendMode(CResourceTable *, tagMILCMD_GRADIENTBRUSH_SETEXTENDMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE@@@Z
    long ProcessSetInterpolationSpace(CResourceTable *, tagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMappingMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETMAPPINGMODE@@@Z
    long ProcessSetMappingMode(CResourceTable *, tagMILCMD_GRADIENTBRUSH_SETMAPPINGMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransform@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETTRANSFORM@@@Z
    long ProcessSetTransform(CResourceTable *, tagMILCMD_GRADIENTBRUSH_SETTRANSFORM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z
    void SetStops(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CGradientBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z
    CGradientBrush(CComposition *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z
    long GetCurrentD2DRadialGradientBrush(CDrawingContext *, ID2D1RadialGradientBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long GetCurrentSurface(CDrawingContext *, IBitmapResource * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z
    long InferVisualToTextureTransform(D2D_POINT_2F const (&)[3], WindissectOpaque const &, D2D_MATRIX_3X2_F *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGradientBrush@@MEAA@XZ
    virtual ~CGradientBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenStops@CGradientBrush@@AEAAXXZ
    void FlattenStops();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z
    long Generate(CD3DDevice *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateGradient@CGradientBrush@@AEAAXXZ
    void InvalidateGradient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z
    void UpdateStop(IUnknown const *);
};
