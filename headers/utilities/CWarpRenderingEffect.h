#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CWarpRenderingEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z
    virtual long EmitGeometry(CD3DBatchExecutionContext *, CRenderingBatchCommand const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CWarpRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z
    virtual CDrawListBitmap const & GetBitmap(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectTypeWithAttributes@CWarpRenderingEffect@@UEBA?AW4RenderingEffectType@@XZ
    virtual int GetEffectTypeWithAttributes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsedSamplersBitmask@CWarpRenderingEffect@@UEBAIXZ
    virtual unsigned int GetUsedSamplersBitmask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateOnDevice@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z
    virtual long SetStateOnDevice(CD3DBatchExecutionContext *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmaps@CWarpRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z
    virtual long UpdateBitmaps(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInterpolationMode@CWarpRenderingEffect@@UEAAXW4D2D1_INTERPOLATION_MODE@@@Z
    virtual void UpdateInterpolationMode(int);
};
