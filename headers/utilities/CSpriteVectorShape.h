#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 27 member(s).
class CSpriteVectorShape {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSpriteVectorShape@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSpriteVectorShape@@QEAA@PEAVCComposition@@@Z
    CSpriteVectorShape(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ
    void ComputeBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z
    long CreateRenderTasks(CShapeDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildAt@CSpriteVectorShape@@UEBAPEAVCVectorShape@@I@Z
    virtual CVectorShape * GetChildAt(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@CSpriteVectorShape@@UEBAIXZ
    virtual unsigned int GetChildrenCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CSpriteVectorShape@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFillBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETFILLBRUSH@@@Z
    long ProcessSetFillBrush(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETFILLBRUSH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetGeometry@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY@@@Z
    long ProcessSetGeometry(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetNonScalingStroke@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE@@@Z
    long ProcessSetNonScalingStroke(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStrokeBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEBRUSH@@@Z
    long ProcessSetStrokeBrush(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEBRUSH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z
    long ProcessSetStrokeDashArray(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStrokeDashOffset@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET@@@Z
    long ProcessSetStrokeDashOffset(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStrokeMiterLimit@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT@@@Z
    long ProcessSetStrokeMiterLimit(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStrokeStyle@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE@@@Z
    long ProcessSetStrokeStyle(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStrokeThickness@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS@@@Z
    long ProcessSetStrokeThickness(CResourceTable *, tagMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSpriteVectorShape@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSpriteVectorShape@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CSpriteVectorShape@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSpriteVectorShape@@UEAA@XZ
    virtual ~CSpriteVectorShape();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ
    long EnsureStrokeStyleForBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ
    long EnsureStrokeStyleForRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetBoundsStrokeStyleInvalidatingAnimatedProperty(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetRenderStrokeStyleInvalidatingAnimatedProperty(WindissectOpaque const *, void const *);
};
