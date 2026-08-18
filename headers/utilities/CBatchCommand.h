#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CBatchCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z
    bool ApplyRenderState(IDrawListStateSink *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ
    CRenderingEffect * GetRenderingEffect() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z
    void InitializeForRendering(CDrawListEntry *, int, float, CMILMatrix const &, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CBatchCommand@@AEAAXXZ
    void Destroy();
};
