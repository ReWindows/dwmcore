#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CLegacyMilBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConstantOpaque@CLegacyMilBrush@@UEBA_NXZ
    virtual bool IsConstantOpaque() const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z
    static float GetOpacity(float, CFloatResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CLegacyMilBrush@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
};
