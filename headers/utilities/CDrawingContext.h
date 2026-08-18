#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 131 member(s).
class CDrawingContext {
public:
    class CSetOverlayColorRenderStateScope;
    class CTryIgnoreCpuClippingScope;
    class NodeEffects;
    class StackBackfaceVisibilityEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z
    long AddCpuClipAntialiasDrawList(CDrawListEntry *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDrawingContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z
    void AddTransientInkDirtyRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderState@CDrawingContext@@UEAAJXZ
    virtual long ApplyRenderState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsSupported@CDrawingContext@@QEBA_NXZ
    bool AreEffectsSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z
    long BeginFrame(IDeviceTarget *, CMILMatrix const *, _D3DCOLORVALUE const *, int, COverlayContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    void CalcLocalSpaceClippedBounds(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    void CalcWorldSpaceClippedBounds(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long Clear(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawingContext@@SAXPEAPEAV1@@Z
    static void Create(CDrawingContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z
    bool DoesCpuClipFullyContainRect(WindissectOpaque const &, CMILMatrix const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    bool DrawAsOverlay(IBitmapResource *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z
    virtual long DrawBitmap(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z
    long DrawBitmapRealization(IBitmapRealization *, WindissectOpaque const &, WindissectOpaque const &, bool, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z
    long DrawBitmapRealization(IBitmapRealization *, WindissectOpaque const &, MILMatrix3x2const &, bool, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z
    long DrawBspPolygonList(CVisual *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z
    virtual long DrawGenericInk(IDCompositionDirectInkWetStrokePartner *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z
    virtual long DrawInk(ID2D1Ink *, _D3DCOLORVALUE const &, ID2D1InkStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z
    long DrawPolygon(CPolygon *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z
    long DrawScene3D(ISpectreWorld *, CCompositionEnvironmentLight *, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z
    virtual long DrawSolidRectangle(WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    long DrawSubVisualTree(CVisualTree const *, WindissectOpaque const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z
    long DrawTextW(unsigned short *, unsigned int, IDWriteTextFormat *, D2D_RECT_F const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z
    virtual long DrawVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z
    long DrawVisualTree(CVisualTree const *, WindissectOpaque const &, COcclusionContext const *, int, bool, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z
    long EmitDrawListCache(CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrame@CDrawingContext@@QEAAJXZ
    long EndFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ
    void EtwLogCurrentState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z
    long FillEffect(ID2D1Effect *, WindissectOpaque const *, D2D_POINT_2F const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z
    long FillRectanglesWithSolidColor(WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z
    long FillShapeWithBitmap(IBitmapResource *, CMILMatrix const &, CShape const &, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z
    long FillShapeWithBitmapRealization(IBitmapRealization *, CShape const &, MILMatrix3x2const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z
    long FillShapeWithBrush(CShape const &, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z
    long FillShapeWithSolidColor(CShape const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2D@CDrawingContext@@QEAAJXZ
    long FlushD2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z
    long GenerateDrawListForOverlayColor(_D3DCOLORVALUE const &, D2D_RECT_F const &, D2D_MATRIX_3X2_F const *, CDrawListEntryBuilder *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveLightCount@CDrawingContext@@QEBAIXZ
    unsigned int GetActiveLightCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z
    long GetBlurredWallpaperEffectInput(D2D_SIZE_F const &, EffectInput *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void GetClipBoundsWorld(WindissectOpaque *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z
    void GetCpuClip(CCpuClip *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBVRenderTargetInfo@@XZ
    virtual RenderTargetInfo const & GetCurrentRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTargetDesktopScale@CDrawingContext@@QEBA?BMXZ
    float GetCurrentTargetDesktopScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTargetTreeBounds@CDrawingContext@@QEBA?BV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetCurrentTargetTreeBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ
    CVisual * GetCurrentVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentVisualTreePath@CDrawingContext@@QEBAAEBVCVisualTreePath@@XZ
    CVisualTreePath const & GetCurrentVisualTreePath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentZ@CDrawingContext@@UEBAHXZ
    virtual int GetCurrentZ() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DAntialiasMode@CDrawingContext@@QEBA?AW4D2D1_ANTIALIAS_MODE@@XZ
    int GetD2DAntialiasMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ
    int GetD2DInterpolationMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z
    unsigned int GetMaxTextureSize(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ
    IMonitorTarget * GetMonitorTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacity@CDrawingContext@@QEBAMXZ
    float GetOpacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z
    long GetWindowBackgroundTreatmentEffectInput(D2D_SIZE_F const &, EffectInput *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z
    void GetWorldTransform(CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetWorldTransform3x2(D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDRTarget@CDrawingContext@@QEBA_NXZ
    bool IsHDRTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIn3DMode@CDrawingContext@@QEBA_NXZ
    bool IsIn3DMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ
    bool IsNormalDesktopRender() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z
    bool IsOccluded(WindissectOpaque const &, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSoftwareCursor@CDrawingContext@@QEBA_NPEBVCCursorVisual@@@Z
    bool IsSoftwareCursor(CCursorVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ
    bool IsWarpFastPathEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkCurrentState@CDrawingContext@@QEAAJXZ
    long MarkCurrentState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ
    void NotifyFrameContainsProtectedContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CDrawingContext@@UEAAJXZ
    virtual long Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLayer@CDrawingContext@@QEAAJXZ
    long PopLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PostSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PreSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z
    long PushClipRectForCurrentNode(WindissectOpaque const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z
    long PushClipShapeForCurrentNode(CShapePtr &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z
    long PushColorTransformLayer(WindissectOpaque const *, CColorTransformResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z
    long PushD2DLayer(CVisual const *, WindissectOpaque const *, ID2D1Geometry *, D2D_MATRIX_3X2_F const *, float, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z
    long PushEffects(WindissectOpaque &, WindissectOpaque const *, CFilterEffect *, WindissectOpaque const *, WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z
    long PushGammaBlendLayer(D2D_POINTANDSIZE_L const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long PushLinearInterpolationLayer(D2D_POINTANDSIZE_L const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z
    long PushOffScreenRenderingLayer(CResourceTag const &, D2D_SIZE_F const &, DisplayId, int, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    long PushOverlayClip(IBitmapResource *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z
    long PushRenderTarget(IDeviceTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z
    virtual long PushTransform(CTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z
    long PushValueColorTransformLayer(WindissectOpaque const *, MilColorTransform const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDrawingContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTexture@CDrawingContext@@QEBAXXZ
    void ReadTexture() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z
    long RecordBitmapRealizationInfo(IBitmapRealization *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z
    void RecordBitmapResourceInfo(IBitmapResource *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDrawingContext@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z
    virtual void RestoreDrawingContextFlags(DrawingContextFlags const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ
    void RestoreStateToLastMark();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDrawingContextFlags@CDrawingContext@@UEBAXPEAUDrawingContextFlags@@@Z
    virtual void SaveDrawingContextFlags(DrawingContextFlags *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z
    long StrokeShapeWithBrush(CShape const &, ID2D1Brush *, float, ID2D1StrokeStyle1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z
    long ValidateBVIEffectInputForRender(WindissectOpaque const &, bool *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawingContext@@IEAA@XZ
    CDrawingContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z
    void PopRenderOptionsInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z
    void PopTransformInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z
    long PushDeviceTransform(CMILMatrix const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z
    long PushRenderOptionsInternal(CVisual const *, MilRenderOptions const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z
    long PushTransformInternal(CVisual const *, CMILMatrix const *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawingContext@@MEAA@XZ
    virtual ~CDrawingContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z
    long ApplyRenderStateInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z
    void CalcClippedNodeWorldSpaceBounds(CVisual const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CDrawingContext@@AEBAJPEAVCVisual@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z
    long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(CVisual *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcNodeWorldSpaceInputBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z
    void CalcNodeWorldSpaceInputBounds(CVisual const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z
    long D2DGeometryFromShape(CShape const *, CMILMatrix const &, ID2D1Geometry * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ
    long DrawDirtyRegionVisualizationForCurrentNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long DrawRectangleOverlay(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z
    long FillRectanglesWithDrawListBitmap(CDrawListBitmap const &, WindissectOpaque const &, MILMatrix3x2const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ
    long FlushAllDeferredClipping();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEBVIBitmapResource@@@Z
    _D3DCOLORVALUE GetSwapChainOverlayColor(ISwapChainRealization *, IBitmapResource const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z
    long GetUnOccludedWorldShape(CShape const &, int, CShape * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackdropWalk@CDrawingContext@@AEBA_NXZ
    bool IsBackdropWalk() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z
    bool IsSurfaceSizeValid(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopAllStacks@CDrawingContext@@AEAAXXZ
    void PopAllStacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopAlpha@CDrawingContext@@AEAAX_N@Z
    void PopAlpha(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopClippingScope@CDrawingContext@@AEAAX_N@Z
    void PopClippingScope(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopCpuClip@CDrawingContext@@AEAAXXZ
    void PopCpuClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z
    void PopGpuClipRectInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z
    long PopLayerInternal(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLight@CDrawingContext@@AEAAJXZ
    long PopLight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z
    long PopRenderTargetInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long PushClippingScope(CVisual const *, bool, bool, CMILMatrix const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z
    long PushEffectLayer(CVisual const *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, CResource *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z
    long PushEffectiveAlphaForNode(CVisual const *, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z
    long PushGpuClipRectInternal(CVisual const *, WindissectOpaque const &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z
    long PushLayer(CVisual const *, CLayer *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z
    long PushLocalSpaceClipAndAlphaInternal(WindissectOpaque const *, WindissectOpaque *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z
    long PushNoOpLayer(CVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long RenderOverlayColor(_D3DCOLORVALUE const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z
    void SetEffectInputToTransparentBlack(D2D_SIZE_F const &, EffectInput *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ
    void SetHeatMapForCurrentNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z
    static long ShapeDataFromGeometry(D2D_SIZE_F const *, CGeometry *, CShapePtr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ
    long UpdateBspCurrentPolygonClippingPlanes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z
    void UpdateDeviceTransform(CMILMatrix const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ
    void UpdateRenderTargetInfo();
};
