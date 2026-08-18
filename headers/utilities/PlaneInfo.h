#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace CCheckMPOCache {
class PlaneInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z
    bool IsEqual(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const &) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaneInfo@CCheckMPOCache@@QEAA@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z
    PlaneInfo(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const &);
};
} // namespace CCheckMPOCache
