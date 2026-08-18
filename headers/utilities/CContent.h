#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBackgroundBlendInfo@CContent@@UEBAXPEA_N0@Z
    virtual void ComputeBackgroundBlendInfo(bool *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropFlags@CContent@@UEBA?AW4ContentBackdropFlags@@XZ
    virtual int GetBackdropFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiftedOverlayType@CContent@@UEBA?AW4LiftedOverlayType@@XZ
    virtual int GetLiftedOverlayType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CContent@@UEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCompositionSurface@CContent@@UEBA_NXZ
    virtual bool HasCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingIntermediate@CContent@@UEBA_NXZ
    virtual bool HasRenderingIntermediate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinglePrimitive@CContent@@UEBA_NXZ
    virtual bool HasSinglePrimitive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CContent@@UEBA_NXZ
    virtual bool HasSwapChainContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    virtual bool IsDrawListCacheDirty(CDrawListCache *, CDrawingContext *, D2D_SIZE_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CContent@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CContent@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIncludedInOverdrawContentKinds@CContent@@AEAA_NW4FlagsEnum@MilHeatMapOverdrawContentKinds@@PEAVCDrawingContext@@@Z
    bool IsIncludedInOverdrawContentKinds(int, CDrawingContext *);
};
