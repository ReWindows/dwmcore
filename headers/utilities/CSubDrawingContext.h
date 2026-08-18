#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CSubDrawingContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z
    long DrawVisualTree(CVisualTree const *, WindissectOpaque const &, CMILMatrix const &, COcclusionContext const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSubDrawingContext@@QEAA@XZ
    ~CSubDrawingContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z
    long BeginFrame(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrame@CSubDrawingContext@@AEAAX_N@Z
    void EndFrame(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSubDrawingContext@@AEAAJXZ
    long Initialize();
};
