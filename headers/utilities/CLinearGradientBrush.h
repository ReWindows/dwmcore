#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CLinearGradientBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLinearGradientBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z
    CLinearGradientBrush(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z
    virtual long GetD2DBrush(CDrawingContext *, D2D_RECT_F const &, ID2D1Brush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEndPoint@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTBRUSH_SETENDPOINT@@@Z
    long ProcessSetEndPoint(CResourceTable *, tagMILCMD_LINEARGRADIENTBRUSH_SETENDPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStartPoint@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT@@@Z
    long ProcessSetStartPoint(CResourceTable *, tagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLinearGradientBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLinearGradientBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
};
