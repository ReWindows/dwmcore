#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CCornerRects {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesIntersect@CCornerRects@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool DoesIntersect(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z
    void FromData(CRoundedRectangleGeometryData const &, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@CCornerRects@@QEAA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool Intersect(WindissectOpaque const &);
};
