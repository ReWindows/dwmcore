#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class ClipPlaneIterator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z
    long ClipToPolygon(CPolygon *, CMILMatrix const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ
    bool HasMoreClipPlanes() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ
    long UpdateClippingPlanes();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClipPlaneIterator@@QEAA@XZ
    ~ClipPlaneIterator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z
    void CalculateClipPlanesFromLineSegments(WindissectOpaque *, unsigned int, D2D_VECTOR_4F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z
    void GetMorePlaceholderClipPlanes(D2D_VECTOR_4F *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z
    void GetMoreStandardClipPlanes(D2D_VECTOR_4F *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToStart@ClipPlaneIterator@@AEAAXXZ
    void ResetToStart();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z
    long SetClipPoints(D2D_POINT_2F const *, unsigned int, int const *, D2D_MATRIX_3X2_F const &);
};
