#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CSyncLockGroup {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z
    static CSyncLockGroup * GetGroup(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z
    void RemoveRenderTarget(IMonitorTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncLockTargets@CSyncLockGroup@@UEAAX_K@Z
    virtual void SyncLockTargets(uint64_t);
};
