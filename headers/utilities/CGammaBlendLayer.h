#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CGammaBlendLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long ApplyState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z
    static long Create(IDeviceTarget *, D2D_POINTANDSIZE_L const &, CGammaBlendLayer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CGammaBlendLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDeviceTransformDelta@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z
    virtual long CalcDeviceTransformDelta(CDrawingContext *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z
    long CopyAndTransform(CDrawingContext *, IDeviceTexture *, D2D_POINTANDSIZE_L const &, D2D_POINTANDSIZE_L const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
};
