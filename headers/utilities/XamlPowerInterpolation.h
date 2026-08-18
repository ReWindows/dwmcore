#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class XamlPowerInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, int, float, KeyframeInterpolation * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z
    virtual double EvaluateCurve(double);
};
