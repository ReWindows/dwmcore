#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CSwapchainRenderStrategy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CSurfaceBrush *, CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurfaceInfo@CSwapchainRenderStrategy@@UEBAPEAVCCompositionSurfaceInfo@@PEBVCSurfaceBrush@@@Z
    virtual CCompositionSurfaceInfo * GetCompositionSurfaceInfo(CSurfaceBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(CSurfaceBrush const *, D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual long GetLayoutParameters(CSurfaceBrush const *, D2D_SIZE_F const &, D2D_SIZE_F *, D2D_RECT_F *, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z
    virtual bool HasRevealBorder(CSurfaceBrush const *, _D3DCOLORVALUE *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z
    virtual bool HasSwapChainContent(CSurfaceBrush const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForSurfaceNotifications@CSwapchainRenderStrategy@@UEBA_NPEBVCResource@@@Z
    virtual bool ListenForSurfaceNotifications(CResource const *) const;
};
