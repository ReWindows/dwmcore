#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CDebugFrameCounter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ
    unsigned int GetCPUTimePerFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ
    unsigned int GetFrameRate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ
    uint64_t CurrentTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ
    unsigned int GetFrameCountInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z
    void UpdateGlitchList(uint64_t &);
};
