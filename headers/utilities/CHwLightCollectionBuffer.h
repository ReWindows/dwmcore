#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CHwLightCollectionBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z
    static long Create(LightInfo const *, unsigned int, bool, CHwLightCollectionBuffer * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z
    void UpdateLightInfo(LightInfo const *, unsigned int, bool);
};
