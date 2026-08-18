#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CProcessAttributionManager {
public:
    class Observer;
    class ProcessAttributionRecord;
    class Record;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ
    CProcessAttributionObserver * CreateObserver();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z
    long GetProcessAttribution(unsigned long, uint64_t, CProcessAttribution * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ
    CProcessAttribution * CreateNullProcessAttribution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z
    long CreateProcessAttribution(unsigned long, WindissectOpaque const *, bool, CProcessAttribution * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z
    void NotifyOnDeadObserver(CProcessAttributionObserver *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProcessAttributionManager@@AEAA@XZ
    ~CProcessAttributionManager();
};
