#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CGradientColorData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddColorWithPosition@CGradientColorData@@QEAAXPEBU_D3DCOLORVALUE@@M@Z
    void AddColorWithPosition(_D3DCOLORVALUE const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOpacity@CGradientColorData@@QEAAXM@Z
    void ApplyOpacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CGradientColorData@@QEAAXXZ
    void Clear();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGradientColorData@@QEAA@XZ
    ~CGradientColorData();
};
