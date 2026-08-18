#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class XamlElasticInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z
    static long Create(int, int, int, float, KeyframeInterpolation * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z
    virtual double EvaluateCurve(double);
};
