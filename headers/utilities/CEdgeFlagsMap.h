#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CEdgeFlagsMap {
public:
    class CPolygonMapStrategy;
    class CRectangleMapStrategy;
    class ResolveEdgeFlagsResult;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z
    void AddEdgeFlags(D2D_RECT_F const &, int, Matrix3x3const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z
    void Copy(CEdgeFlagsMap const &, D2D_MATRIX_3X2_F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$StridedSpan@$$CBUD2D_VECTOR_2F@@@@PEBUD2D_POINT_2F@@W4D2D1_EDGE_FLAGS@@PEAUResolveEdgeFlagsResult@1@M@Z
    void ResolveEdgeFlags(WindissectOpaque, D2D_POINT_2F const *, int, WindissectOpaque *, float) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEdgeFlagsMap@@QEAA@XZ
    ~CEdgeFlagsMap();
};
