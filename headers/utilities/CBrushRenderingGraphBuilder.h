#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CBrushRenderingGraphBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z
    static long Build(CBrush *, CBrushRenderingGraph * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z
    void AddNamedInputToFragment(CRenderingTechniqueFragment *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ
    void CheckBackdropInputs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z
    long CheckFragmentSize(CRenderingTechniqueFragment *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ
    long CreateShaderBodies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z
    long EnsureShaderCache(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z
    long AddBrush(CBrush *, bool, CRenderingTechniqueFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z
    long AddEffectBrush(CEffectBrush *, bool, CRenderingTechniqueFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z
    long AddMaskBrush(CMaskBrush *, bool, CRenderingTechniqueFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z
    long AddNineGridBrush(CNineGridBrush *, bool, CRenderingTechniqueFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z
    long AddRadialGradientBrush(CRadialGradientBrush *, bool, CRenderingTechniqueFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z
    long Build(CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z
    bool FindExistingNamedInput(WindissectOpaque const &, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z
    bool IsIntermediateUsedInBlur(unsigned int) const;
};
