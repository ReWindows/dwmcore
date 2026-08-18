#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CTransformedGeometryHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z
    static long TransformGeometry(CMILMatrix const *, ID2D1Geometry *, ID2D1Geometry * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CTransformedGeometryHelper@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@CTransformedGeometryHelper@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z
    virtual void AddBeziers(D2D1_BEZIER_SEGMENT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z
    virtual void AddLines(D2D_POINT_2F const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z
    virtual void BeginFigure(D2D_POINT_2F, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z
    CTransformedGeometryHelper(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CTransformedGeometryHelper@@EEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@CTransformedGeometryHelper@@EEAAXW4D2D1_FIGURE_END@@@Z
    virtual void EndFigure(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z
    long FlattenGeometry(ID2D1Geometry const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z
    long GetD2DGeometry(ID2D1Geometry const *, ID2D1Geometry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@CTransformedGeometryHelper@@EEAAXW4D2D1_FILL_MODE@@@Z
    virtual void SetFillMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSegmentFlags@CTransformedGeometryHelper@@EEAAXW4D2D1_PATH_SEGMENT@@@Z
    virtual void SetSegmentFlags(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransformedGeometryHelper@@EEAA@XZ
    virtual ~CTransformedGeometryHelper();
};
