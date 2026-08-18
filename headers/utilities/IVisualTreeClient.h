#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class IVisualTreeClient {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInflationScale@IVisualTreeClient@@UEBAMXZ
    virtual float GetInflationScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeBounds@IVisualTreeClient@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetTreeBounds() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseSuperSample@IVisualTreeClient@@UEBA_NXZ
    virtual bool UseSuperSample() const;
};
