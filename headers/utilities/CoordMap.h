#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CoordMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z
    long AddNineGrid(int, D2D_RECT_F const &, Insets const &, D2D_RECT_F const &, Insets const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CoordMap@@QEBA_NXZ
    bool IsEmpty() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoordMap@@QEAA@XZ
    ~CoordMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z
    long AddEntry(WindissectOpaque &, int, WindissectOpaque const &, int);
};
