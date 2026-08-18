#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CBlurRenderingGraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z
    static long Create(CResourceTag const &, int, D2D_VECTOR_2F const &, int, int, CBlurRenderingGraph * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z
    static void DeterminePreScale(EffectInput const &, EffectInput const &, int, D2D_VECTOR_2F const &, D2D_VECTOR_2F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z
    bool HasMatchingParameters(D2D_VECTOR_2F const &, int) const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBlurRenderingGraph@@EEAA@XZ
    virtual ~CBlurRenderingGraph();
};
