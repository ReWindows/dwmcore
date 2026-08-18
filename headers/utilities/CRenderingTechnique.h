#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CRenderingTechnique {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsBrush@CRenderingTechnique@@QEBA_NPEBVCBrush@@@Z
    bool ContainsBrush(CBrush const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z
    long CreateResource(CD3DDevice *, CD3DConstantBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ
    long CreateShaderBodies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z
    long CreateSurfaceDrawListBrushForIntermediate(unsigned int, EffectInput const &, CSurfaceDrawListBrush * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z
    bool DoesSurfaceHaveBorder(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z
    long ExecuteBlur(CDrawingContext *, EffectInput const &, D2D_VECTOR_2F const &, D2D_SIZE_F const *, EffectInput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ
    CBackdropBrush const * GetBackdropBrushNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ
    bool HasBlurredWallpaperBackdropInput() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ
    bool HasWindowBackdropInput() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderingTechnique@@QEAA@XZ
    ~CRenderingTechnique();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z
    void CollectStateFromFragment(CRenderingTechniqueFragment *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ
    CFragmentIterator GetFragmentIterator() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ
    long UpdateConstantBuffers();
};
