#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class MILMatrix3x2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z
    void InferAffineMatrix(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ
    bool Is2DAxisAlignedPreservingApprox() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z
    void SetInverse(MILMatrix3x2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z
    void SetProduct(MILMatrix3x2const &, MILMatrix3x2const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUD2D_RECT_F@@AEAU2@@Z
    void Transform2DBounds(D2D_RECT_F const &, D2D_RECT_F &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPoints@MILMatrix3x2@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z
    void TransformPoints(D2D_POINT_2F const *, D2D_POINT_2F *, unsigned int) const;
};
