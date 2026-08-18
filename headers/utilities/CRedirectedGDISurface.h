#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CRedirectedGDISurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z
    static int Create(HLSURF__*, CGdiSpriteBitmap *, CLegacySurfaceManager *, CRedirectedGDISurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CRedirectedGDISurface@@QEAAJ_KPEAPEAUHRGN__@@@Z
    long GetDirtyRegion(uint64_t, HRGN__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z
    long GetDirtyRegionFromAccum(CRegion &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSignaling@CRedirectedGDISurface@@QEAAJPEAXAEBU_LUID@@@Z
    long StartSignaling(void *, _LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSignaling@CRedirectedGDISurface@@QEAAJXZ
    long StartSignaling();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRedirectedGDISurface@@IEAA@PEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@@Z
    CRedirectedGDISurface(HLSURF__*, CGdiSpriteBitmap *, CLegacySurfaceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRedirectedGDISurface@@IEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRedirectedGDISurface@@MEAA@XZ
    virtual ~CRedirectedGDISurface();
};
