#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CGaussianBlurEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CGaussianBlurEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z
    virtual void CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GAUSSIANBLUREFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_GAUSSIANBLUREFFECT const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void GetBoundsFromInputs(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CGaussianBlurEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CGaussianBlurEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CGaussianBlurEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
};
