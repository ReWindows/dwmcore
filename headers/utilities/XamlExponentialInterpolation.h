#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class XamlExponentialInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, int, float, KeyframeInterpolation * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z
    virtual double EvaluateCurve(double);
};
