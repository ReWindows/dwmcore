#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 24 member(s).
class CColorBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CColorBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CColorBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CColorBrush@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAlpha@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORBRUSH_SETALPHA@@@Z
    long ProcessSetAlpha(CResourceTable *, tagMILCMD_COLORBRUSH_SETALPHA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBlue@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORBRUSH_SETBLUE@@@Z
    long ProcessSetBlue(CResourceTable *, tagMILCMD_COLORBRUSH_SETBLUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColor@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORBRUSH_SETCOLOR@@@Z
    long ProcessSetColor(CResourceTable *, tagMILCMD_COLORBRUSH_SETCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetGreen@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORBRUSH_SETGREEN@@@Z
    long ProcessSetGreen(CResourceTable *, tagMILCMD_COLORBRUSH_SETGREEN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRed@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORBRUSH_SETRED@@@Z
    long ProcessSetRed(CResourceTable *, tagMILCMD_COLORBRUSH_SETRED const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CColorBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CColorBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CColorBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetColorProperty(WindissectOpaque const *, void const *);
};
