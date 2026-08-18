#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CScrollKeyframeAnimation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z
    CScrollKeyframeAnimation(CComposition *, CInteractionTracker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z
    virtual long CalculateValueWorker(CExpressionValueStack *, uint64_t, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScrollKeyframeAnimation@@UEAA@XZ
    virtual ~CScrollKeyframeAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z
    long TryProcessInertiaModifier(CExpressionValueStack *, uint64_t, int, int, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z
    void UpdateChainingConfigIfBoundaryStateChanges(int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ
    long EnsureInertiaStateChangeAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ
    long EnsureInertiaStateChangeInfo();
};
