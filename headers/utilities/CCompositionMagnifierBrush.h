#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 29 member(s).
class CCompositionMagnifierBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionMagnifierBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropFlags@CCompositionMagnifierBrush@@UEBA?AW4ContentBackdropFlags@@XZ
    virtual int GetBackdropFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropSourceRect@CCompositionMagnifierBrush@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@AEBV2@@Z
    WindissectOpaque GetBackdropSourceRect(CVisualTree const *, WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CCompositionMagnifierBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CCompositionMagnifierBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionMagnifierBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CCompositionMagnifierBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CCompositionMagnifierBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearFocusPoint@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_CLEARFOCUSPOINT@@@Z
    long ProcessClearFocusPoint(CResourceTable *, tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_CLEARFOCUSPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColorTransform@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETCOLORTRANSFORM@@@Z
    long ProcessSetColorTransform(CResourceTable *, tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETCOLORTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFocusPoint@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETFOCUSPOINT@@@Z
    long ProcessSetFocusPoint(CResourceTable *, tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETFOCUSPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMagnification@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETMAGNIFICATION@@@Z
    long ProcessSetMagnification(CResourceTable *, tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETMAGNIFICATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetShowCursor@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETSHOWCURSOR@@@Z
    long ProcessSetShowCursor(CResourceTable *, tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETSHOWCURSOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTrackCursor@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETTRACKCURSOR@@@Z
    long ProcessSetTrackCursor(CResourceTable *, tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETTRACKCURSOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetUseSmoothing@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETUSESMOOTHING@@@Z
    long ProcessSetUseSmoothing(CResourceTable *, tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETUSESMOOTHING const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionMagnifierBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionMagnifierBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CCompositionMagnifierBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionMagnifierBrush@@MEAA@XZ
    virtual ~CCompositionMagnifierBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampMagnificationRectToClientBounds@CCompositionMagnifierBrush@@CA?AUD2D_POINT_2F@@PEBVCVisualTree@@AEBU2@AEBUD2D_SIZE_F@@@Z
    static D2D_POINT_2F ClampMagnificationRectToClientBounds(CVisualTree const *, D2D_POINT_2F const &, D2D_SIZE_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z
    long GetBVIBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z
    long GetLayeredBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ
    void UnregisterCursorListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ
    void UpdateCursorListenerRegistration();
};
