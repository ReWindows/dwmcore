#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ
    CBrushRenderingGraph * GetBrushGraph();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CBrush@@UEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CBrush@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrush@@IEAA@PEAVCComposition@@@Z
    CBrush(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z
    virtual long CreateLayoutGeometryDrawListBrush(CDrawingContext *, D2D_SIZE_F const &, CDrawListBrush * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrushGraph@CBrush@@MEAAJ_N@Z
    virtual long EnsureBrushGraph(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CBrush@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetAnimatedProperty(WindissectOpaque const *, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrush@@MEAA@XZ
    virtual ~CBrush();
};
