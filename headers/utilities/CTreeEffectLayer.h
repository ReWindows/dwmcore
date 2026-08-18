#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CTreeEffectLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsOcclusion@CTreeEffectLayer@@UEBA_NXZ
    virtual bool AllowsOcclusion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long ApplyState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z
    static long Create(IDeviceTarget *, D2D_POINTANDSIZE_L const &, CEffectBrush *, CVisual const *, D2D_POINTANDSIZE_F const &, WindissectOpaque const &, CTreeEffectLayer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z
    Matrix3x3 GetDestToTexSpaceTransform(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformToLayerSpace@CTreeEffectLayer@@QEBAXPEAVCMILMatrix@@@Z
    void GetTransformToLayerSpace(CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CTreeEffectLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    static D2D_POINTANDSIZE_L RoundOffLayerSize(WindissectOpaque const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z
    CTreeEffectLayer(D2D_POINTANDSIZE_L const &, D2D_POINTANDSIZE_F const &, IRenderTargetBitmap *, CEffectBrush *, WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z
    virtual long CalcDeviceTransformDelta(CDrawingContext *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z
    void GetEffectiveLayerSizeAndTransform(float, float, float, float, D2D_POINT_2F const &, CDrawingContext *, CMILMatrix *, D2D_SIZE_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformToLayerSpace@CTreeEffectLayer@@AEBA?AVMatrix3x2F@D2D1@@XZ
    ::D2D1::Matrix3x2F GetTransformToLayerSpace() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z
    long InitializeShadowEffect(ID2D1Effect *, D2D_MATRIX_3X2_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ
    void PopLayerTransformFromExplicitSurfaceInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long PostRestoreState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ
    void PushLayerTransformOnExplicitSurfaceInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z
    long RenderEffect(CDrawingContext *, CMILMatrix const &, WindissectOpaque const &, D2D_SIZE_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z
    long RenderMask(D2D_SIZE_F const &, CDrawingContext *, IRenderTargetBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z
    long RenderShadow(D2D_POINT_2F const &, D2D_SIZE_F const &, float, float, CDrawingContext *, CDropShadow *, IRenderTargetBitmap *);
};
