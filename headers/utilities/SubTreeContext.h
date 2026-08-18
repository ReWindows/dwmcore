#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
namespace CPreComputeContext {
class SubTreeContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z
    long AddRectToDirtyRegion(WindissectOpaque const &, CVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z
    SubTreeContext(WindissectOpaque &&);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long AddWorldBoundsToDirtyRegion(CVisual *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z
    void EndWalk(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@AEBA_NXZ
    bool IsDirtyCollectionEnabled() const;
};
} // namespace CPreComputeContext
