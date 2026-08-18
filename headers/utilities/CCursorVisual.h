#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CCursorVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z
    virtual long AddBoundsToDirtyRegion(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z
    virtual long CollectOcclusion(COcclusionContext *, COcclusionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetContentBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z
    WindissectOpaque GetHardwareShapeBounds(CDesktopTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContent@CCursorVisual@@UEBA_NXZ
    virtual bool HasContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ
    virtual bool HasNonEmptyContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestContent@CCursorVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTestContent(bool, D2D_POINT_2F const &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursor@CCursorVisual@@UEBA_NXZ
    virtual bool IsCursor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaskInvert@CCursorVisual@@QEBA_NXZ
    bool IsMaskInvert() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z
    void ProcessStateChanges(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z
    void RemoveMonitorData(_LUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderContent(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNotificationMode@CCursorVisual@@QEAAXXZ
    void UpdateNotificationMode();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCursorVisual@@IEAA@PEAVCComposition@@@Z
    CCursorVisual(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleShape@CCursorVisual@@IEBA_NXZ
    bool HasVisibleShape() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ
    void OnCursorIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateEventChanged@CCursorVisual@@IEAAXXZ
    void OnUpdateEventChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCursorVisual@@MEAA@XZ
    virtual ~CCursorVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z
    long DrawCrosshair(CDrawingContext *) const;
};
