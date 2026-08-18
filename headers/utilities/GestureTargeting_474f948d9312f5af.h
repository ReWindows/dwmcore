#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
namespace InputTraceLogging {
class GestureTargeting {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z
    static void BlockInteractionResolution(CInteraction const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z
    static void DequeueFrame(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ
    static void ForcePalmRejection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z
    static void InteractionConfigurationUpdate(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z
    static void InteractionUpdate(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z
    static void QueueFrame(uint64_t, uint64_t, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z
    static void RailsUpdate(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z
    static void RoutePointer(uint64_t, uint64_t, unsigned long, unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z
    static void SetInteractionChain(unsigned long, CInteraction const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z
    static void SetPointerResult(uint64_t, uint64_t, unsigned long, unsigned long, TargetingInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z
    static void TemporaryInteractionConfigurationUpdate(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z
    static void TraceInteractionConfiguration(CInteraction const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z
    static void UpdateCapture(WindissectOpaque const *);
};
} // namespace InputTraceLogging
