#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CReadWriteLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireExclusive@CReadWriteLock@@QEAAXXZ
    void AcquireExclusive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentThreadWriter@CReadWriteLock@@QEBA_NXZ
    bool IsCurrentThreadWriter() const;
};
