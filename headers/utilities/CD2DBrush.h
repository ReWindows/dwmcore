#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CD2DBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z
    static long Create(CD2DResourceManager *, ID2D1Brush *, CD2DBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CD2DBrush@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CD2DBrush@@UEAAXXZ
    virtual void ReleaseD2DResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DBrush@@UEAA@XZ
    virtual ~CD2DBrush();
};
