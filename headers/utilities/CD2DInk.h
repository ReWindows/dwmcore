#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CD2DInk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z
    static long Create(CD2DResourceManager *, ID2D1Ink *, ID2D1InkStyle *, CD2DInk * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z
    long GetID2D1InkAndInkStyle(ID2D1Ink * *, ID2D1InkStyle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CD2DInk@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CD2DInk@@UEAAXXZ
    virtual void ReleaseD2DResources();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DInk@@MEAA@XZ
    virtual ~CD2DInk();
};
