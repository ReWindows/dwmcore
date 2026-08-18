#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 71 member(s).
class CInteraction {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteraction@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferingDisabled@CInteraction@@UEBAHXZ
    virtual int BufferingDisabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z
    virtual long CalculateDetectedInteractions(IInteractionContextWrapper *, InteractionAxisGroup *, int *, InteractionAxisGroup *, int *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z
    virtual long CalculateHandledInteractions(InteractionAxis const &, InteractionAxisGroup *, InteractionAxisGroup *, WindissectOpaque const &, IInteractionContextWrapper *, int *, InteractionAxis *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSkipChildren@CInteraction@@UEBAHXZ
    virtual int CanSkipChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z
    virtual void CaptureCurrentManipulation(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInteraction@CInteraction@@UEAAJXZ
    virtual long CompleteInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ
    IDCompositionInteractionStats * CreateDCompStats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z
    virtual bool DepartBufferedOutputPointer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CInteraction@@UEAAXXZ
    virtual void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveInputSink@CInteraction@@UEBAXW4InputType@@PEAPEAX@Z
    virtual void GetEffectiveInputSink(int, void * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputHandle@CInteraction@@QEBAPEAXXZ
    void * GetInputHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSink@CInteraction@@UEBAPEAXXZ
    virtual void * GetInputSink() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z
    virtual long GetInteractionContext(int, IInteractionContextWrapper * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CInteraction@@UEBA?AVCMILMatrix@@XZ
    virtual CMILMatrix GetTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ
    CVisual * GetVisualNoRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ
    virtual int HandledDeltaCurrentInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z
    virtual bool HasBufferedOutput(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z
    virtual bool IsBufferingOutput(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CInteraction@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ
    bool IsStrictlyHoverPointerSource() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z
    long ProcessCaptureManipulationInCompositor(CResourceTable *, tagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREPOINTER@@@Z
    long ProcessCapturePointer(CResourceTable *, tagMILCMD_INTERACTION_CAPTUREPOINTER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDisableOutputPrediction@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION@@@Z
    long ProcessDisableOutputPrediction(CResourceTable *, tagMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z
    virtual long ProcessHandledInteractions(uint64_t, bool, int, ManipulationThreadTelemetryData, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEA_N@Z
    virtual long ProcessInput(tagPOINTER_INFO const &, tagPOINTER_INFO_UNION const &, unsigned int, CMILMatrix const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETHOVERSOURCE@@@Z
    long ProcessSetHoverSource(CResourceTable *, tagMILCMD_INTERACTION_SETHOVERSOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z
    long ProcessSetInputSink(CResourceTable *, tagMILCMD_INTERACTION_SETINPUTSINK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETMANIPULATION@@@Z
    long ProcessSetManipulation(CResourceTable *, tagMILCMD_INTERACTION_SETMANIPULATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetProcessId@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETPROCESSID@@@Z
    long ProcessSetProcessId(CResourceTable *, tagMILCMD_INTERACTION_SETPROCESSID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z
    long ProcessUpdateConfiguration(CResourceTable *, tagMILCMD_INTERACTION_UPDATECONFIGURATION const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATEFLAGS@@@Z
    long ProcessUpdateFlags(CResourceTable *, tagMILCMD_INTERACTION_UPDATEFLAGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS@@@Z
    long ProcessUpdateRails(CResourceTable *, tagMILCMD_INTERACTION_UPDATERAILS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ
    virtual long Push2DVisualTransformToRenderThread();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteraction@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteraction@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContact@CInteraction@@UEAAXW4InputType@@@Z
    virtual void RemoveContact(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z
    long ReportInertiaStart(int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportInertiaStop@CInteraction@@QEAAJXZ
    long ReportInertiaStop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z
    void ResetDefaultInteractionForCurrentMC(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ
    static void ResetDefaultStateForAllInteractions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z
    static void ResolveInteractionHandle(unsigned int, uint64_t *, CInteraction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleFallbackInteractions@CInteraction@@UEAAX_N@Z
    virtual void SetHandleFallbackInteractions(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandledDeltaCurrentInteraction@CInteraction@@UEAAXXZ
    virtual void SetHandledDeltaCurrentInteraction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z
    virtual long SetTemporaryConfiguration(int, int, bool, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z
    long SetVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z
    virtual long StartInteraction(bool, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z
    virtual int SupportsInteractionType(int, unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z
    virtual int SupportsPointerType(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z
    void TraceUpdatedConfiguration(int, int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifiers@CInteraction@@UEAAXXZ
    virtual void UnRegisterNotifiers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z
    void UpdateDefaultInteractionForCurrentMC(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z
    long UpdateInputSink(void *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteraction@@IEAA@PEAVCComposition@@@Z
    CInteraction(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInteraction@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteraction@@MEAA@XZ
    virtual ~CInteraction();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z
    static long AllocateHandleTableEntry(CInteraction *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z
    static WindissectOpaque * GetEntry(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstChild@CInteraction@@EEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetFirstChild() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSibling@CInteraction@@EEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetNextSibling() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumContacts@CInteraction@@EEBAIW4InputType@@@Z
    virtual unsigned int GetNumContacts(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CInteraction@@EEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumContacts@CInteraction@@AEBAIXZ
    unsigned int GetTotalNumContacts() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ
    bool IsDefaultInteractionStateLocked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z
    long SetRailsEnabled_RenderThread(bool, int);
};
