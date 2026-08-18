#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CRenderPerf {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderPerf@@QEAA@XZ
    CRenderPerf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z
    void NotifyBeginFrame(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z
    void NotifyDrawVisualTree(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEndFrame@CRenderPerf@@QEAAXXZ
    void NotifyEndFrame();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDrawing@CRenderPerf@@IEAAXXZ
    void ResetDrawing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z
    void Trace_TargetRender(int);
};
