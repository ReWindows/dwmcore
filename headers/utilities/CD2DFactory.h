#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CD2DFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDevice3@@PEAPEAUID2D1Device@@@Z
    long CreateD2DDevice(IDXGIDevice3*, ID2D1Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z
    long CreateRectangleGeometry(D2D_RECT_F const &, ID2D1RectangleGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z
    long CreateRegionGeometry(tagRECT const *, unsigned int, ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ
    long EnsureD2DFactory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DFactory@@QEAA@XZ
    ~CD2DFactory();
};
