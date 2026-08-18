#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 46 member(s).
class CInteractionProcessor {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionProcessor@@QEAA@XZ
    CInteractionProcessor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z
    long CalculateDetectedInteractions(IInteractionContextWrapper *, InteractionAxisGroup *, int *, InteractionAxisGroup *, int *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z
    long CalculateHandledInteractions(InteractionAxis const &, InteractionAxisGroup *, InteractionAxisGroup *, WindissectOpaque const &, IInteractionContextWrapper *, int *, InteractionAxis *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ
    int CanSkipChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureCurrentManipulation@CInteractionProcessor@@QEAAXI_K@Z
    void CaptureCurrentManipulation(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z
    long CompleteInteraction(IManipulationResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z
    bool DepartBufferedOutputPointer(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z
    long GetInteractionContext(int, IInteractionContextWrapper * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ
    int HandledDeltaCurrentInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z
    bool HasBufferedOutput(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z
    long Initialize(IInteractionContextWrapper *, IInteractionContextWrapper *, IInteractionContextWrapper *, IInteractionContextWrapper *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z
    bool IsBufferingOutput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z
    long ProcessHandledInteractions(IManipulationResource *, uint64_t, bool, int, ManipulationThreadTelemetryData const &, IDCompositionInteractionStats *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z
    long ProcessInput(CInteraction const *, tagPOINTER_INFO const &, tagPOINTER_INFO_UNION const &, unsigned int, CMILMatrix const &, IManipulationResource *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@AEAUInteractionOutput@@@Z
    void ProcessOutput(IManipulationResource *, bool, bool, ManipulationThreadTelemetryData const &, IDCompositionInteractionStats *, InteractionOutput &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContact@CInteractionProcessor@@QEAAXW4InputType@@@Z
    void RemoveContact(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z
    long SetInteractionConfiguration(int, int, void const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z
    void SetRailsEnabled(bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z
    void SetTemporaryConfiguration(int, int, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z
    long StartInteraction(bool, bool, IManipulationResource *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ
    int SupportsAnyPointerType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z
    int SupportsInteractionType(int, unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z
    int SupportsPointerType(int, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionProcessor@@QEAA@XZ
    ~CInteractionProcessor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ
    bool AllowPenGestureDetection() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z
    InteractionAxis ComputeHandledInteractionsFromLocal(D2DVector3const &, D2DMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z
    D2DMatrix ConstructLocalToGlobalTransform(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z
    D2DVector3 ConvertGlobalMotionToLocalMotion(InteractionMotion const &, D2DMatrix const &, D2DMatrix *, D2DMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z
    bool ResolveMustHandleMotion(D2DMatrix const &, D2DMatrix const &, InteractionAxisGroup *, InteractionAxis *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z
    bool ResolveProhibitedMotion(WindissectOpaque const &, InteractionAxis *, int *);
};
