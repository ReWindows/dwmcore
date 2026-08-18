#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CColorTransformLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z
    static long Create(IDeviceTarget *, D2D_POINTANDSIZE_L const &, CColorTransformResource *, CColorTransformLayer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CColorTransformLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
};
