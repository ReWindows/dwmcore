#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CWindowBackgroundBitmapProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowBackgroundBitmapProducer@@SAJPEAVCWindowBackgroundTreatment@@PEAPEAV1@@Z
    static long Create(CWindowBackgroundTreatment *, CWindowBackgroundBitmapProducer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z
    bool HasValidRealization(RenderTargetInfo const &, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z
    void MarkStaleRealizations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z
    virtual long ProduceRealization(CDrawingContext *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z
    void RemoveStaleRealization(RenderTargetInfo const &);
};
