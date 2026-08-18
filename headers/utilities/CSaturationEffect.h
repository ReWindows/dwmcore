#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CSaturationEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSaturationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SATURATIONEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_SATURATIONEFFECT const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaDescriptor@CSaturationEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ
    virtual int GetAlphaDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CSaturationEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CSaturationEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CSaturationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
};
