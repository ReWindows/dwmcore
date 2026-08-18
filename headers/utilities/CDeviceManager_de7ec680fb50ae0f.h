#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 1 member(s).
namespace CCaptureRenderTarget {
class CDeviceManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z
    CD3DDevice * GetD3DDeviceNoRef(_LUID const &, IFlipProducer *);
};
} // namespace CCaptureRenderTarget
