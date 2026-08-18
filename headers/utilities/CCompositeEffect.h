#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CCompositeEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITEEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_COMPOSITEEFFECT const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaDescriptor@CCompositeEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ
    virtual int GetAlphaDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CCompositeEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CCompositeEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
};
