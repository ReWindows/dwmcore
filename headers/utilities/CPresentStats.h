#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
namespace CDummyRemotingSwapChain {
class CPresentStats {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ
    CPresentStats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z
    bool CheckPresentCompleted(CD3DDevice *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z
    long NotifyPresent(CD3DDevice *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ
    ~CPresentStats();
};
} // namespace CDummyRemotingSwapChain
