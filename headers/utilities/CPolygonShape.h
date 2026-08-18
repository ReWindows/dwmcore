#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CPolygonShape {
public:
    class SharedData;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z
    CPolygonShape(ID2D1Geometry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOnlyPolygons@CPolygonShape@@UEBA_NXZ
    virtual bool ContainsOnlyPolygons() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenToLineSegments@CPolygonShape@@UEBAJMPEAPEAVCShape@@@Z
    virtual long FlattenToLineSegments(float, CShape * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z
    virtual long GetD2DGeometry(CMILMatrix const *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z
    virtual long GetOutline(ID2D1GeometrySink *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CPolygonShape@@UEBA?AW4Enum@ShapeType@@XZ
    virtual int GetType() const;
};
