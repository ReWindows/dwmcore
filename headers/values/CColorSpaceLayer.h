#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CColorSpaceLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long ApplyState(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CColorSpaceLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long PostRestoreState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
};
