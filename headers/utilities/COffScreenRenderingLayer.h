#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class COffScreenRenderingLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long ApplyState(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@COffScreenRenderingLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsOcclusion@COffScreenRenderingLayer@@EEBA_NXZ
    virtual bool AllowsOcclusion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRestoreState@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long PreRestoreState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderNoOpLayer@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderNoOpLayer(CDrawingContext *);
};
