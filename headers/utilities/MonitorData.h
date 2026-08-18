#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
namespace CCursorState {
class MonitorData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcShapeRects@MonitorData@CCursorState@@QEBA_NAEBUD2D_POINT_2F@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1@Z
    bool CalcShapeRects(D2D_POINT_2F const &, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z
    MonitorData(WindissectOpaque &&);
};
} // namespace CCursorState
