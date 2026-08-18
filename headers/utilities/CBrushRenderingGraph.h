#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CBrushRenderingGraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z
    void AdjustNotification(int *, CBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z
    CBrush * GetNamedInput(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z
    long RenderSubgraphToIntermediate(CRenderingTechnique const *, CDrawingContext *, D2D_SIZE_F const &, D2D_VECTOR_2F const &, D2D_SIZE_F const &, EffectInput *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z
    long RenderSubgraphs(CDrawingContext *, D2D_SIZE_F const &, CDrawListBrush const *, unsigned int, CDrawListCache *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrushRenderingGraph@@IEAA@XZ
    CBrushRenderingGraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ
    void CheckIfDisposed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z
    static void CleanupEffectStage(EffectStage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z
    static void ConfigureIntermediateFromBackdropInput(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z
    void ConfigureIntermediateFromInput(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z
    long GetInputBrushParameters(CDrawingContext *, D2D_SIZE_F const &, unsigned int, unsigned int, EffectInput *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z
    long RenderInternalEffect(CDrawingContext *, EffectStage *, WindissectOpaque const &, EffectInput *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z
    long RenderSubgraphToIntermediateInternal(CRenderingTechnique const *, CDrawingContext *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z
    long UpdateDrawListCache(CDrawingContext *, CDrawListBrush const *, EffectStage *, unsigned int, CDrawListCache *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrushRenderingGraph@@MEAA@XZ
    virtual ~CBrushRenderingGraph();
};
