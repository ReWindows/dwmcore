#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CAnimationTrigger {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationTrigger@@QEAA@PEAVCComposition@@@Z
    CAnimationTrigger(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationsChanged@CAnimationTrigger@@QEAAXXZ
    void OnAnimationsChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationTrigger@@UEAA@XZ
    virtual ~CAnimationTrigger();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CAnimationTrigger@@EEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ
    bool ShouldSendAnimationNotification() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionTrue@CAnimationTrigger@@AEAAXXZ
    void TransitionTrue();
};
