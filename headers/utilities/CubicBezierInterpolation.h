#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CubicBezierInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z
    virtual void Compute(float, int, CExpressionValue *, CExpressionValue *, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, float, float, float, float, KeyframeInterpolation * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateCurveAndDerivative@CubicBezierInterpolation@@IEAAXNNNPEAN0@Z
    void EvaluateCurveAndDerivative(double, double, double, double *, double *);
};
