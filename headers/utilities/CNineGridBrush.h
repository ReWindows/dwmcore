#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 32 member(s).
class CNineGridBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNineGridBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNineGridBrush@@QEAA@PEAVCComposition@@_N@Z
    CNineGridBrush(CComposition *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCompositionSurface@CNineGridBrush@@UEBA_NXZ
    virtual bool HasCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingIntermediate@CNineGridBrush@@UEBA_NXZ
    virtual bool HasRenderingIntermediate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CNineGridBrush@@UEBA_NXZ
    virtual bool HasSwapChainContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z
    long ProcessSetInsetProperty(CResourceTable *, tagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z
    long ProcessSetIsCenterHollow(CResourceTable *, tagMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z
    long ProcessSetSource(CResourceTable *, tagMILCMD_NINEGRIDBRUSH_SETSOURCE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNineGridBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNineGridBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsets@CNineGridBrush@@QEAAXMMMM@Z
    void SetInsets(float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z
    long SetSource(CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z
    virtual long CreateLayoutGeometryDrawListBrush(CDrawingContext *, D2D_SIZE_F const &, CDrawListBrush * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z
    virtual long EnsureBrushGraph(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNineGridBrush@@MEAA@XZ
    virtual ~CNineGridBrush();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z
    static bool IsValidSourceResource(CResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z
    float * TryGetInsetFieldPointer(unsigned long);
};
