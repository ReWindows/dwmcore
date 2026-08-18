#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CScrollPositionKeyframeAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScrollPositionKeyframeAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z
    CScrollPositionKeyframeAnimation(CComposition *, CInteractionTracker *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ
    D2DVector3 GetLastKeyframeValueForPosition() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ
    D2DVector3 GetNaturalEndpoint() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ
    D2DVector3 GetPositionVelocity() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScrollPositionKeyframeAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScrollPositionKeyframeAnimation@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z
    virtual void EnsureChainingConfigUpdated(CExpressionValueStack *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z
    virtual long EnsureInertiaModifierProcessed(CExpressionValueStack *, uint64_t);
};
