#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
namespace FastRegion::Internal {
class CStripe {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z
    void Intersect(::FastRegion::Internal::CStripe const *, ::FastRegion::Internal::CStripe const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ
    bool IsEqualToPrevious() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z
    void Subtract(::FastRegion::Internal::CStripe const *, ::FastRegion::Internal::CStripe const *, ::FastRegion::Internal::CStripe const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z
    void Union(::FastRegion::Internal::CStripe const *, ::FastRegion::Internal::CStripe const *);
};
} // namespace FastRegion::Internal
