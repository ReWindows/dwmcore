#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class KeyframeInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z
    void Interpolate(double, int, CExpressionValue *, CExpressionValue *, CExpressionValue *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z
    static void ExpressionValueLerp(int, float, CExpressionValue *, CExpressionValue *, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z
    static void InterpolateHsl(double, int, CExpressionValue *, CExpressionValue *, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z
    static void InterpolateSpherical(double, int, CExpressionValue *, CExpressionValue *, CExpressionValue *);
};
