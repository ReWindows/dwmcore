#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CMegaRectCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendMegaRectCommand@CMegaRectCollection@@QEAAXPEAVCMegaRectBatchCommand@@@Z
    void AppendMegaRectCommand(CMegaRectBatchCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ
    void ComputeOcclusion();
};
