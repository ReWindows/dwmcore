#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CCompositionSurfaceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z
    long CreateCompositionSurfaceBitmap(CComposition *, void *, CCompositionSurfaceBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z
    long GetOrCreateCompositionSurfaceInfo(void *, CCompositionSurfaceInfo * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSurfaceMap@CCompositionSurfaceManager@@IEAAJPEAVCCompositionSurfaceInfo@@@Z
    long AddToSurfaceMap(CCompositionSurfaceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z
    virtual bool RemoveFromSurfaceMap(_LUID);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z
    static long ValidateSurfaceHandle(void *, _LUID *);
};
