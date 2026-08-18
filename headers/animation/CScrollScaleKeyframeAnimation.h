#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CScrollScaleKeyframeAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScrollScaleKeyframeAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ
    float GetLastKeyframeValueForScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ
    float GetNaturalEndpoint() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ
    float GetScaleVelocity() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScrollScaleKeyframeAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScrollScaleKeyframeAnimation@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z
    virtual void EnsureChainingConfigUpdated(CExpressionValueStack *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z
    virtual long EnsureInertiaModifierProcessed(CExpressionValueStack *, uint64_t);
};
