#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CEffectPropertyChangeNotification {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEffectPropertyChangeNotification@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEffectPropertyChangeNotification@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@I@Z
    CEffectPropertyChangeNotification(::Windows::UI::Composition::IEffectInstance *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChange@CEffectPropertyChangeNotification@@UEBAPEAUIEffectInstance@Composition@UI@Windows@@PEAI@Z
    virtual ::Windows::UI::Composition::IEffectInstance * GetChange(unsigned int *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEffectPropertyChangeNotification@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEffectPropertyChangeNotification@@UEAAKXZ
    virtual unsigned long Release();
};
