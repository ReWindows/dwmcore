#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CBaseClipStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z
    WindissectOpaque Clip(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CBaseClipStack@@QEAAXXZ
    void Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void Top(WindissectOpaque *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z
    long Push(D2D_RECT_F const &);
};
