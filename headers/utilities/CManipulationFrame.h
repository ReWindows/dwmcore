#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CManipulationFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z
    static long Create(tagMANIPULATION_INPUT_INFO const *, CManipulationFrame * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ
    bool IsMousewheelFrame() const;
};
