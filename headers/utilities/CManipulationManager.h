#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 40 member(s).
class CManipulationManager {
public:
    class InteractionUpdate;
    class MessageCallThreadInfo;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z
    long GetManipulationThreadMessageCallSendHost(IMessageCallSendHost * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationThread@CManipulationManager@@SA_NXZ
    static bool IsManipulationThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z
    static int ManipulationThreadCallback(_MIT_INPUT_INTEROP_MESSAGE *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z
    long NotifyCaptureManipulation(CInteraction *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z
    long NotifyCapturePointer(CInteraction *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z
    long NotifyUpdateRails(CInteraction *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z
    long NotifyUpdateTemporaryConfiguration(CInteraction *, int, int, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ
    void ReleasePendingReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WakeMTForMidmanipulationUpdateIfNecessary@CManipulationManager@@QEAAXXZ
    void WakeMTForMidmanipulationUpdateIfNecessary();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationManager@@IEAA@PEAVCComposition@@@Z
    CManipulationManager(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z
    void CalculateFrameTargets(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z
    bool CheckForBufferedDescendant(CManipulationFrame *, unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWaitHandles@CManipulationManager@@KAXXZ
    static void ClearWaitHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateManipulationThread@CManipulationManager@@IEAAJXZ
    long CreateManipulationThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CManipulationManager@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z
    void OnCaptureManipulation(CInteraction *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z
    void OnCapturePointer(unsigned int, CInteraction *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CManipulationManager@@IEAAXXZ
    void OnInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ
    void OnInteractionUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z
    long OnNewContact(CInteraction *, unsigned int, int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z
    void OnUp(CInteraction *, unsigned int, int, CManipulationContext *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z
    void ProcessFrameInputPostTargeting(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z
    void ProcessFrameInputPreTargeting(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z
    void ProcessManipulationInfo(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z
    static int ProcessManipulationThreadCallbackInput(tagMANIPULATION_INPUT_INFO *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z
    long QueueMidManipulationUpdate(int, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z
    void RouteAllFrames(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z
    void RouteFrameInput(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z
    long SetupMessageCallThreadInfo(IMessageSession *, long ( *)(void *, void const *, int), WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ
    void ShutDownManipulationThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z
    void TargetBufferedFrames(unsigned int, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z
    void TargetFrameInput(CManipulationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z
    void TargetPointer(CManipulationContext *, CManipulationFrame *, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z
    static long s_EndpointProc(WindissectOpaque const &, MsgCallTypeDefinition const *, void *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z
    static long s_ManipulationThreadEndpointProc(void *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z
    static long s_RenderThreadEndpointProc(void *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadMain@CManipulationManager@@KAKPEAX@Z
    static unsigned long s_ThreadMain(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationManager@@MEAA@XZ
    virtual ~CManipulationManager();
};
