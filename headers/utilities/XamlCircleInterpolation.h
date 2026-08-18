#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class XamlCircleInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, int, KeyframeInterpolation * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateCurve@XamlCircleInterpolation@@MEAANN@Z
    virtual double EvaluateCurve(double);
};
