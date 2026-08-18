#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CEnergyReporter {
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnergyReporter@@AEAA@XZ
    CEnergyReporter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendReportToE3@CEnergyReporter@@AEAAXXZ
    void SendReportToE3();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendReportToE3Worker@CEnergyReporter@@AEAAXXZ
    void SendReportToE3Worker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendReportToE3Worker@CEnergyReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void SendReportToE3Worker(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnergyReporter@@AEAA@XZ
    ~CEnergyReporter();
};
