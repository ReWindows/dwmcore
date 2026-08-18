#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CAnimationGlobalConfiguration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CAnimationGlobalConfiguration@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ
    void OnGlobalPlaybackRateChanged();
};
