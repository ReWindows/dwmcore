#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CD2DResourceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z
    static long Create(CD2DContext *, CD2DResourceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ
    void MarkAllResourcesInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ
    bool MarkHardwareProtectedResourcesInvalid();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z
    void ManageResource(CD2DResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z
    void UnmanageResource(CD2DResource *);
};
