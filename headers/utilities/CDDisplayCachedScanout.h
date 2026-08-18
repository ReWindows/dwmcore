#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CDDisplayCachedScanout {
public:
    class Plane;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z
    bool Matches(unsigned int, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int, unsigned int, ::Windows::Devices::Display::Core::IDisplayScanout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z
    void Set(unsigned int, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int, unsigned int, ::Windows::Devices::Display::Core::IDisplayScanout *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDisplayCachedScanout@@QEAA@XZ
    ~CDDisplayCachedScanout();
};
