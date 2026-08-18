#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CBrushRenderingEffectFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z
    virtual long CreateRenderingEffect(WindissectOpaque, CRenderingEffect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CBrushRenderingEffectFactory@@UEBA?AW4RenderingEffectType@@XZ
    virtual int GetType() const;
};
