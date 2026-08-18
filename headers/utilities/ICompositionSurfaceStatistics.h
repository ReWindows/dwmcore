#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class ICompositionSurfaceStatistics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmRecordedStatistics@ICompositionSurfaceStatistics@@UEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void ConfirmRecordedStatistics(tagCOMPOSITION_TARGET_ID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOverlayFrame@ICompositionSurfaceStatistics@@UEAA_NAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z
    virtual bool NotifyOverlayFrame(tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotifyOfFlipAway@ICompositionSurfaceStatistics@@UEAA_NXZ
    virtual bool ShouldNotifyOfFlipAway();
};
