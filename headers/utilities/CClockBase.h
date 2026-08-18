#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CClockBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentTiming@CClockBase@@UEBAAEBUCOMPOSITION_CLOCK@@XZ
    virtual COMPOSITION_CLOCK const & CurrentTiming() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimatedNextFrameTargetTime@CClockBase@@UEBA_K_K@Z
    virtual uint64_t EstimatedNextFrameTargetTime(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParallelMode@CClockBase@@UEBA_NXZ
    virtual bool IsParallelMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForNextTick@CClockBase@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z
    virtual int WaitForNextTick(void *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CClockBase@@IEAA@XZ
    CClockBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTimeoutTimeMs@CClockBase@@IEBAIXZ
    unsigned int CalcTimeoutTimeMs() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z
    void EnsureForwardTiming(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTime@CClockBase@@IEBA_KXZ
    uint64_t GetCurrentTime() const;
};
