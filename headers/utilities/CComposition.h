#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 106 member(s).
class CComposition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z
    void AddCompSurfInfoUpdate(CCompositionSurfaceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z
    void AddCursorVisualListener(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z
    void AddDelayDeleteResource(CResource *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z
    long AddToDDAExcludeVisualList(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z
    long AddToMagnifierList(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z
    void AddVisualTree(CVisualTree *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z
    void AdjustStereoEntityCount(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z
    void ConfirmCompSurfInfoUpate(tagCOMPOSITION_TARGET_ID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ
    _D3DCOLORVALUE CurrentRedrawRegionColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ
    void DestroyDelayDeleteResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushChannels@CComposition@@QEAAXXZ
    void FlushChannels();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z
    long GetAttachedChannel(unsigned int, CChannelContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorClockBoost@CComposition@@QEBA_NXZ
    bool GetCompositorClockBoost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorVisuals@CComposition@@QEAA?BV?$span@$$CBUCursorVisualData@@$0?0@gsl@@XZ
    WindissectOpaque GetCursorVisuals();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z
    virtual long GetDesktopTree(_LUID, CDesktopTree * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ
    uint64_t GetEffectiveCompositionFrameId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameDuration@CComposition@@QEBA_KXZ
    uint64_t GetFrameDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameTargetTime@CComposition@@QEBA_KXZ
    uint64_t GetFrameTargetTime() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z
    long GetImagingFactory(IWICImagingFactory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z
    long GetManipulationManager(CManipulationManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ
    IBitmapResource * GetStockBlackBitmap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ
    IBitmapResource * GetStockTransparentBitmap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDelayDeleteResources@CComposition@@QEBA_NXZ
    bool HasDelayDeleteResources() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideDDAVisuals@CComposition@@QEBAXXZ
    void HideDDAVisuals() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ
    static void IncludeLastBatchMemoryInDump();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositionThread@CComposition@@QEBA_NXZ
    bool IsCompositionThread() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ
    bool IsOverdrawHeatMapEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ
    bool IsPowerSaverEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteRendering@CComposition@@UEBA_NXZ
    virtual bool IsRemoteRendering() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenReadBack@CComposition@@QEBA_NXZ
    bool IsScreenReadBack() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ
    bool IsTextureMemoryHeatMapEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z
    long NotifyHelper(MIL_MESSAGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMonitorTargetsChanged@CComposition@@UEAAXXZ
    virtual void OnMonitorTargetsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShutdown@CComposition@@QEAAXXZ
    void OnShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ
    long PerformQueuedRenderSnapshots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessComposition@CComposition@@QEAAXXZ
    void ProcessComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ
    long RecordCompositionSurfaceUpdates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRemoteTreeConnection@CComposition@@UEAAXXZ
    virtual void RefreshRemoteTreeConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z
    long RegisterAnimateResource(IAnimationResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z
    long RegisterRenderSnapshotToPerform(CCachedVisualImage *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z
    void RemoveCursorVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z
    void RemoveCursorVisualListener(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z
    void RemoveVisualTree(CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ
    long RequestOffThreadCleanTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTokenThread@CComposition@@QEAAJXZ
    long ResetTokenThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreCursors@CComposition@@QEAAXXZ
    void RestoreCursors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDDAVisuals@CComposition@@QEBAXXZ
    void RestoreDDAVisuals() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z
    void ScheduleCompositionPass(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z
    void SetCompositionCapabilities(COMPOSITION_CAPABILITY_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z
    void UnmapSharedSectionView(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z
    long UnregisterAnimateResource(IAnimationResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDebugCounter@CComposition@@QEAAX_N@Z
    void UpdateDebugCounter(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpressions@CComposition@@QEAAXXZ
    void UpdateExpressions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMmcssPartners@CComposition@@QEAAJXZ
    long UpdateMmcssPartners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePowerNotifications@CComposition@@QEAAJXZ
    long UpdatePowerNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderFailureCount@CComposition@@SAXJ@Z
    static void UpdateRenderFailureCount(long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveAnimationsTelemetry@CComposition@@IEAAXXZ
    void ActiveAnimationsTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCompositionFrame@CComposition@@IEAAJXZ
    long BeginCompositionFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUpdateCursors@CComposition@@MEAAXXZ
    virtual void BeginUpdateCursors();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z
    CComposition(CTransport *, CConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_AddToProtocol@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ADDTOPROTOCOL@@@Z
    long Channel_AddToProtocol(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_ADDTOPROTOCOL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_BeginDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE@@@Z
    long Channel_BeginDuplicateResource(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_CompleteDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_COMPLETEDUPLICATERESOURCE@@@Z
    long Channel_CompleteDuplicateResource(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_COMPLETEDUPLICATERESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z
    long Channel_CreateResource(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_CREATERESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_RELEASERESOURCE@@@Z
    long Channel_ReleaseResource(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_RELEASERESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_RoundTripRequest@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z
    long Channel_RoundTripRequest(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_ROUNDTRIPREQUEST const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_SetApplicationId@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETAPPLICATIONID@@PEBXI@Z
    long Channel_SetApplicationId(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_SETAPPLICATIONID const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_SetConnectionId@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETCONNECTIONID@@@Z
    long Channel_SetConnectionId(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_SETCONNECTIONID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETDESCRIPTION@@PEBXI@Z
    long Channel_SetDescription(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_SETDESCRIPTION const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_SignalOnAllEffectCompilationsDone@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SIGNALONALLEFFECTCOMPILATIONSDONE@@@Z
    long Channel_SignalOnAllEffectCompilationsDone(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_SIGNALONALLEFFECTCOMPILATIONSDONE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_SyncFlush@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z
    long Channel_SyncFlush(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_SYNCFLUSH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanTrees@CComposition@@IEAAJXZ
    long CleanTrees();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCaches@CComposition@@IEBA_NXZ
    bool ClearCaches() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseChannel@CComposition@@IEAAJI@Z
    long CloseChannel(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionPassNeeded@CComposition@@IEAAX_N@Z
    void CompositionPassNeeded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmCompositionFrame@CComposition@@IEAAJXZ
    long ConfirmCompositionFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUpdateCursors@CComposition@@MEAAXXZ
    virtual void EndUpdateCursors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z
    static void FailFastOnMalformedPacket(int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CComposition@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z
    long OpenChannel(unsigned int, unsigned long, uint64_t, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_BoostCompositorClock@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BOOSTCOMPOSITORCLOCK@@@Z
    long Partition_BoostCompositorClock(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_BOOSTCOMPOSITORCLOCK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z
    long Partition_RegisterForNotifications(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_SetCurrentMmTask@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z
    long Partition_SetCurrentMmTask(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_SETCURRENTMMTASK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z
    long Partition_SetCursor(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_SETCURSOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z
    long Partition_SetExcludeFromDDA(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_SETEXCLUDEFROMDDA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z
    long Partition_SetMagnifier(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_SETMAGNIFIER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_SwitchRemotingMode@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z
    long Partition_SwitchRemotingMode(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_SWITCHREMOTINGMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostRender@CComposition@@IEAAJ_N@Z
    long PostRender(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRender@CComposition@@IEAAJPEA_N@Z
    long PreRender(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ
    long RegisterMonitorPowerNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHideCursors@CComposition@@IEAAX_N@Z
    void ShowHideCursors(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ
    void UnmapDeferredSharedSectionViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimateResources@CComposition@@IEAAXXZ
    void UpdateAnimateResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z
    void UpdateBatterySaverState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositorClock@CComposition@@IEAAXXZ
    void UpdateCompositorClock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z
    void UpdateConnectedStandbyState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnergySaverState@CComposition@@IEAAX_N@Z
    void UpdateEnergySaverState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z
    void UpdateMonitorPowerState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PowerNotification@CComposition@@KAKPEAXK0@Z
    static unsigned long s_PowerNotification(void *, unsigned long, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComposition@@MEAA@XZ
    virtual ~CComposition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushRoundTripRequests@CComposition@@AEAAXXZ
    void FlushRoundTripRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseNotificationChannels@CComposition@@AEAAXXZ
    void ReleaseNotificationChannels();
};
