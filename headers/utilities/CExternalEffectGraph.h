#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CExternalEffectGraph {
public:
    class CGraphRenderingContext;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z
    long Render(CDrawingContext *, EffectInput const &, EffectInput *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExternalEffectGraph@@MEAA@XZ
    virtual ~CExternalEffectGraph();
};
