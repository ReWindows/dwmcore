#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CHitTestContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z
    static bool GetPointInLocalSpace(D2D_POINT_2F const &, CMILMatrix const &, D2D_POINT_2F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z
    long HitTestPoint(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z
    long HitTestTreeWalk(CVisualTree *, float, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PostSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PreSubgraph(CVisualTree const *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHitTestContext@@QEAA@XZ
    ~CHitTestContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z
    long BspHitTest(CMILMatrix const &, CPolygon *);
};
