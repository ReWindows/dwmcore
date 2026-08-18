#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CColorMatrixEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORMATRIXEFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_COLORMATRIXEFFECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z
    CColorMatrixEffect(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaDescriptor@CColorMatrixEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ
    virtual int GetAlphaDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CColorMatrixEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CColorMatrixEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
};
