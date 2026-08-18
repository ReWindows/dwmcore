#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CRenderDataBounds {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderState@CRenderDataBounds@@UEAAJXZ
    virtual long ApplyRenderState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CRenderDataBounds@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long Clear(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z
    virtual long DrawBitmap(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGenericInk@CRenderDataBounds@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z
    virtual long DrawGenericInk(IDCompositionDirectInkWetStrokePartner *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z
    virtual long DrawGeometry(CLegacyMilBrush *, CGeometry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@CRenderDataBounds@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long DrawImage(CResource *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInk@CRenderDataBounds@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z
    virtual long DrawInk(ID2D1Ink *, _D3DCOLORVALUE const &, ID2D1InkStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawMesh2D@CRenderDataBounds@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z
    virtual long DrawMesh2D(CGeometry2D *, CImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@CRenderDataBounds@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z
    virtual long DrawRectangle(WindissectOpaque const &, CLegacyMilBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSolidRectangle@CRenderDataBounds@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z
    virtual long DrawSolidRectangle(WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z
    virtual long DrawVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z
    virtual long DrawYCbCrBitmap(CResource *, CResource *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CRenderDataBounds@@UEAAJXZ
    virtual long Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z
    virtual long PushTransform(CTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileImage@CRenderDataBounds@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_POINT_2F@@M@Z
    virtual long TileImage(CResource *, WindissectOpaque const &, D2D_POINT_2F const &, float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void AddBounds(WindissectOpaque const &);
};
