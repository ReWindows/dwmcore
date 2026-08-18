#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CPolygonBuilder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPolygonBuilder@@QEAA@XZ
    CPolygonBuilder();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPolygonBuilder@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@CPolygonBuilder@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z
    virtual void AddArc(D2D1_ARC_SEGMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@CPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z
    virtual void AddBezier(D2D1_BEZIER_SEGMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@CPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z
    virtual void AddBeziers(D2D1_BEZIER_SEGMENT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z
    virtual void AddLine(D2D_POINT_2F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z
    virtual void AddLines(D2D_POINT_2F const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@CPolygonBuilder@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z
    virtual void AddQuadraticBezier(D2D1_QUADRATIC_BEZIER_SEGMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@CPolygonBuilder@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z
    virtual void AddQuadraticBeziers(D2D1_QUADRATIC_BEZIER_SEGMENT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z
    virtual void BeginFigure(D2D_POINT_2F, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CPolygonBuilder@@EEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z
    virtual void EndFigure(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@CPolygonBuilder@@EEAAXW4D2D1_FILL_MODE@@@Z
    virtual void SetFillMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSegmentFlags@CPolygonBuilder@@EEAAXW4D2D1_PATH_SEGMENT@@@Z
    virtual void SetSegmentFlags(int);
};
