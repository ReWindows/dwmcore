#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CRoundedRectangleGeometryData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    bool FillContainsRect(WindissectOpaque const &, CMILMatrix const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetBaseRect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ
    bool HasAnyRoundedCorners() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ
    bool HasIntersectingCorners() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ
    bool IsEllipse() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z
    bool IsRoundedCorner(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z
    static bool IsRoundedCorner(D2D_VECTOR_2F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z
    static void Transform_AxisAlignedPreserving(CRoundedRectangleGeometryData const &, CMILMatrix const &, CRoundedRectangleGeometryData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z
    static bool TryClipWithRect(CRoundedRectangleGeometryData const &, WindissectOpaque const &, CRoundedRectangleGeometryData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z
    static bool TryMerge(CRoundedRectangleGeometryData const &, CRoundedRectangleGeometryData const &, CRoundedRectangleGeometryData *);
};
