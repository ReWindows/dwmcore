#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
namespace CRoundedRectangleShape {
class SharedData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z
    static WindissectOpaque * Create(CRoundedRectangleGeometryData const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlattenedShape@SharedData@CRoundedRectangleShape@@QEBA_NXZ
    bool IsFlattenedShape() const;
};
} // namespace CRoundedRectangleShape
