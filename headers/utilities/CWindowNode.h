#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 50 member(s).
class CWindowNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long CollectAdditionalDirtyRects(CVisualTree const *, CTreeDirty *, CMILMatrix const &, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z
    virtual long CollectOcclusion(COcclusionContext *, COcclusionInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipForHitTest@CWindowNode@@UEBAPEAVCGeometry@@XZ
    virtual CGeometry * GetClipForHitTest() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetContentBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentType@CWindowNode@@UEAAKXZ
    virtual unsigned long GetContentType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningProcessId@CWindowNode@@UEBAKXZ
    virtual unsigned long GetOwningProcessId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningProcessSequenceNumber@CWindowNode@@UEBA_KXZ
    virtual uint64_t GetOwningProcessSequenceNumber() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ
    virtual CProcessAttribution * GetProcessAttributionNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAtlasedContent@CWindowNode@@UEBA_NXZ
    virtual bool HasAtlasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContent@CWindowNode@@UEBA_NXZ
    virtual bool HasContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ
    virtual bool HasNonEmptyContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTestContent(bool, D2D_POINT_2F const &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyInvertedCursor@CWindowNode@@UEBA_NXZ
    virtual bool IsLegacyInvertedCursor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z
    void NotifyDirtySurface(CRegion const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderContent(CDrawingContext *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z
    long SetFlipExSurface(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessAttribution@CWindowNode@@QEAAJAEBUDCOMPOSITION_PROCESS_ATTRIBUTION@@@Z
    long SetProcessAttribution(DCOMPOSITION_PROCESS_ATTRIBUTION const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z
    long SetSpriteBitmap(CGdiSpriteBitmap *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowNode@@IEAA@PEAVCComposition@@@Z
    CWindowNode(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ
    virtual HWND__* GetHwnd() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ
    virtual bool HasSingleD2DBitmapOrPrimitiveGroupInternal() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHitTest@CWindowNode@@MEBA_NXZ
    virtual bool ShouldHitTest() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowNode@@MEAA@XZ
    virtual ~CWindowNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long ApplyTextureToLocalTransform(IBitmapResource *, CMILMatrix *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ
    void DiscardFlipExSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ
    void DiscardGdiSpriteBitmaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z
    void DiscardOldestFlipExSurfaces(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z
    void DiscardOldestGdiSpriteBitmaps(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z
    void DxBltConsumedTelemetry(CDrawingContext *, CGdiSpriteBitmap *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@Z
    void DxFlipConsumedTelemetry(CDrawingContext *, CCompositionSurfaceBitmap *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ
    long EnsureEffectiveSpriteClip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV2@2@Z
    bool GetAlphaMarginsRects(bool, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ
    CCompositionSurfaceBitmap * GetCurrentFlipExSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z
    long GetEffectiveBounds(CShape const *, WindissectOpaque *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlipExSurfaceClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ
    CShapePtr GetFlipExSurfaceClipShape() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z
    long GetSpriteClipShape(CShapePtr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFlipExContent@CWindowNode@@AEBA_NXZ
    bool HasFlipExContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSpriteContent@CWindowNode@@AEBA_NXZ
    bool HasSpriteContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaMarginsChanging@CWindowNode@@AEAAJAEBU_MARGINS@@@Z
    long OnAlphaMarginsChanging(_MARGINS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ
    void OnIsClipToDirtyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCursorChanged@CWindowNode@@AEAAXXZ
    void OnIsCursorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ
    void OnSourceModificationsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ
    bool ProcessReadyFlipExSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ
    bool ProcessReadyGdiSpriteBitmaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z
    long RenderImage(CDrawingContext *, CWindowOcclusionInfo *, IBitmapResource *, CShape const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z
    long RenderRevealBorder(CDrawingContext *, WindissectOpaque const &, CShape const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z
    long RenderSpriteBitmap(CDrawingContext *, CVisualTree const *, CWindowOcclusionInfo *);
};
