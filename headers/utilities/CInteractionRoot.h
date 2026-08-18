#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 32 member(s).
class CInteractionRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferingDisabled@CInteractionRoot@@UEBAHXZ
    virtual int BufferingDisabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z
    virtual long CalculateDetectedInteractions(IInteractionContextWrapper *, InteractionAxisGroup *, int *, InteractionAxisGroup *, int *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z
    virtual long CalculateHandledInteractions(InteractionAxis const &, InteractionAxisGroup *, InteractionAxisGroup *, WindissectOpaque const &, IInteractionContextWrapper *, int *, InteractionAxis *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSkipChildren@CInteractionRoot@@UEBAHXZ
    virtual int CanSkipChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureCurrentManipulation@CInteractionRoot@@UEAAXI_K@Z
    virtual void CaptureCurrentManipulation(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInteraction@CInteractionRoot@@UEAAJXZ
    virtual long CompleteInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z
    virtual bool DepartBufferedOutputPointer(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveInputSink@CInteractionRoot@@UEBAXW4InputType@@PEAPEAX@Z
    virtual void GetEffectiveInputSink(int, void * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstChild@CInteractionRoot@@UEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetFirstChild() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSink@CInteractionRoot@@UEBAPEAXXZ
    virtual void * GetInputSink() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z
    virtual long GetInteractionContext(int, IInteractionContextWrapper * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSibling@CInteractionRoot@@UEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetNextSibling() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumContacts@CInteractionRoot@@UEBAIW4InputType@@@Z
    virtual unsigned int GetNumContacts(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CInteractionRoot@@UEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CInteractionRoot@@UEBA?AVCMILMatrix@@XZ
    virtual CMILMatrix GetTransform() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ
    virtual int HandledDeltaCurrentInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z
    virtual bool HasBufferedOutput(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z
    long Initialize(IManipulationContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z
    virtual bool IsBufferingOutput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessHandledInteractions@CInteractionRoot@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z
    virtual long ProcessHandledInteractions(uint64_t, bool, int, ManipulationThreadTelemetryData, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEA_N@Z
    virtual long ProcessInput(tagPOINTER_INFO const &, tagPOINTER_INFO_UNION const &, unsigned int, CMILMatrix const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push2DVisualTransformToRenderThread@CInteractionRoot@@UEAAJXZ
    virtual long Push2DVisualTransformToRenderThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContact@CInteractionRoot@@UEAAXW4InputType@@@Z
    virtual void RemoveContact(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleFallbackInteractions@CInteractionRoot@@UEAAX_N@Z
    virtual void SetHandleFallbackInteractions(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandledDeltaCurrentInteraction@CInteractionRoot@@UEAAXXZ
    virtual void SetHandledDeltaCurrentInteraction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemporaryConfiguration@CInteractionRoot@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z
    virtual long SetTemporaryConfiguration(int, int, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z
    virtual long StartInteraction(bool, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I_N@Z
    virtual int SupportsInteractionType(int, unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsPointerType@CInteractionRoot@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z
    virtual int SupportsPointerType(int, int) const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionRoot@@EEAA@XZ
    virtual ~CInteractionRoot();
};
