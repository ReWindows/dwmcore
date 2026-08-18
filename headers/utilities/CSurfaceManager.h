#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CSurfaceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTokenThread@CSurfaceManager@@QEAAJXZ
    long ResetTokenThread();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z
    long CreateTokenThread(unsigned long ( *)(void *), unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurfaceManager@@MEAA@XZ
    virtual ~CSurfaceManager();
};
