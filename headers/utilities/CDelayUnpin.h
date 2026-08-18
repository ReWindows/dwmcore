#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
namespace CD3DDevice {
class CDelayUnpin {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnpinTarget@CDelayUnpin@CD3DDevice@@QEAAXU_LUID@@II@Z
    void AddUnpinTarget(_LUID, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z
    CDelayUnpin(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyToUnpin@CDelayUnpin@CD3DDevice@@QEAA_NU_LUID@@II@Z
    bool ReadyToUnpin(_LUID, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelayUnpin@CD3DDevice@@QEAA@XZ
    ~CDelayUnpin();
};
} // namespace CD3DDevice
