#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 1 member(s).
class IScribbleSwapChain {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentScanoutBuffer@IScribbleSwapChain@@UEAAPEAVISwapChainBuffer@@XZ
    virtual ISwapChainBuffer * GetCurrentScanoutBuffer();
};
