#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 40 member(s).
class CManipulation {
public:
    class ScrollingConfiguration;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CManipulation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z
    virtual long CompleteManipulation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptureSettings@CManipulation@@UEAA?AW4SystemManipulationMode@@XZ
    virtual int GetCaptureSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRailsState@CManipulation@@UEAA?AW4RailsState@@XZ
    virtual int GetRailsState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z
    CConditionalExpression * GetSourceModifierConditionalAnimation(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z
    long InjectManipulation(InjectManipulationArgs const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationCaptured@CManipulation@@UEAA_NXZ
    virtual bool IsManipulationCaptured();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CManipulation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRailsConfigurationChanged@CManipulation@@UEAAX_NW4RailsAxis@@@Z
    virtual void NotifyRailsConfigurationChanged(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z
    void OnEdgyDetected(EdgyDetectedParams const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_INJECTMANIPULATION@@PEBXI@Z
    long ProcessInjectManipulation(CResourceTable *, tagMILCMD_MANIPULATION_INJECTMANIPULATION const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSourceModifiers@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_SETSOURCEMODIFIERS@@@Z
    long ProcessSetSourceModifiers(CResourceTable *, tagMILCMD_MANIPULATION_SETSOURCEMODIFIERS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z
    long ProcessUpdateEdgyExperienceSource(CResourceTable *, tagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATESETTINGS@@@Z
    long ProcessUpdateSettings(CResourceTable *, tagMILCMD_MANIPULATION_UPDATESETTINGS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CManipulation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManipulation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z
    long SetAutoReset_RenderThread(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z
    long SetCaptureState_RenderThread(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CManipulation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z
    long Update(ManipulationData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z
    virtual long UpdateOnManipulationThread(UpdateOnManipulationThreadArgs const &, ManipulationThreadTelemetryData const &, IDCompositionInteractionStats *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z
    virtual long UpdateOnManipulationThreadWithoutDelta(UpdateOnManipulationThreadWithoutDeltaArgs const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulation@@UEAA@XZ
    virtual ~CManipulation();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulation@@IEAA@PEAVCComposition@@@Z
    CManipulation(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CManipulation@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z
    long _EnqueueDeferredDeltaReset(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z
    long _GetRenderToManipulationMsgInfo(IMessageCallSendHost * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z
    void _ResetManipulationThreadDataIfNecessary(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z
    long _SendUpdateToRenderThread(bool, D2DVector3const *, D2DVector3const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z
    void _UpdateCaptureState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@W4InteractionChainingMode@Interactions@Composition@UI@Windows@@@Z
    bool _UpdateChainingEnabled(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z
    long _UpdateEdgyExperienceInput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z
    bool _UpdateInertiaEnabled(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z
    static long s_ResetDeltaProperties(void *);
};
