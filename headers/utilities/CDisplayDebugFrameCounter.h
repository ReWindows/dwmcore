#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CDisplayDebugFrameCounter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z
    long Display(unsigned int, unsigned int, CDrawingContext *, CMILMatrix const &, WindissectOpaque const &, int, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayDebugFrameCounter@@QEAA@XZ
    ~CDisplayDebugFrameCounter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z
    long DisplayNumber(unsigned int, _D3DCOLORVALUE, D2D_RECT_F *, CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z
    long DisplayText(unsigned int, unsigned int, CDrawingContext *, WindissectOpaque const &, int, WindissectOpaque *);
};
