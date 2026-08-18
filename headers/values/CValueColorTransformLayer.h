#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CValueColorTransformLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z
    static long Create(IDeviceTarget *, D2D_POINTANDSIZE_L const &, MilColorTransform const &, CValueColorTransformLayer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CValueColorTransformLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CValueColorTransformLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@AEBUMilColorTransform@@@Z
    CValueColorTransformLayer(D2D_POINTANDSIZE_L const &, IRenderTargetBitmap *, MilColorTransform const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CValueColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
};
