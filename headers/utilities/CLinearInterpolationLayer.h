#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CLinearInterpolationLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long ApplyState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z
    static long Create(IDeviceTarget *, D2D_POINTANDSIZE_L const &, WindissectOpaque const &, CLinearInterpolationLayer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CLinearInterpolationLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z
    virtual long CalcDeviceTransformDelta(CDrawingContext *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRestoreState@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long PreRestoreState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
};
