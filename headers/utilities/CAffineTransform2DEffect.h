#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CAffineTransform2DEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z
    virtual void CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_AFFINETRANSFORM2DEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_AFFINETRANSFORM2DEFFECT const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void GetBoundsFromInputs(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CAffineTransform2DEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CAffineTransform2DEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z
    void TransformBounds(::D2D1::Matrix3x2F &, WindissectOpaque const &, WindissectOpaque *);
};
