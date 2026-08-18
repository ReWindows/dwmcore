#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CPointerDeviceCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z
    static DEVICE_INFO const & Query(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z
    static DEVICE_INFO const & Update(CManipulationFrame *);
};
