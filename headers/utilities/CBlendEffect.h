#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CBlendEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BLENDEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_BLENDEFFECT const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CBlendEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CBlendEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
};
