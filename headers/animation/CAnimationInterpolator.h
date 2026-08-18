#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CAnimationInterpolator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z
    bool GetAnimationValue(int64_t, float *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z
    bool GetInterpolatedValue(int64_t, float *, bool *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z
    bool EnsureHandoffCachedData(float, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z
    float InterpolateSinusoidal(DwmAnimationPrimitive const &, int64_t);
};
