#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CComplexShape {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z
    CComplexShape(ID2D1Geometry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z
    virtual long GetD2DGeometry(CMILMatrix const *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CComplexShape@@UEBA?AW4Enum@ShapeType@@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComplexShape@@UEAA@XZ
    virtual ~CComplexShape();
};
