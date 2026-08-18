#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
namespace InputTraceLogging::KST {
class DWM {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ
    static void EnterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z
    static void ExitWait(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalMMCSSTask@DWM@KST@InputTraceLogging@@SAXXZ
    static void SignalMMCSSTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalReset@DWM@KST@InputTraceLogging@@SAXXZ
    static void SignalReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z
    static void ThreadStart(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMMCSSTask@DWM@KST@InputTraceLogging@@SAX_N@Z
    static void UpdateMMCSSTask(bool);
};
} // namespace InputTraceLogging::KST
