#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CShape {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsOcclusion@CShape@@UEBA_NXZ
    virtual bool AllowsOcclusion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z
    static long BuildFromRectFs(WindissectOpaque const *, unsigned int, CShape * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z
    static long ClipWithRect(CShape const &, tagRECT const &, CShape * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z
    static long Combine(CShape const *, CMILMatrix const *, CShape const *, CMILMatrix const *, int, CShape * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOnlyPolygons@CShape@@UEBA_NXZ
    virtual bool ContainsOnlyPolygons() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z
    long CopyShape(CMILMatrix const *, CShape * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z
    long FillContainsPoint(D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z
    virtual long FlattenToLineSegments(float, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsForOcclusion@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBoundsForOcclusion(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z
    virtual long GetOutline(ID2D1GeometrySink *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectangles@CShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z
    virtual bool GetRectangles(WindissectOpaque *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z
    long GetSimplifiedPathData(CPathData * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    virtual long GetTightBounds(WindissectOpaque *, CMILMatrix const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnOccludedWorldShape@CShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAV1@@Z
    virtual long GetUnOccludedWorldShape(WindissectOpaque const &, CMILMatrix const &, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z
    long GetWidenedBounds(WindissectOpaque *, float, ID2D1StrokeStyle1*, D2D_MATRIX_3X2_F const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ
    bool IsAxisAlignedRectangle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CShape@@UEBA_NXZ
    virtual bool IsEmpty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectangles@CShape@@UEBA_NPEAI@Z
    virtual bool IsRectangles(unsigned int *) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z
    virtual long GetSimplifiedPathDataInternal(CPathData * *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z
    static long D2DCombine(CShape *, CMILMatrix const *, CShape *, CMILMatrix const *, int, CShape * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z
    static long TryOptimizedCombinePaths(CShape *, CMILMatrix const *, CShape *, CMILMatrix const *, int, CShape * *);
};
