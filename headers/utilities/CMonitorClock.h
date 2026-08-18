#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CMonitorClock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z
    CMonitorClock(IMonitorTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTiming@CMonitorClock@@UEAA_KXZ
    virtual uint64_t UpdateTiming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z
    virtual int WaitForNextTick(void *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateWaitResult@CMonitorClock@@IEAA?AW4WaitResult@ICompositorClock@@K@Z
    int TranslateWaitResult(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateParallelMode@CMonitorClock@@IEAAXXZ
    void UpdateParallelMode();
};
