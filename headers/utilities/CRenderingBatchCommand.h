#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CRenderingBatchCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z
    bool ApplyRenderState(IDrawListStateSink *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z
    long EmitGeometry(CD3DBatchExecutionContext *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ
    CRenderingEffect * GetRenderingEffect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void GetWorldBounds(WindissectOpaque *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z
    void EmitWarpFastPathGeometry(CD3DBatchExecutionContext *) const;
};
