#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
namespace FastRegion::Internal {
class CRgnData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z
    void BeginIterator(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z
    static int EstimateSizeIntersect(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z
    static int EstimateSizeSubtract(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z
    static int EstimateSizeUnion(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z
    void Intersect(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z
    static bool Intersects(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z
    bool Offset(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z
    void StepIterator(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z
    void Subtract(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z
    void Union(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
};
} // namespace FastRegion::Internal
