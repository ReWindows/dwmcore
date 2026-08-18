#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
namespace CSurfaceBrush {
class CSurfaceRenderStrategy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CSurfaceBrush *, CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CSurfaceBrush *, CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurfaceInfo@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAPEAVCCompositionSurfaceInfo@@PEBV2@@Z
    virtual CCompositionSurfaceInfo * GetCompositionSurfaceInfo(CSurfaceBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CSurfaceRenderStrategy@CSurfaceBrush@@UEBA_NPEBV2@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(CSurfaceBrush const *, D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRevealBorder@CSurfaceRenderStrategy@CSurfaceBrush@@UEBA_NPEBV2@PEAU_D3DCOLORVALUE@@@Z
    virtual bool HasRevealBorder(CSurfaceBrush const *, _D3DCOLORVALUE *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CSurfaceRenderStrategy@CSurfaceBrush@@UEBA_NPEBV2@@Z
    virtual bool HasSwapChainContent(CSurfaceBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHitTestable@CSurfaceRenderStrategy@CSurfaceBrush@@UEBA_NPEBV2@@Z
    virtual bool IsHitTestable(CSurfaceBrush const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CSurfaceRenderStrategy@CSurfaceBrush@@UEBA_NPEBV2@@Z
    virtual bool IsOpaque(CSurfaceBrush const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForSurfaceNotifications@CSurfaceRenderStrategy@CSurfaceBrush@@UEBA_NPEBVCResource@@@Z
    virtual bool ListenForSurfaceNotifications(CResource const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RendersLiftedOverlay@CSurfaceRenderStrategy@CSurfaceBrush@@UEBA_NXZ
    virtual bool RendersLiftedOverlay() const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    static bool GetDirtyRegionFromSurface(CSurfaceBrush const *, CMILMatrix const *, D2D_SIZE_F const &, CRectanglesShape *);
};
} // namespace CSurfaceBrush
