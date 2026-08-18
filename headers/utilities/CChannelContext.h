#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class CChannelContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDuplicateResource@CChannelContext@@QEAAJI@Z
    long CompleteDuplicateResource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z
    static long Create(unsigned int, unsigned long, uint64_t, void *, CConnection *, CChannelContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ
    void DecreasePendingEffectCompilations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ
    void IncreasePendingEffectCompilations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForceRender@CChannelContext@@QEAAXXZ
    void OnForceRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ
    void OnIsHwProtectionTeardownEnabledChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReevaluateDDA@CChannelContext@@QEAAXXZ
    void OnReevaluateDDA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReevaluateMPOCapabilities@CChannelContext@@QEAAXXZ
    void OnReevaluateMPOCapabilities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshRemoteTreeConnection@CChannelContext@@QEAAXXZ
    void OnRefreshRemoteTreeConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ
    void OnSuspendAnimationsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateCursorMouseMove@CChannelContext@@QEAAXXZ
    void OnUpdateCursorMouseMove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z
    long PostMessageToChannel(MIL_MESSAGE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationId@CChannelContext@@QEAAJPEBG@Z
    long SetApplicationId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z
    void SetOwnerProcessName(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalFinishedFlush@CChannelContext@@QEAAXXZ
    void SignalFinishedFlush();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAXPEAVCConnection@@@Z
    CChannelContext(unsigned int, unsigned long, CProcessAttribution *, void *, CConnection *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CChannelContext@@EEAA@XZ
    virtual ~CChannelContext();
};
