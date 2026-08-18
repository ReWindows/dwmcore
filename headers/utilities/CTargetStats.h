#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CTargetStats {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTargetStats@@QEAA@XZ
    CTargetStats();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z
    bool GetLastMonitorTime(MonitorTime *, MonitorTime *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z
    unsigned int GetOutstandingPresents(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStats@CTargetStats@@QEAAX_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z
    void GetStats(uint64_t, tagCOMPOSITION_TARGET_STATS_2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ
    unsigned int GetTargetSyncLockCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetTime@CTargetStats@@QEAA_K_K0@Z
    uint64_t GetTargetTime(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@CTargetStats@@QEBA_NXZ
    bool IsOccluded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z
    void NotifyPresent(long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySyncLock@CTargetStats@@QEAAXI@Z
    void NotifySyncLock(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ready@CTargetStats@@QEAA_N_K_N@Z
    bool Ready(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z
    void Reset(unsigned int, IOverlaySwapChain *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTargetMonitorTime@CTargetStats@@IEAA_N_K0@Z
    bool CalcTargetMonitorTime(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReviseTargetMonitorTime@CTargetStats@@IEAAX_K0@Z
    void ReviseTargetMonitorTime(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTargetStats@@IEAAX_K@Z
    void Update(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresentStats@CTargetStats@@IEAA_NXZ
    bool UpdatePresentStats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetId@CTargetStats@@IEAAXI@Z
    void UpdateTargetId(unsigned int);
};
