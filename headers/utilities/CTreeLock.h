#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CTreeLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireExclusive@CTreeLock@@QEAAXXZ
    void AcquireExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireShared@CTreeLock@@QEAAXXZ
    void AcquireShared();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ
    bool IsLockedByCurrentThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseExclusive@CTreeLock@@QEAAXXZ
    void ReleaseExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseShared@CTreeLock@@QEAAXXZ
    void ReleaseShared();
};
