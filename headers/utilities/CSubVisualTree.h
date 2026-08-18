#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CSubVisualTree {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z
    static long Create(CVisual *, CVisualTree * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CSubVisualTree@@MEAAXXZ
    virtual void FinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSubVisualTree@@MEAAJXZ
    virtual long Initialize();
};
