#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CBrushRenderingEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z
    virtual long EmitGeometry(CD3DBatchExecutionContext *, CRenderingBatchCommand const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CBrushRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z
    virtual CDrawListBitmap const & GetBitmap(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectTypeWithAttributes@CBrushRenderingEffect@@UEBA?AW4RenderingEffectType@@XZ
    virtual int GetEffectTypeWithAttributes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ
    virtual unsigned int GetUsedSamplersBitmask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ
    bool HasImageLightingEffect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z
    virtual long SetStateOnDevice(CD3DBatchExecutionContext *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z
    virtual long UpdateBitmaps(CDrawingContext *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrushRenderingEffect@@EEAA@XZ
    virtual ~CBrushRenderingEffect();
};
