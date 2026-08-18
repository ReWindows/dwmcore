#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CRenderDataBuilder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRenderDataBuilder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmap@CRenderDataBuilder@@UEAAJI@Z
    virtual long DrawBitmap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGeometry@CRenderDataBuilder@@UEAAJII@Z
    virtual long DrawGeometry(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@CRenderDataBuilder@@UEAAJAEBUD2D_RECT_F@@I@Z
    virtual long DrawImage(D2D_RECT_F const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawMesh2D@CRenderDataBuilder@@UEAAJII@Z
    virtual long DrawMesh2D(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@CRenderDataBuilder@@UEAAJAEBUD2D_RECT_F@@I@Z
    virtual long DrawRectangle(D2D_RECT_F const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSolidRectangle@CRenderDataBuilder@@UEAAJAEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z
    virtual long DrawSolidRectangle(D2D_RECT_F const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTileImage@CRenderDataBuilder@@UEAAJIAEBUD2D_RECT_F@@MAEBUD2D_POINT_2F@@@Z
    virtual long DrawTileImage(unsigned int, D2D_RECT_F const &, float, D2D_POINT_2F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisual@CRenderDataBuilder@@UEAAJI@Z
    virtual long DrawVisual(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CRenderDataBuilder@@UEAAJXZ
    virtual long Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransform@CRenderDataBuilder@@UEAAJI@Z
    virtual long PushTransform(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRenderDataBuilder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRenderDataBuilder@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderDataBuilder@@AEAA@XZ
    CRenderDataBuilder();
};
