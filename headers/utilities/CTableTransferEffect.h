#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CTableTransferEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CTableTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREFFECT@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_TABLETRANSFEREFFECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z
    long ProcessUpdateTable(CResourceTable *, tagMILCMD_TABLETRANSFEREFFECT_UPDATETABLE const *, void const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTableTransferEffect@@UEAA@XZ
    virtual ~CTableTransferEffect();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z
    CTableTransferEffect(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaDescriptor@CTableTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ
    virtual int GetAlphaDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectGuid@CTableTransferEffect@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetEffectGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DEffectProperties@CTableTransferEffect@@MEAAJPEAUID2D1Effect@@@Z
    virtual long SetD2DEffectProperties(ID2D1Effect *);
};
