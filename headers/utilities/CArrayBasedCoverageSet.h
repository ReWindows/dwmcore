#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CArrayBasedCoverageSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z
    uint64_t CalcVisibleArea(WindissectOpaque const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z
    bool TrimCornerRect(WindissectOpaque const &, int) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z
    bool IsCovered(WindissectOpaque const &, int, bool, bool) const;
};
