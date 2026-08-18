#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class XamlSineInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, int, KeyframeInterpolation * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z
    virtual double EvaluateCurve(double);
};
