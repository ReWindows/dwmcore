#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace COverlayContext {
class CVisitedContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcContentOnTop@CVisitedContent@COverlayContext@@QEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    WindissectOpaque CalcContentOnTop(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInvertedContentOnTop@CVisitedContent@COverlayContext@@QEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    WindissectOpaque CalcInvertedContentOnTop(WindissectOpaque const &) const;
};
} // namespace COverlayContext
