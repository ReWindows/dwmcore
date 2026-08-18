#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CHueRotationEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CHueRotationEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HUEROTATIONEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_HUEROTATIONEFFECT const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaDescriptor@CHueRotationEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ
    virtual int GetAlphaDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CHueRotationEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CHueRotationEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CHueRotationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
};
