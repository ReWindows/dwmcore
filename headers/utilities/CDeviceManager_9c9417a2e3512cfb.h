#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CDeviceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAllDevices@CDeviceManager@@QEAAXXZ
    void FlushAllDevices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z
    long GetDefaultDevice(CD3DDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z
    long GetDevice(_LUID, CD3DDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z
    long GetExistingDevice(_LUID, CD3DDevice * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z
    long GetWarpDevice(CD3DDevice * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z
    bool HardwareProtectionRequired(_LUID) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ
    void ReleaseD3D12Resources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCheckMPOCache@CDeviceManager@@QEAAXXZ
    void ResetCheckMPOCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimAllDevices@CDeviceManager@@QEAAXXZ
    void TrimAllDevices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z
    static void UpdateFeatureLevels(WindissectOpaque const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceManager@@QEAA@XZ
    ~CDeviceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ
    void ProcessDeviceLost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z
    long CreateNewDevice(_LUID, CD3DDevice * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ
    void DeleteUnusedDevices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z
    int GetAvailableDevice(_LUID, CD3DDevice * *) const;
};
