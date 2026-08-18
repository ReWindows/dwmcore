#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CShadowEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CShadowEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z
    virtual void CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CShadowEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHADOWEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_SHADOWEFFECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CShadowEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z
    CShadowEffect(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsFromInputs@CShadowEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void GetBoundsFromInputs(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CShadowEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CShadowEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
};
