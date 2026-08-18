#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CProjectedShadowRenderingEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectTypeWithAttributes@CProjectedShadowRenderingEffect@@UEBA?AW4RenderingEffectType@@XZ
    virtual int GetEffectTypeWithAttributes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z
    virtual long SetStateOnDevice(CD3DBatchExecutionContext *, unsigned int *) const;
};
