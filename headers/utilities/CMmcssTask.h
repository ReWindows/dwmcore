#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CMmcssTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Apply@CMmcssTask@@QEAAJ_N@Z
    long Apply(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMmcssTask@@QEAA@XZ
    CMmcssTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CMmcssTask@@QEBAJPEAV1@@Z
    long Clone(CMmcssTask *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CMmcssTask@@QEAAXXZ
    void Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z
    long Set(DWM_MMTASK const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMmcssTask@@QEAA@XZ
    ~CMmcssTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z
    static bool AreEqualMmTask(DWM_MMTASK const *, DWM_MMTASK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadRuntime@CMmcssTask@@AEAAJXZ
    long LoadRuntime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadRuntime@CMmcssTask@@AEAAXXZ
    void UnloadRuntime();
};
