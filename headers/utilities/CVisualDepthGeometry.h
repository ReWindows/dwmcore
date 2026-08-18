#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CVisualDepthGeometry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z
    CVisualDepthGeometry(CVisual *, CMILMatrix const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z
    int GetRelativeOrder(CVisualDepthGeometry const &) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z
    bool AreVisualsAbutting(CVisualDepthGeometry const &, WindissectOpaque *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z
    bool ContainsPoint(WindissectOpaque &, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Foundation@Windows@@H@Z
    bool DoesPolygonHaveEdgeThatContainsAllPoints(WindissectOpaque *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z
    void FindIntersectionOfCornersAndLines(CVisualDepthGeometry const *, WindissectOpaque*, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z
    bool FindOverlappingPoint(CVisualDepthGeometry const &, WindissectOpaque*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z
    void Init(WindissectOpaque &, CMILMatrix const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBoundingBoxOverlappingXY@CVisualDepthGeometry@@AEBA_NAEBV1@@Z
    bool IsBoundingBoxOverlappingXY(CVisualDepthGeometry const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z
    bool IsCoplanar(CVisualDepthGeometry const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z
    bool IsPointOnPolygonBorder(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeOrder@CVisualDepthGeometry@@AEBA?AW4RelativeOrder@@AEBV1@@Z
    int TreeOrder(CVisualDepthGeometry const &) const;
};
