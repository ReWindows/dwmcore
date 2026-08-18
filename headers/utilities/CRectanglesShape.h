#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CRectanglesShape {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z
    void AddRect(D2D_RECT_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z
    void AddRectWithPartialOcclusion(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFromRectFs@CRectanglesShape@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z
    void BuildFromRectFs(WindissectOpaque const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z
    CRectanglesShape(D2D_RECT_F const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z
    CRectanglesShape(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOnlyPolygons@CRectanglesShape@@UEBA_NXZ
    virtual bool ContainsOnlyPolygons() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CRectanglesShape@@QEAAXAEBV1@@Z
    void Copy(CRectanglesShape const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenToLineSegments@CRectanglesShape@@UEBAJMPEAPEAVCShape@@@Z
    virtual long FlattenToLineSegments(float, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z
    virtual long GetD2DGeometry(CMILMatrix const *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z
    virtual bool GetRectangles(WindissectOpaque *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    virtual long GetTightBounds(WindissectOpaque *, CMILMatrix const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CRectanglesShape@@UEBA?AW4Enum@ShapeType@@XZ
    virtual int GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z
    virtual long GetUnOccludedWorldShape(WindissectOpaque const &, CMILMatrix const &, CShape * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z
    long IntersectWithRect(WindissectOpaque const &, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CRectanglesShape@@UEBA_NXZ
    virtual bool IsEmpty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z
    virtual bool IsRectangles(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z
    void SetSingleRect(D2D_RECT_F const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRectanglesShape@@UEAA@XZ
    virtual ~CRectanglesShape();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DGeometry@CRectanglesShape@@AEBAJXZ
    long EnsureD2DGeometry() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CRectanglesShape@@AEAAXXZ
    void Reset();
};
