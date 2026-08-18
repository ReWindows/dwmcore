#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CD2DEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z
    static long Create(CD2DResourceManager *, ID2D1Effect *, CD2DEffect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z
    long GetID2DEffect(ID2D1Effect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CD2DEffect@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CD2DEffect@@UEAAXXZ
    virtual void ReleaseD2DResources();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z
    long Initialize(ID2D1Effect *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DEffect@@MEAA@XZ
    virtual ~CD2DEffect();
};
