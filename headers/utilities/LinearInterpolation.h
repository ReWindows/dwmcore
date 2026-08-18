#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class LinearInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z
    virtual void Compute(float, int, CExpressionValue *, CExpressionValue *, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, KeyframeInterpolation * *);
};
