#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 221 member(s).
class CVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void AddAdditionalDirtyRect(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z
    virtual long AddBoundsToDirtyRegion(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z
    long AddLight(CCompositionLight *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z
    void AddProjectedShadowCaster(CProjectedShadowCaster *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z
    void AddProjectedShadowReceiver(CProjectedShadowReceiver *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z
    long CalcRootBounds(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z
    static long CalcSrcToDestVisualTransform(CVisualTree const *, int, CVisual *, CVisual *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z
    static long CalcSrcToDestVisualTransform(CVisualTree const *, int, WindissectOpaque, CVisual *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z
    void CalcTransform(CVisualTree const *, CMILMatrix const *, bool *, CMILMatrix *, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInteraction@CVisual@@QEAAXXZ
    void ClearInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z
    virtual long CollectOcclusion(COcclusionContext *, COcclusionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z
    long CreateOrUpdateBVI(CVisualTreePath const &, WindissectOpaque const &, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyOnNewData@CVisual@@QEAAXXZ
    void DirtyOnNewData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLayoutSize@CVisual@@QEAAXXZ
    void EnsureLayoutSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z
    CTreeData * EnsureTreeData(CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z
    CTreeData * FindTreeData(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ
    CMergedDirtyRect * GetAdditionalDirtyRects() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropFlagsDebugString@CVisual@@QEBA?BVDbgString@DwmDbg@@XZ
    WindissectOpaque GetBackdropFlagsDebugString() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z
    CBackdropVisualImage * GetBackdropVisualImage(CVisualTreePath const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ
    CVisualSurface * GetBlurredWallpaperSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z
    WindissectOpaque const & GetBounds(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    virtual long GetBoundsWithEffects(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ
    WindissectOpaque * GetBspPolygonList() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ
    CCachedWindowBackgroundTreatment * GetCachedWindowBackgroundTreatment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildAt@CVisual@@QEBAPEAV1@I@Z
    CVisual * GetChildAt(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipForHitTest@CVisual@@UEBAPEAVCGeometry@@XZ
    virtual CGeometry * GetClipForHitTest() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ
    int GetColorSpace() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ
    CColorTransformResource * GetColorTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetContentBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentType@CVisual@@UEAAKXZ
    virtual unsigned long GetContentType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z
    CCpuClippingData * GetCpuClippingData(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ
    CDesktopTree * GetDesktopTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectAlpha@CVisual@@QEBAMXZ
    float GetEffectAlpha() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ
    CEffect * GetEffectInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z
    bool GetEffectiveSize(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ
    WindissectOpaque GetHeatMapProperties() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque const & GetInputBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputHandle@CVisual@@QEBAPEAXXZ
    void * GetInputHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ
    _LUID GetInputLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ
    CInteraction * GetInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ
    CInteraction * GetInteractionInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z
    unsigned int GetLightsCount(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ
    float GetNotifiedWorldRenderingScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacityInternal@CVisual@@QEBAMXZ
    float GetOpacityInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ
    D2D_SIZE_F GetRelativeLayoutSizeInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ
    D2D_VECTOR_3F GetRelativeOffsetInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ
    int GetResampleMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z
    bool GetRootTransform(CMILMatrix *, bool, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z
    int GetSubtreeZ(CVisualTree const *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopLevelWindow@CVisual@@QEBA_KXZ
    uint64_t GetTopLevelWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ
    CTransform3D * GetTransform3DEffectNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z
    CVisual const * GetTransformParent(CVisualTree const *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ
    TransformParentData * GetTransformParentDataInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ
    _LIST_ENTRY * GetTreeDataListHead() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeEffect@CVisual@@UEBAPEAVCTreeEffect@@XZ
    virtual CTreeEffect * GetTreeEffect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ
    CTreeData * GetUnusedTreeData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z
    float GetVisualAlpha(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z
    long GetVisualTree(CVisualTree * *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ
    CVisualTree * GetVisualTreeNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ
    CWindowBackgroundTreatment * GetWindowBackgroundTreatmentInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ
    float GetWorldRenderingScaleOverride() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z
    long GetWorldTransform(CVisualTreePath const &, int, CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z
    long GetWorldTransform(CVisualTree const *, int, CMILMatrix *, bool *, CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ
    D2D_VECTOR_3F GetWorldUpVectorOverride() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z
    int GetZ(CVisualTree const *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContent@CVisual@@UEBA_NXZ
    virtual bool HasContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasInputSink@CVisual@@QEBA_NXZ
    bool HasInputSink() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasInteraction@CVisual@@QEBA_NXZ
    bool HasInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonDefaultEffectInternal@CVisual@@QEBA_NXZ
    bool HasNonDefaultEffectInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonDefaultWindowBackgroundTreatmentInternal@CVisual@@QEBA_NXZ
    bool HasNonDefaultWindowBackgroundTreatmentInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptyContent@CVisual@@UEBA_NXZ
    virtual bool HasNonEmptyContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ
    bool HasProjectedShadowReceivers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasProtectedContent@CVisual@@QEBA_NXZ
    bool HasProtectedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ
    bool HasSingleD2DBitmapOrPrimitiveGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSubtreeSurface@CVisual@@QEBA_NXZ
    bool HasSubtreeSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTestContent(bool, D2D_POINT_2F const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z
    void InvalidateDrawListCaches(CVisualTree const *, unsigned int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursor@CVisual@@UEBA_NXZ
    virtual bool IsCursor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyInvertedCursor@CVisual@@UEBA_NXZ
    virtual bool IsLegacyInvertedCursor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z
    bool IsPreserve3DRoot(CVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z
    bool IsSimple3DRootOrHasEffects(CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z
    void MarkAllBackdropVisualImagesDirty(CVisualTree const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAppendExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDEXCLUDEDSHAREDLIGHTS@@PEBXI@Z
    long ProcessAppendExcludedSharedLights(CResourceTable const *, tagMILCMD_VISUAL_APPENDEXCLUDEDSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAppendSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDSHAREDLIGHTS@@PEBXI@Z
    long ProcessAppendSharedLights(CResourceTable const *, tagMILCMD_VISUAL_APPENDSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_VISUAL_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z
    long ProcessForceLowColor(CResourceTable *, tagMILCMD_VISUAL_FORCELOWCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z
    long ProcessInsertChild(CResourceTable const *, tagMILCMD_VISUAL_INSERTCHILD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z
    long ProcessProtectContent(CResourceTable *, tagMILCMD_VISUAL_PROTECTCONTENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z
    long ProcessRemoveAllChildren(CResourceTable const *, tagMILCMD_VISUAL_REMOVEALLCHILDREN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z
    long ProcessRemoveChild(CResourceTable const *, tagMILCMD_VISUAL_REMOVECHILD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z
    long ProcessResampleMode(CResourceTable *, tagMILCMD_VISUAL_RESAMPLEMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z
    long ProcessSetBlurredWallpaperSurface(CResourceTable *, tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z
    long ProcessSetBlurredWallpaperSurfaceRect(CResourceTable *, tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z
    long ProcessSetClip(CResourceTable *, tagMILCMD_VISUAL_SETCLIP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z
    long ProcessSetColorTransform(CResourceTable *, tagMILCMD_VISUAL_SETCOLORTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z
    long ProcessSetContent(CResourceTable const *, tagMILCMD_VISUAL_SETCONTENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z
    long ProcessSetContextOverrides(CResourceTable *, tagMILCMD_VISUAL_SETCONTEXTOVERRIDES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z
    long ProcessSetEffect(CResourceTable const *, tagMILCMD_VISUAL_SETEFFECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z
    long ProcessSetExcludeSubtree(CResourceTable *, tagMILCMD_VISUAL_SETEXCLUDESUBTREE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS@@PEBXI@Z
    long ProcessSetExcludedSharedLights(CResourceTable const *, tagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z
    long ProcessSetHeatMapMode(CResourceTable *, tagMILCMD_VISUAL_SETHEATMAPMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z
    long ProcessSetInteraction(CResourceTable *, tagMILCMD_VISUAL_SETINTERACTION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_VISUAL_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z
    long ProcessSetOpacity(CResourceTable *, tagMILCMD_VISUAL_SETOPACITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z
    long ProcessSetOptions(CResourceTable *, tagMILCMD_VISUAL_SETOPTIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPassiveUpdateMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETPASSIVEUPDATEMODE@@@Z
    long ProcessSetPassiveUpdateMode(CResourceTable *, tagMILCMD_VISUAL_SETPASSIVEUPDATEMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z
    long ProcessSetRedrawRegionMode(CResourceTable *, tagMILCMD_VISUAL_SETREDRAWREGIONMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z
    long ProcessSetRelativeOffset(CResourceTable *, tagMILCMD_VISUAL_SETRELATIVEOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z
    long ProcessSetRelativeSize(CResourceTable *, tagMILCMD_VISUAL_SETRELATIVESIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z
    long ProcessSetRenderOptions(CResourceTable *, tagMILCMD_VISUAL_SETRENDEROPTIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@PEBXI@Z
    long ProcessSetSharedLights(CResourceTable const *, tagMILCMD_VISUAL_SETSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z
    long ProcessSetSize(CResourceTable *, tagMILCMD_VISUAL_SETSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z
    long ProcessSetTouchTargetRect(CResourceTable *, tagMILCMD_VISUAL_SETTOUCHTARGETRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z
    long ProcessSetTransform(CResourceTable const *, tagMILCMD_VISUAL_SETTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z
    long ProcessSetTransformParent(CResourceTable const *, tagMILCMD_VISUAL_SETTRANSFORMPARENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z
    long ProcessSetVisible(CResourceTable *, tagMILCMD_VISUAL_SETVISIBLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z
    long ProcessSetWindowBackgroundTreatment(CResourceTable const *, tagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_TOPLEVELNODE@@@Z
    long ProcessTopLevelNode(CResourceTable *, tagMILCMD_VISUAL_TOPLEVELNODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z
    void ReleaseVisualTreeData(CVisualTreeData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z
    long RemoveLight(CCompositionLight *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z
    void RemoveProjectedShadowCaster(CProjectedShadowCaster *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z
    void RemoveProjectedShadowReceiver(CProjectedShadowReceiver *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderContent(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z
    void RenderProjectedShadows(CDrawingContext *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresExternalLayer@CVisual@@QEBA_NXZ
    bool RequiresExternalLayer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAllBackdropVisualImagesForVisualTree@CVisual@@QEBAXPEBVCVisualTree@@@Z
    void ResetAllBackdropVisualImagesForVisualTree(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z
    void SetBlurredWallpaperSurface(CVisualSurface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z
    void SetBspPolygonList(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z
    void SetCachedWindowBackgroundTreatment(CCachedWindowBackgroundTreatment *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z
    long SetClip(CGeometry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z
    void SetEffectInternal(CEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z
    void SetHeatMapProperties(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z
    void SetInteractionInternal(CInteraction *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z
    void SetNotifiedEffectiveLayoutSize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z
    void SetNotifiedWorldRenderingScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CVisual@@QEAAXMMM@Z
    void SetOffset(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CVisual@@QEAAXM@Z
    void SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z
    void SetPixelSnappingEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z
    void SetRelativeLayoutSizeInternal(D2D_SIZE_F);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffset@CVisual@@QEAAXMMM@Z
    void SetRelativeOffset(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeSize@CVisual@@QEAAXMM@Z
    void SetRelativeSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z
    void SetResampleMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CVisual@@QEAAXMM@Z
    void SetSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTopLevelWindow@CVisual@@QEAAX_K@Z
    void SetTopLevelWindow(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z
    long SetTransform(CTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z
    void SetTransformParentDataInternal(TransformParentData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z
    void SetUnusedTreeData(CTreeData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CVisual@@QEAAX_N@Z
    void SetVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z
    void SetVisualTreeNoRef(CVisualTree *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z
    void SetWindowBackgroundTreatmentInternal(CWindowBackgroundTreatment *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z
    void SetWorldUpVectorOverride(D2D_VECTOR_3F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z
    bool SkipInvalidTransformParentSubtree(CVisualTree const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubgraphHasBackdropInput@CVisual@@QEBA_NXZ
    bool SubgraphHasBackdropInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubgraphHasWindowBackdropInput@CVisual@@QEBA_NXZ
    bool SubgraphHasWindowBackdropInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitNode@CVisual@@QEAAXPEBVCVisualTree@@@Z
    void VisitNode(CVisualTree const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z
    long AddToBspPolygonList(CPolygon *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisual@@IEAA@PEAVCComposition@@@Z
    CVisual(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ
    float CalculateWorldRenderingScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ
    void ClearContentTreeDataCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long CollectAdditionalDirtyRects(CVisualTree const *, CTreeDirty *, CMILMatrix const &, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z
    long ConvertInnerToOuterBounds(CVisualTree const *, CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z
    void DirtyForInvisibleChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z
    void DirtyForVisibleChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CVisual@@MEAAXXZ
    virtual void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBspPolygonListCount@CVisual@@IEBAIXZ
    unsigned int GetBspPolygonListCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ
    virtual HWND__* GetHwnd() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z
    long GetPolygonNoRef(CMILMatrix *, float, unsigned int, int, int, int, bool, bool, bool, CPolygon * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetTouchTargetBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z
    CVisual * GetTransformParentForValidation(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Has3DContent@CVisual@@IEBA_NXZ
    bool Has3DContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CVisual@@MEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAtlasedContent@CVisual@@MEBA_NXZ
    virtual bool HasAtlasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBspPolygonList@CVisual@@IEBA_NXZ
    bool HasBspPolygonList() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonOpaqueEffectInternal@CVisual@@IEBA_NXZ
    bool HasNonOpaqueEffectInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPixelSnappedContent@CVisual@@IEBA_NXZ
    bool HasPixelSnappedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ
    virtual bool HasSingleD2DBitmapOrPrimitiveGroupInternal() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z
    long InsertChild(CVisual *, CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z
    void InvalidateTransformParent(CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z
    void IssueContextUpdateNotification(float, D2D_VECTOR_2F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z
    void PropagateFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBspPolygonList@CVisual@@IEAAXXZ
    void ReleaseBspPolygonList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllChildren@CVisual@@IEAAXXZ
    void RemoveAllChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@CVisual@@IEAAXPEAV1@@Z
    void RemoveChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    static long RenderContentWorker(CVisual *, CContent *, unsigned int, unsigned int, CDrawingContext *, D2D_SIZE_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z
    virtual long SetContent(CContent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z
    long SetEffect(CEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z
    long SetInteraction(CInteraction *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHitTest@CVisual@@MEBA_NXZ
    virtual bool ShouldHitTest() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z
    void UpdateBackdropCounts(CVisual const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z
    void UpdateHasBackdropInputFlag(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z
    void UpdateHasWindowBackdropInputFlag(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayoutSize@CVisual@@IEAAXXZ
    void UpdateLayoutSize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisual@@MEAA@XZ
    virtual ~CVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool AdjustContentWorldBounds(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z
    long AppendDirtyRegionVisualizationRects(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ
    void ClearAllBackdropVisualImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z
    bool EnsureWorldTransform(CVisualTree const *, CTreeData *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z
    CTreeData const * GetParentTreeData(CVisualTree const *, CTreeData *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z
    void NotifyMidManipulationPropertyChange(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z
    void NotifyMidManipulationUpdate(int, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClipChanged@CVisual@@AEAAXXZ
    void OnClipChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInnerTransformChanged@CVisual@@AEAAXXZ
    void OnInnerTransformChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@CVisual@@AEAAXXZ
    void OnLayoutChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOuterTransformChanged@CVisual@@AEAAXXZ
    void OnOuterTransformChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformChanged@CVisual@@AEAAXXZ
    void OnTransformChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllLights@CVisual@@AEAAXXZ
    void RemoveAllLights();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z
    long RemoveAllSharedLights(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ
    void RemoveDirtyRegionVisualizationData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ
    void UpdateBackdropBlurFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ
    void UpdateBackdropVisualImageForWindowBackgroundTreatment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentFlags@CVisual@@AEAAXXZ
    void UpdateContentFlags();
};
