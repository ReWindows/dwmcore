#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class COccluderClipStack {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COccluderClipStack@@QEAA@XZ
    COccluderClipStack();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRects@COccluderClipStack@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCornerRects@@@Z
    void GetCornerRects(WindissectOpaque const &, CCornerRects *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@COccluderClipStack@@QEAAXXZ
    void Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z
    long Push(WindissectOpaque const &, CShapePtr const &, CMILMatrix const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COccluderClipStack@@QEAA@XZ
    ~COccluderClipStack();
};
