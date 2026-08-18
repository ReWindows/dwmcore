#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CProjectedShadowApproxBlurGraphBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z
    static long Build(CBrush *, CBrush *, CBrushRenderingGraph * *, ::Windows::UI::Composition::IEffectInstance * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z
    long AddApproxBlurBrush(CBrush *, CBrush *, CRenderingTechniqueFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z
    long Build(CBrush *, CBrush *, ::Windows::UI::Composition::IEffectInstance * *);
};
