#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CPolygon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z
    long CompareAndSplit(CPolygon *, int *, CPolygon * *, CPolygon * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z
    static long Create(WindissectOpaque *, CVisual *, CContent *, CMILMatrix *, float, unsigned int, int, int, int, bool, bool, D2D_VECTOR_4F *, CPolygon * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z
    static long Create(WindissectOpaque *, CPolygon *, CPolygon * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z
    long D2DGeometryFromPolygon(ID2D1PathGeometry *, CMILMatrix const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z
    long Draw(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z
    void GetRenderOptions(MilRenderOptions *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z
    long HitTestWithTransformation(D2D_POINT_2F const &, CMILMatrix const &, CMILMatrix const &, int const &, bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z
    bool IsPointInPolygon(__m128const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPolygon@@EEAA@XZ
    virtual ~CPolygon();
};
