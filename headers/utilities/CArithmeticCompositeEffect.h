#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CArithmeticCompositeEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_ARITHMETICCOMPOSITEEFFECT const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void GetBoundsFromInputs(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CArithmeticCompositeEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CArithmeticCompositeEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CArithmeticCompositeEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
};
