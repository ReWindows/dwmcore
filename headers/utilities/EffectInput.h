#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class EffectInput {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectInput@@QEAA@AEBU0@@Z
    EffectInput(EffectInput const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectInput@@QEAA@XZ
    EffectInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresWrapping@EffectInput@@SA_NAEBU1@@Z
    static bool RequiresWrapping(EffectInput const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@EffectInput@@SAXPEAU1@@Z
    static void Reset(EffectInput *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EffectInput@@QEAA@XZ
    ~EffectInput();
};
