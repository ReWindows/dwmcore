#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CFSVPProvider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z
    CFSVPProvider(IOverlayMonitorTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ
    void CheckForFullscreenVideoNotifications();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFSVPProvider@@QEAA@XZ
    ~CFSVPProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWNFHandles@CFSVPProvider@@AEAAJXZ
    long EnsureWNFHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ
    void ReleaseWNFHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ
    long RequestThreadpoolWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z
    void SignalSEB(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ
    void SignalSEBWorker();
};
