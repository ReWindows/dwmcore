#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CEffectIntermediateProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z
    void Initialize(IBitmapRealization *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z
    virtual long ProduceRealization(CDrawingContext *, WindissectOpaque * *) const;
};
