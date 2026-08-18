#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CGlobalComposition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ
    virtual void BeginUpdateCursors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z
    static long Create(CTransport *, CConnection *, CComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ
    virtual void EndUpdateCursors();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z
    virtual long GetDesktopTree(_LUID, CDesktopTree * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteRendering@CGlobalComposition@@UEBA_NXZ
    virtual bool IsRemoteRendering() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ
    virtual void OnMonitorTargetsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRemoteTreeConnection@CGlobalComposition@@UEAAXXZ
    virtual void RefreshRemoteTreeConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z
    void RegisterCursorVisual(CCursorVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z
    void UnregisterCursorVisual(CCursorVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalComposition@@UEAA@XZ
    virtual ~CGlobalComposition();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z
    CGlobalComposition(CTransport *, CConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_AsyncFlush@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z
    long Channel_AsyncFlush(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_ASYNCFLUSH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Channel_VisualCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z
    long Channel_VisualCaptureBits(CChannelContext *, CResourceTable *, tagMILCMD_CHANNEL_VISUALCAPTUREBITS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreMessagingSession@CGlobalComposition@@EEAAJPEAPEAUIMessageSession@@@Z
    virtual long CreateCoreMessagingSession(IMessageSession * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCapabilitiesChanged@CGlobalComposition@@EEBAXXZ
    virtual void OnCapabilitiesChanged() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BATCHFENCE@@@Z
    long Partition_BatchFence(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_BATCHFENCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z
    long Partition_DesktopCaptureBits(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_DESKTOPCAPTUREBITS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_SetBatchFenceDeferOptions@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETBATCHFENCEDEFEROPTIONS@@@Z
    long Partition_SetBatchFenceDeferOptions(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_SETBATCHFENCEDEFEROPTIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_Synchronize@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SYNCHRONIZE@@@Z
    long Partition_Synchronize(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_SYNCHRONIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Partition_ToggleHolographicSuspension@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION@@@Z
    long Partition_ToggleHolographicSuspension(CChannelContext *, CResourceTable *, tagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z
    virtual long ProcessMessage(int, void const *, unsigned int, CChannelContext *, CResourceTable *);
};
