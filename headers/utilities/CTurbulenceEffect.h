#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CTurbulenceEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TURBULENCEEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_TURBULENCEEFFECT const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z
    CTurbulenceEffect(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CTurbulenceEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CTurbulenceEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
};
