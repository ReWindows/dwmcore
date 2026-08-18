#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CWindowBackdropBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowBackdropBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropFlags@CWindowBackdropBrush@@UEBA?AW4ContentBackdropFlags@@XZ
    virtual int GetBackdropFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CWindowBackdropBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CWindowBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CWindowBackdropBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CWindowBackdropBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowBackdropBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowBackdropBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CWindowBackdropBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
};
