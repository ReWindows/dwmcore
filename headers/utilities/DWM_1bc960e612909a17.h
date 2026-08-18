#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
namespace InputTraceLogging {
class DWM {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z
    static void HitTestTreeWalkResult(unsigned long, int, void * const, HWND__* const, void * const, CInteraction const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z
    static void InputTransparencyEvaluation(CInteraction const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z
    static void MarkForFurtherEvaluation(CInteraction const *, bool);
};
} // namespace InputTraceLogging
