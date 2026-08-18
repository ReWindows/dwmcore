#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 20 member(s).
class CRoundedRectangleShape {
public:
    class FlattenedShapeSharedData;
    class SharedData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ
    virtual bool AllowsOcclusion() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z
    CRoundedRectangleShape(CRoundedRectangleGeometryData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ
    virtual bool ContainsOnlyPolygons() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z
    virtual long FlattenToLineSegments(float, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBoundsForOcclusion(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z
    virtual long GetD2DGeometry(CMILMatrix const *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z
    virtual long GetOutline(ID2D1GeometrySink *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z
    virtual bool GetRectangles(WindissectOpaque *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    virtual long GetTightBounds(WindissectOpaque *, CMILMatrix const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CRoundedRectangleShape@@UEBA?AW4Enum@ShapeType@@XZ
    virtual int GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CRoundedRectangleShape@@UEBA_NXZ
    virtual bool IsEmpty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z
    virtual bool IsRectangles(unsigned int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRoundedRectangleShape@@UEAA@XZ
    virtual ~CRoundedRectangleShape();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z
    void AddNonIntersectedD2DGeometry(ID2D1GeometrySink *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z
    void CalcEdgesAndControlPoints(CMilPoint2F *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z
    long CreateIntersectedD2DGeometry(ID2D1Geometry * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z
    long CreateNonIntersectedD2DGeometry(ID2D1Geometry * *) const;
};
