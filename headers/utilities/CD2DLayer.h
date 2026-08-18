#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CD2DLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long ApplyState(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArea@CD2DLayer@@UEBA_KXZ
    virtual uint64_t GetArea() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CD2DLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RestoreState(CDrawingContext *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DLayer@@UEAA@XZ
    virtual ~CD2DLayer();
};
