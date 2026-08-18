#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CKMAdapterHandle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z
    long Initialize(IDXGIAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z
    long Initialize(_LUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKMAdapterHandle@@QEAA@XZ
    ~CKMAdapterHandle();
};
