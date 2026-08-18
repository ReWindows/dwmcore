#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CResponseItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResponseRef@CResponseItem@@UEAAXXZ
    virtual void AddResponseRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueResponse@CResponseItem@@QEAAJXZ
    long QueueResponse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResponseRef@CResponseItem@@UEAAXXZ
    virtual void ReleaseResponseRef();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResponseItem@@IEAA@PEAVCGlobalSurfaceManager@@@Z
    CResponseItem(CGlobalSurfaceManager *);
};
