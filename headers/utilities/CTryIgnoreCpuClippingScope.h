#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace CDrawingContext {
class CTryIgnoreCpuClippingScope {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    long Enter(CDrawingContext *, WindissectOpaque const &, CMILMatrix const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ
    ~CTryIgnoreCpuClippingScope();
};
} // namespace CDrawingContext
