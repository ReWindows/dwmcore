#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class StepInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z
    virtual void Compute(float, int, CExpressionValue *, CExpressionValue *, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, int, int, int, bool, bool, KeyframeInterpolation * *);
};
