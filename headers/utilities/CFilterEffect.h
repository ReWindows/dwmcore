#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
class CFilterEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CFilterEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z
    virtual void CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z
    virtual long CalcEntireInputBoundsFromInputResources(WindissectOpaque *, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z
    bool ContainEffectInChain(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z
    long ContainEffectInChainInputs(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z
    long CreateResource(CD3DDevice *, CD2DEffect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    long GetBounds(WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z
    long GetD2DEffectNoRef(CDrawingContext *, ID2D1Bitmap1*, ID2D1Effect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z
    static bool InvertTransformToCalc2DBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z
    bool IsOpaque(CVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z
    long ProcessUpdateInputs(CResourceTable *, tagMILCMD_FILTEREFFECT_UPDATEINPUTS const *, void const *, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z
    CFilterEffect(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z
    bool CheckInputsForOpacity(CVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaDescriptor@CFilterEffect@@MEAA?AW4FilterEffectOpacity@1@XZ
    virtual int GetAlphaDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void GetBoundsFromInputs(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilterEffect@@MEAA@XZ
    virtual ~CFilterEffect();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ
    void EmptyFilterInputMap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z
    long GetInputEffectForAtlasedSurface(CDrawingContext *, WindissectOpaque const &, CCompositionSurfaceBitmap *, ID2D1Effect * *);
};
