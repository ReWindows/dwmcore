#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class ColorConversion {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z
    static long GetConversionShader(int, bool, unsigned int, int, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool IsHDRColorSpace(int);
};
