#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace DirectX {
class PackedVector {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z
    unsigned short XMConvertFloatToHalf(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z
    unsigned short * XMConvertFloatToHalfStream(unsigned short *, uint64_t, float const *, uint64_t, uint64_t);
};
} // namespace DirectX
