#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
namespace D2D1 {
class Matrix3x2F {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ
    bool Invert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ
    bool IsIdentity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z
    void SetProduct(::D2D1::Matrix3x2F const &, ::D2D1::Matrix3x2F const &);
};
} // namespace D2D1
