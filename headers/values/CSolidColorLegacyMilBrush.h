#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CSolidColorLegacyMilBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSolidColorLegacyMilBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z
    long GetRealizedColor(_D3DCOLORVALUE *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ
    virtual bool IsConstantOpaque() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSolidColorLegacyMilBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSolidColorLegacyMilBrush@@UEAAKXZ
    virtual unsigned long Release();
};
