#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CProcessResourceAttributionReporter {
public:
    class HighResourceUsageReport;
    class ResourceThresholdForProcessSequenceNumber;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProcessResourceAttributionReporter@@AEAA@XZ
    CProcessResourceAttributionReporter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ
    void CheckAndReportHighResourceUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void ReportHighResourceUsageWorker(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z
    void ReportHighResourceUsageWorker(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProcessResourceAttributionReporter@@AEAA@XZ
    ~CProcessResourceAttributionReporter();
};
