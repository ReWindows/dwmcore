#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CSecondaryBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z
    void AddValidRect(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    bool IsRegionValid(WindissectOpaque const *, WindissectOpaque *);
};
