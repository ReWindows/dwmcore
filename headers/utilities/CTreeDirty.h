#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CTreeDirty {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTreeDirty@@QEAA@PEAVCVisualTree@@@Z
    CTreeDirty(CVisualTree *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool DoesIntersect(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ
    WindissectOpaque GetDirtyRects() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z
    void GetIntersectingRedrawRects(COcclusionContext const *, D2D_RECT_F const &, bool, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z
    WindissectOpaque GetOptimizedRect(unsigned int, WindissectOpaque const &, COcclusionContext const &, CRegion *, CMILMatrix const *, bool, WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectCount@CTreeDirty@@QEBAIXZ
    unsigned int GetRectCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnoptimizedBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetUnoptimizedBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CTreeDirty@@QEBA_NXZ
    bool IsEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Optimize@CTreeDirty@@QEAAXXZ
    void Optimize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullDirty@CTreeDirty@@QEAAXXZ
    void SetFullDirty();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ
    void ClearDirtyRectAnnotationLists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Merge@CTreeDirty@@AEAAXII@Z
    void Merge(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeDirtyRegionLists@CTreeDirty@@AEAAXII@Z
    void MergeDirtyRegionLists(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedrawRects@CTreeDirty@@AEAAXXZ
    void SetRedrawRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long _Add(CVisual *, bool, WindissectOpaque const &);
};
