#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CScheduler {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScheduler@@QEAA@XZ
    CScheduler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAndResetFrameCompositionReasons@CScheduler@@QEAA?AW4CompositionReason@@XZ
    int GetAndResetFrameCompositionReasons();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z
    static uint64_t GetDefaultVBlankDuration(IMonitorTarget const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CScheduler@@QEAAJPEAUIMessageLoopExtensions@@PEAX11@Z
    long Initialize(IMessageLoopExtensions *, void *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z
    void WaitForWork(IMessageLoopExtensions *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScheduler@@QEAA@XZ
    ~CScheduler();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTimer@CScheduler@@IEAAXXZ
    void CancelTimer();
};
