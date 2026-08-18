#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
namespace CDropShadow {
class ShadowIntermediates {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z
    bool CanUseFastShadow(D2D_SIZE_F const &, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z
    long CreateShadowOpacityBrush(CDrawingContext *, D2D_SIZE_F const &, float, CDrawListBrush * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ
    bool IsRectangularShadow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    void OnChanged(int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z
    long SetMask(CDropShadow *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z
    long UpdateIntermediates(CDrawingContext *, D2D_SIZE_F const &, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShadowIntermediates@CDropShadow@@QEAA@XZ
    ~ShadowIntermediates();
};
} // namespace CDropShadow
