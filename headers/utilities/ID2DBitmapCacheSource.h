#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class ID2DBitmapCacheSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossAdapterSharedHandle@ID2DBitmapCacheSource@@UEAAJPEAPEAX@Z
    virtual long CreateCrossAdapterSharedHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCrossAdapter@ID2DBitmapCacheSource@@UEBA_NPEAU_LUID@@@Z
    virtual bool IsCrossAdapter(_LUID *) const;
};
