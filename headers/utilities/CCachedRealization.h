#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace CCachedImageProducer {
class CCachedRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z
    bool AttributesMatch(RenderTargetInfo const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z
    bool IsUsableOnTarget(RenderTargetInfo const &, bool) const;
};
} // namespace CCachedImageProducer
