#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CAnimationController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationController@@QEAA@PEAVCComposition@@@Z
    CAnimationController(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchProcessingComplete@CAnimationController@@UEAAXXZ
    virtual void NotifyBatchProcessingComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ
    void OnPlaybackRateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProgressChanged@CAnimationController@@QEAAXXZ
    void OnProgressChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationController@@UEAA@XZ
    virtual ~CAnimationController();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CAnimationController@@EEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ
    void UpdateKeyframeAnimations();
};
