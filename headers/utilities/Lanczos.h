#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class Lanczos {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z
    void ComputeDecimationFilterKernel(unsigned int, unsigned int, float (* const)[6]);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z
    void ComputeInterpolationFilterKernel(float (* const)[6]);
};
