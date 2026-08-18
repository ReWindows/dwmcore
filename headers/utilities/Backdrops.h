#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
namespace DwmDbg {
class Backdrops {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ
    bool IsEtwEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z
    void LogBrushEtwEvent(WindissectOpaque, CVisual const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z
    void LogTreeWalkEtwEvent(WindissectOpaque, CVisual const *, CVisualTree const *, CVisualTreePath const &, WindissectOpaque);
};
} // namespace DwmDbg
