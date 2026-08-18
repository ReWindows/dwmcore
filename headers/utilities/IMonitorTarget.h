#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class IMonitorTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostFrameRate@IMonitorTarget@@UEAA_N_N@Z
    virtual bool BoostFrameRate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupComputeScribble@IMonitorTarget@@UEAAX_N@Z
    virtual void CleanupComputeScribble(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOverlayCandidates@IMonitorTarget@@UEBAPEAVCOverlayContext@@XZ
    virtual COverlayContext * CollectOverlayCandidates() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@IMonitorTarget@@UEBAAEBVCMILMatrix@@XZ
    virtual CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutstandingPresentCount@IMonitorTarget@@UEBAI_K@Z
    virtual unsigned int GetOutstandingPresentCount(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayContext@IMonitorTarget@@UEBAPEAVCOverlayContext@@XZ
    virtual COverlayContext * GetOverlayContext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChain@IMonitorTarget@@UEBAPEAVISwapChain@@XZ
    virtual ISwapChain * GetSwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncLockCount@IMonitorTarget@@UEBAI_KI@Z
    virtual unsigned int GetSyncLockCount(uint64_t, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncLockGroupId@IMonitorTarget@@UEBAIXZ
    virtual unsigned int GetSyncLockGroupId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetTime@IMonitorTarget@@UEAA_K_K0@Z
    virtual uint64_t GetTargetTime(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDDAArrivalOrDeparture@IMonitorTarget@@UEAAJXZ
    virtual long HandleDDAArrivalOrDeparture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComputeScribbleSupported@IMonitorTarget@@UEBA_NXZ
    virtual bool IsComputeScribbleSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@IMonitorTarget@@UEBA_NXZ
    virtual bool IsOccluded() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryInCloneGroup@IMonitorTarget@@UEBA_NXZ
    virtual bool IsPrimaryInCloneGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVBlankBoostSupported@IMonitorTarget@@UEBA_NXZ
    virtual bool IsVBlankBoostSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVRRMaxDuration@IMonitorTarget@@UEBA_NXZ
    virtual bool IsVRRMaxDuration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSwapChain@IMonitorTarget@@UEAAXXZ
    virtual void ReleaseSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncLock@IMonitorTarget@@UEAAXI@Z
    virtual void SyncLock(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPOCaps@IMonitorTarget@@UEAAJXZ
    virtual long UpdateMPOCaps();
};
