#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CD3DDynamicAppendBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z
    long BeginAppend(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ
    void EndAppend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z
    long EnsureByteSpace(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z
    long Initialize(CD3DDevice *, unsigned int);
};
