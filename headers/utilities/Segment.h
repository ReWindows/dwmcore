#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
namespace Path {
class Segment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z
    static unsigned int GetSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSize@Segment@Path@@SA_NW4SegmentType@2@PEAI@Z
    static bool TryGetSize(int, unsigned int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Segment@Path@@IEAA@W4SegmentType@1@@Z
    Segment(int);
};
} // namespace Path
