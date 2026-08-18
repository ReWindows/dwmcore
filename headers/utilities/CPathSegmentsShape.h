#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CPathSegmentsShape {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z
    CPathSegmentsShape(CPathData const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z
    virtual long GetD2DGeometry(CMILMatrix const *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CPathSegmentsShape@@UEBA?AW4Enum@ShapeType@@XZ
    virtual int GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ
    virtual bool IsEmpty() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPathSegmentsShape@@UEAA@XZ
    virtual ~CPathSegmentsShape();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z
    virtual long GetSimplifiedPathDataInternal(CPathData * *) const;
};
