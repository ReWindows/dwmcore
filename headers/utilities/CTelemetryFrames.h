#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CTelemetryFrames {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z
    static void FrameEnded(bool, bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameStarted@CTelemetryFrames@@SAXXZ
    static void FrameStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementTessellatedRectAxisAlignedRectClip@CTelemetryFrames@@SAXI@Z
    static void IncrementTessellatedRectAxisAlignedRectClip(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementTessellatedRectGeneralClip@CTelemetryFrames@@SAXI@Z
    static void IncrementTessellatedRectGeneralClip(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementTessellatedRectUnClipped@CTelemetryFrames@@SAXI@Z
    static void IncrementTessellatedRectUnClipped(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementWindowBackdropBrushCacheMisses@CTelemetryFrames@@SAXI@Z
    static void IncrementWindowBackdropBrushCacheMisses(unsigned int);
};
