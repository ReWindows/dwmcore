#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CFilterEffectLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsOcclusion@CFilterEffectLayer@@UEBA_NXZ
    virtual bool AllowsOcclusion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z
    static long Create(IDeviceTarget *, D2D_POINTANDSIZE_L const &, CFilterEffect *, CVisual const *, D2D_POINTANDSIZE_F const &, CFilterEffectLayer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CFilterEffectLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z
    virtual long CalcDeviceTransformDelta(CDrawingContext *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
};
