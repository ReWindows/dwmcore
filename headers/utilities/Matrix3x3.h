#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class Matrix3x3 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ
    CMILMatrix As3DHomogeneous() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool Get2DScaleDimensionsWithPerspective(float *, float *, WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAffine@Matrix3x3@@QEBA_NXZ
    bool Is2DAffine() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z
    D2D_POINT_2F TransformHomogeneousPoint(D2D_POINT_2F) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z
    static bool TryInvert(Matrix3x3const &, Matrix3x3*);
};
