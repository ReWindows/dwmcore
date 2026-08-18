#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class InputTraceLogging {
public:
    class DWM;
    class GestureTargeting;
    class PerfRegion;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z
    static bool Enabled(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z
    static char const * InteractionConfigurationUpdateTypeToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z
    static char const * InteractionDefaultToString(CInteraction const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z
    static bool InteractionFurtherProcessingForInput(CInteraction const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z
    static bool InteractionHoverSource(CInteraction const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z
    static bool InteractionInputTransparency(CInteraction const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z
    static char const * InteractionInputTypeToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z
    static char const * InteractionSourceTypeToString(CInteraction const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z
    static char const * MidManipulationUpdateTypeToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z
    static char const * PointerTypeToString(unsigned long);
};
