#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CRegionShape {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z
    void BuildFromCRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z
    void BuildFromRects(WindissectOpaque const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOnlyPolygons@CRegionShape@@UEBA_NXZ
    virtual bool ContainsOnlyPolygons() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenToLineSegments@CRegionShape@@UEBAJMPEAPEAVCShape@@@Z
    virtual long FlattenToLineSegments(float, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z
    virtual long GetD2DGeometry(CMILMatrix const *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z
    virtual bool GetRectangles(WindissectOpaque *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    virtual long GetTightBounds(WindissectOpaque *, CMILMatrix const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CRegionShape@@UEBA?AW4Enum@ShapeType@@XZ
    virtual int GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z
    virtual long GetUnOccludedWorldShape(WindissectOpaque const &, CMILMatrix const &, CShape * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z
    long IntersectWithRect(WindissectOpaque const &, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z
    virtual bool IsRectangles(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmpty@CRegionShape@@QEAAXXZ
    void SetEmpty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegionShape@@UEAA@XZ
    virtual ~CRegionShape();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ
    long EnsureD2DGeometry() const;
};
