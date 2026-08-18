#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CMegaRectBatchCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z
    long EmitGeometry(CD3DBatchExecutionContext *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void InitializeMegaRectVisibleRegion(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void OccludeBy(WindissectOpaque const &);
};
