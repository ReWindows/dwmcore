#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
class CRenderTargetManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z
    bool AdvanceFrame(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderTargetManager@@QEAA@XZ
    CRenderTargetManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ
    long CheckOcclusionState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z
    void CleanupComputeScribble(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z
    unsigned int CollectStats(tagCOMPOSITION_TARGET_ID_AND_STATS * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ
    void ForceFullDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ
    long HandleDDAArrivalOrDeparture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ
    long RenderAndPresent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTargetManager@@QEAA@XZ
    ~CRenderTargetManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ
    void UpdateMPOCaps();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDeferredRenderTargets@CRenderTargetManager@@AEAAXXZ
    void AddDeferredRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z
    void AddRenderTarget(IRenderTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ
    bool ApplyClockBoost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ
    long ComputeOverlayConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ
    void EndTargetEnumeration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ
    long EnsureDxDisplayModeChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ
    long NotifyTargetsOfOcclusionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z
    void RemoveRenderTarget(IRenderTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    void SortMonitorTargets(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ
    void UpdateCapabilities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFastestMonitor@CRenderTargetManager@@AEAA_NXZ
    bool UpdateFastestMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryMonitor@CRenderTargetManager@@AEAA_NXZ
    bool UpdatePrimaryMonitor();
};
