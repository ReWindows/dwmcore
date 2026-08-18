#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 31 member(s).
class CMaskBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMaskBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropFlags@CMaskBrush@@UEBA?AW4ContentBackdropFlags@@XZ
    virtual int GetBackdropFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCompositionSurface@CMaskBrush@@UEBA_NXZ
    virtual bool HasCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingIntermediate@CMaskBrush@@UEBA_NXZ
    virtual bool HasRenderingIntermediate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CMaskBrush@@UEBA_NXZ
    virtual bool HasSwapChainContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z
    long ProcessSetMask(CResourceTable *, tagMILCMD_MASKBRUSH_SETMASK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z
    long ProcessSetSource(CResourceTable *, tagMILCMD_MASKBRUSH_SETSOURCE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMaskBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z
    virtual long EnsureBrushGraph(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMaskBrush@@MEAA@XZ
    virtual ~CMaskBrush();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z
    static bool IsValidMaskResource(CResource const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z
    static bool IsValidSourceResource(CResource const *);
};
