#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CGlobalInputManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z
    static long Create(CComposition *, CInputManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGlobalInputManager@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ
    virtual long ResetInputThreadMmcss();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalInputManager@@UEAA@XZ
    virtual ~CGlobalInputManager();
};
