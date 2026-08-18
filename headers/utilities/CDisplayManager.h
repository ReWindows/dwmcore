#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CDisplayManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z
    long GetAdapter(_LUID, IDXGIAdapter1* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z
    long GetDXGIFactory(IDXGIFactory5* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z
    long GetDXGIOutput(unsigned int, IDXGIOutputDWM * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z
    long GetDXGIOutput(_LUID, _LUID, unsigned int, IDXGIOutputDWM * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z
    long GetPrimaryAdapter(IDXGIAdapter1* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ
    _LUID GetPrimaryAdapterLuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z
    long GetRemotingDXGIOutput(HMONITOR__*, IDXGIOutputDWM * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ
    _LUID GetWarpAdapterLuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrent@CDisplayManager@@QEBA_N_N@Z
    bool IsCurrent(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z
    long ValidateLuidAndMonitor(_LUID, HMONITOR__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayManager@@QEAA@XZ
    ~CDisplayManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ
    bool DriverUpdateInProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDisplayManager@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecentDisplayChange@CDisplayManager@@IEAA_NXZ
    bool RecentDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ
    long UpdateDXGIFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z
    long InternalGetAdapter(_LUID, IDXGIAdapter1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z
    long InternalGetDXGIFactory(IDXGIFactory5* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z
    long InternalGetDXGIOutput(unsigned int, HMONITOR__*, IDXGIOutputDWM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@U_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z
    long InternalGetDXGIOutput(IDXGIAdapter1*, _LUID, unsigned int, IDXGIOutputDWM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ
    long InternalUpdateDXGIFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z
    long InternalValidateMonitor(IDXGIAdapter1*, HMONITOR__*);
};
