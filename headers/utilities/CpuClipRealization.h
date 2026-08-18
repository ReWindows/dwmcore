#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace CCpuClippingData {
class CpuClipRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z
    long Update(CVisual *, CShape const *, CMILMatrix const &, CShape const *, int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ
    ~CpuClipRealization();
};
} // namespace CCpuClippingData
