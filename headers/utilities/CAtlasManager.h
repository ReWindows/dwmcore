#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CAtlasManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z
    long AllocateGradientStrip(CAtlasEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompactAtlases@CAtlasManager@@QEAAXXZ
    void CompactAtlases();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ
    void ReclaimAtlasEntries();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z
    long CompactSingleAtlas(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z
    static unsigned int DetermineIdealAtlasSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z
    void MergeAtlases(bool *);
};
