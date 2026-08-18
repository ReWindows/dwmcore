#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CPreComputeContext {
public:
    class SubTreeContext;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPreComputeContext@@QEAA@XZ
    CPreComputeContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PostSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PreSubgraph(CVisualTree const *, bool *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z
    long PreCompute(CVisualTree *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z
    long AddLocalBoundsToSubTreesDirtyRegion(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z
    void AddVisualToBVIPreRenderList(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z
    long ProcessPostSubgraphBackdropInput(CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z
    long ProcessPostSubgraphWindowBackdropInput(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z
    long ProcessPostSubgraphWindowBackgroundTreatment(CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1@PEAVCMILMatrix@@@Z
    long ProcessVisualsWorldTransformAndClip(CVisual *, CVisual *, WindissectOpaque *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z
    long UpdateBVIForVisual(CVisual *, WindissectOpaque const &, bool, bool *) const;
};
