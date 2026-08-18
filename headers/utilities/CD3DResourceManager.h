#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CD3DResourceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ
    void DestroyDeviceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ
    void DestroyReleasedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ
    bool MarkHardwareProtectedResourcesInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z
    void RegisterResource(CD3DResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z
    virtual void UnusableNotification(CMILPoolResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z
    virtual void UnusedNotification(CMILPoolResource *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z
    void DestroyResource(CD3DResource *);
};
