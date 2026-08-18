#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
namespace COverlayContext {
class OverlayPlaneInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnyOffsetOrScaling@OverlayPlaneInfo@COverlayContext@@QEBA_NAEBUD2D_SIZE_U@@@Z
    bool AnyOffsetOrScaling(D2D_SIZE_U const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z
    bool CalcVisibleArea(CDesktopTree const *, CMILMatrix const &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z
    void CopyTransientProperties(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z
    WindissectOpaque GetLocalClipRect(CMILMatrix const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ
    bool IsDFlipOnMPO() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ
    bool IsRevokable() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z
    OverlayPlaneInfo(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z
    OverlayPlaneInfo(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_KAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCCornerRects@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@8_N9W4OverlaySize@@@Z
    OverlayPlaneInfo(COverlayContext *, CVisual const *, CCompositionSurfaceInfo *, uint64_t, DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const &, WindissectOpaque const &, CCornerRects const &, CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, bool, bool, int);
};
} // namespace COverlayContext
