#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CPreWalkVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z
    static void RegisterLightCoordspace(CVisual *, CCompositionLight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z
    static void UnregisterLightCoordspace(CVisual *, CCompositionLight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z
    static void UnregisterTransformParentChild(CVisual *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z
    void CalcTransform(CVisual *, CVisualTree const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z
    static void DirtyBoundsForTransformParentChild(CVisual *, CVisualTree const *);
};
