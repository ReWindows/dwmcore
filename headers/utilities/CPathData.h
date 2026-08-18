#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 25 member(s).
class CPathData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z
    CPathData(ID2D1Factory *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    long GetD2DGeometry(ID2D1Factory *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ
    WindissectOpaque GetPathData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSimpleGeometry@CPathData@@QEBA_NXZ
    bool IsSimpleGeometry() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z
    long Open(ID2D1SimplifiedGeometrySink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z
    long Simplify(CPathData * *) const;
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPathData@@MEAA@XZ
    virtual ~CPathData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z
    virtual void AddArc(D2D1_ARC_SEGMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z
    virtual void AddBezier(D2D1_BEZIER_SEGMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z
    virtual void AddBeziers(D2D1_BEZIER_SEGMENT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z
    virtual void AddLine(D2D_POINT_2F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z
    virtual void AddLines(D2D_POINT_2F const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z
    virtual void AddQuadraticBezier(D2D1_QUADRATIC_BEZIER_SEGMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z
    virtual void AddQuadraticBeziers(D2D1_QUADRATIC_BEZIER_SEGMENT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z
    void AppendSegment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z
    virtual void BeginFigure(D2D_POINT_2F, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CPathData@@EEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z
    virtual void EndFigure(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z
    long PushIntoSink(ID2D1GeometrySink *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPathData@@AEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@CPathData@@EEAAXW4D2D1_FILL_MODE@@@Z
    virtual void SetFillMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSegmentFlags@CPathData@@EEAAXW4D2D1_PATH_SEGMENT@@@Z
    virtual void SetSegmentFlags(int);
};
