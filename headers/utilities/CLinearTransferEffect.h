#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CLinearTransferEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARTRANSFEREFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_LINEARTRANSFEREFFECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CLinearTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z
    CLinearTransferEffect(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaDescriptor@CLinearTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ
    virtual int GetAlphaDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CLinearTransferEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CLinearTransferEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
};
