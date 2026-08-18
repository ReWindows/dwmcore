#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CCommonRenderingEffectFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z
    long CreateRenderingEffect(CDrawListBitmap const &, SamplerMode, CDrawListBitmap const &, SamplerMode, CRenderingEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z
    virtual long CreateRenderingEffect(WindissectOpaque, CRenderingEffect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CCommonRenderingEffectFactory@@UEBA?AW4RenderingEffectType@@XZ
    virtual int GetType() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z
    long CreateSolidColorRenderingEffect(CRenderingEffect * *);
};
