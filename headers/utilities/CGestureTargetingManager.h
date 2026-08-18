#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CGestureTargetingManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z
    static long GetPointerTarget(CManipulationFrame *, tagPOINTER_INFO const &, IManipulationContext const *, TargetingInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z
    static long ProcessHandledInteractionsForNonHandlers(IManipulationContext *, uint64_t, int, ManipulationThreadTelemetryData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@@Z
    static long ProcessInput(IManipulationContext const *, tagPOINTER_INFO const &, tagPOINTER_INFO_UNION const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z
    static void ProcessInteractions(IManipulationContext *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z
    static long ProcessHandledInteractionsWalk(IManipulationContext *, IInteractionResource *, uint64_t, int, ManipulationThreadTelemetryData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z
    static long ProcessInteractionTree(IManipulationContext const *, IInteractionResource *, int, InteractionAxisGroup *, InteractionAxisGroup *, WindissectOpaque *, InteractionAxis *, int *, IInteractionResource * *, IInteractionResource * *);
};
