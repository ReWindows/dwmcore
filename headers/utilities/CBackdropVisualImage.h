#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 33 member(s).
class CBackdropVisualImage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ
    bool CanUseAsEffectInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z
    static long Create(CComposition *, CVisual const *, CVisualTreePath const &, bool, CBackdropVisualImage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ
    EffectInput GenerateEffectInput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z
    bool GetBlurCacheRealizationKey(RenderTargetInfo const &, void const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA?AVMatrix3x2F@D2D1@@XZ
    ::D2D1::Matrix3x2F GetViewBoxToUVTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z
    bool HasValidRenderingRealization(RenderTargetInfo const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CBackdropVisualImage@@QEBA_NXZ
    bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z
    bool IsVisualInAncestorList(CVisual const *, CVisualTreePath const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z
    void LogEtwEvent(WindissectOpaque, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z
    void RegisterBlurCache(CBlurredBackdropCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    static bool RequireClippedBounds(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z
    bool RequiresRendering(RenderTargetInfo const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z
    void UnregisterBlurCache(CBlurredBackdropCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z
    long ValidateRootAndSourceRectangle(CVisual *, WindissectOpaque const &, bool, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackdropVisualImage@@UEAA@XZ
    virtual ~CBackdropVisualImage();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z
    CBackdropVisualImage(CComposition *, CVisual const *, CVisualTreePath const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z
    virtual COcclusionContext * CalcOcclusion(WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z
    virtual void CreateDrawingContext(CDrawingContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ
    void EnsureAncestorList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceTag@CBackdropVisualImage@@EEBA?AVCResourceTag@@XZ
    virtual CResourceTag GetResourceTag() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ
    virtual CVisualTree * GetVisualTree() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBackdropVisualImage@@EEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ
    void InvalidateAllBlurCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z
    void InvalidateBlurCache(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackdropVisualImage@CBackdropVisualImage@@EEBA_NXZ
    virtual bool IsBackdropVisualImage() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z
    virtual void OnCachedTargetInvalidated(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRootVisualAsNotifier@CBackdropVisualImage@@EEAAJXZ
    virtual long RegisterRootVisualAsNotifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long SetRootAndSourceRectangle(CVisual *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterRootVisualAsNotifier@CBackdropVisualImage@@EEAAXXZ
    virtual void UnRegisterRootVisualAsNotifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTree@CBackdropVisualImage@@EEAAJXZ
    virtual long UpdateVisualTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void ValidateRealizationSize(WindissectOpaque const &);
};
