#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CBspPreComputeHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBspPreComputeHelper@@QEAA@XZ
    CBspPreComputeHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ
    void CleanupAfterWalking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z
    long PreComputePostSubgraph(CVisual *, CVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z
    long PreComputePreSubgraph(CVisualTree const *, CVisual *, CVisual const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBspPreComputeHelper@@QEAA@XZ
    ~CBspPreComputeHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z
    long CheckVisibilityAndInsertIntoBspTree(CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z
    long PushStacksForBspChildVisual(CVisualTree const *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z
    long PushStacksForBspRootVisual(CVisualTree const *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z
    long PushTransformForChildVisual(CVisualTree const *, CVisual *);
};
