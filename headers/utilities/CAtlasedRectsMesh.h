#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CAtlasedRectsMesh {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAtlasedRectsMesh@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void GetBounds(WindissectOpaque *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAtlasedRectsMesh@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAtlasedRectsMesh@@UEAAKXZ
    virtual unsigned long Release();
};
