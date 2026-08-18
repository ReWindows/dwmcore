#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CCommonRenderingEffect {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z
    CCommonRenderingEffect(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z
    virtual long EmitGeometry(CD3DBatchExecutionContext *, CRenderingBatchCommand const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z
    virtual CDrawListBitmap const & GetBitmap(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectTypeWithAttributes@CCommonRenderingEffect@@UEBA?AW4RenderingEffectType@@XZ
    virtual int GetEffectTypeWithAttributes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ
    virtual unsigned int GetUsedSamplersBitmask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z
    virtual long SetStateOnDevice(CD3DBatchExecutionContext *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z
    virtual long UpdateBitmaps(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInterpolationMode@CCommonRenderingEffect@@UEAAXW4D2D1_INTERPOLATION_MODE@@@Z
    virtual void UpdateInterpolationMode(int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommonRenderingEffect@@MEAA@XZ
    virtual ~CCommonRenderingEffect();
};
