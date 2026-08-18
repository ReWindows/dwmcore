#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
namespace Windows::Foundation {
class Numerics {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z
    float determinant(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z
    bool invert(WindissectOpaque &, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z
    WindissectOpaque make_float4x4_from_axis_angle(WindissectOpaque &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z
    WindissectOpaque make_float4x4_from_quaternion(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z
    WindissectOpaque make_float4x4_look_at(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z
    WindissectOpaque make_float4x4_rotation_z(float, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z
    WindissectOpaque make_float4x4_scale(WindissectOpaque &, WindissectOpaque &);
};
} // namespace Windows::Foundation
