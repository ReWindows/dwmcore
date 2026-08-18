#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 37 member(s).
class CDropShadow {
public:
    class ShadowIntermediates;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CDropShadow@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDropShadow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDropShadow@@QEAA@PEAVCComposition@@@Z
    CDropShadow(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ
    CBrush * GetMaskForLayerVisualNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CDropShadow@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRadius@CDropShadow@@QEBAMXZ
    float GetRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CDropShadow@@UEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCompositionSurface@CDropShadow@@UEBA_NXZ
    virtual bool HasCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingIntermediate@CDropShadow@@UEBA_NXZ
    virtual bool HasRenderingIntermediate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CDropShadow@@UEBA_NXZ
    virtual bool HasSwapChainContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    virtual bool IsDrawListCacheDirty(CDrawListCache *, CDrawingContext *, D2D_SIZE_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CDropShadow@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBlurRadius@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETBLURRADIUS@@@Z
    long ProcessSetBlurRadius(CResourceTable *, tagMILCMD_DROPSHADOW_SETBLURRADIUS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColor@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETCOLOR@@@Z
    long ProcessSetColor(CResourceTable *, tagMILCMD_DROPSHADOW_SETCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z
    long ProcessSetMask(CResourceTable *, tagMILCMD_DROPSHADOW_SETMASK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_DROPSHADOW_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOpacity@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETOPACITY@@@Z
    long ProcessSetOpacity(CResourceTable *, tagMILCMD_DROPSHADOW_SETOPACITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETSOURCEPOLICY@@@Z
    long ProcessSetSourcePolicy(CResourceTable *, tagMILCMD_DROPSHADOW_SETSOURCEPOLICY const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDropShadow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDropShadow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z
    void RemoveVisualFromCache(CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z
    void SetOcclusionRect(D2D_RECT_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetAnimatedProperty(WindissectOpaque const *, void const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z
    WindissectOpaque * GetEffectiveShadowIntermediates(CVisual *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z
    bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetBlurRadius(WindissectOpaque const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    long UpdateShadowIntermediates(CDrawingContext *, D2D_SIZE_F const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDropShadow@@EEAA@XZ
    virtual ~CDropShadow();
};
