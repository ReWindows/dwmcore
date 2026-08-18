#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 24 member(s).
class CRadialGradientBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialGradientBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z
    CRadialGradientBrush(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z
    long CreateRadialGradientEffect(CRadialGradientEffect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z
    virtual long GetD2DBrush(CDrawingContext *, D2D_RECT_F const &, ID2D1Brush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CRadialGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEllipseCenter@CRadialGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSECENTER@@@Z
    long ProcessSetEllipseCenter(CResourceTable *, tagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSECENTER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEllipseRadius@CRadialGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSERADIUS@@@Z
    long ProcessSetEllipseRadius(CResourceTable *, tagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSERADIUS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOriginOffset@CRadialGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RADIALGRADIENTBRUSH_SETORIGINOFFSET@@@Z
    long ProcessSetOriginOffset(CResourceTable *, tagMILCMD_RADIALGRADIENTBRUSH_SETORIGINOFFSET const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialGradientBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialGradientBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CRadialGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialGradientBrush@@UEAA@XZ
    virtual ~CRadialGradientBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z
    virtual long EnsureBrushGraph(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ
    bool IsCenteredGradient() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetOriginOffsetProperty(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTexcoordProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetTexcoordProperty(WindissectOpaque const *, void const *);
};
