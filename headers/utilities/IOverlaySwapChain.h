#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 1 member(s).
class IOverlaySwapChain {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySource@IOverlaySwapChain@@UEBAPEAUIDisplaySource@Core@Display@Devices@Windows@@XZ
    virtual ::Windows::Devices::Display::Core::IDisplaySource * GetDisplaySource() const;
};
