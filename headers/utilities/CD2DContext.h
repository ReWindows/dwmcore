#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 55 member(s).
class CD2DContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z
    virtual void Clear(ID2DContextOwner const *, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z
    long CreateBitmapFromWicBitmap(IWICBitmapSource *, ID2D1Bitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z
    long CreateD2DBitmapFromDxgiSurface(IDXGISurface *, D2D1_BITMAP_PROPERTIES1const &, ID2D1Bitmap1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z
    virtual long CreateD2DEffect(_GUID const &, CD2DEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z
    virtual long CreateD2DInk(D2D1_INK_POINT const &, D2D1_INK_STYLE_PROPERTIES const &, CD2DInk * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z
    virtual long CreateGenericInk(CD2DGenericInk * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z
    long CreateGradientStopCollection(WindissectOpaque, int, int, ID2D1GradientStopCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z
    virtual long DrawBitmap(ID2DContextOwner const *, ID2D1Bitmap1*, D2D_RECT_F const *, D2D_RECT_F const *, float, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z
    virtual long DrawGenericInk(ID2DContextOwner const *, IDCompositionDirectInkWetStrokePartner *, int, int, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_POINT_2F@@@Z
    virtual long DrawImage(ID2DContextOwner const *, ID2D1Effect *, D2D_POINT_2F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z
    virtual long DrawInk(ID2DContextOwner const *, ID2D1Ink *, _D3DCOLORVALUE const &, ID2D1InkStyle *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z
    virtual long DrawShape(ID2DContextOwner const *, ID2D1Geometry const *, ID2D1Brush *, float, ID2D1StrokeStyle1*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z
    virtual long DrawTextW(ID2DContextOwner const *, unsigned short *, unsigned int, IDWriteTextFormat *, D2D_RECT_F const &, _D3DCOLORVALUE const &, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z
    virtual long DrawYCbCrBitmap(ID2DContextOwner const *, ID2D1Bitmap1*, ID2D1Bitmap1*, int, D2D_RECT_F const *, float, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z
    virtual long FillEffect(ID2DContextOwner const *, ID2D1Effect *, D2D_RECT_F const *, D2D_POINT_2F const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z
    virtual long FillRectangleWithSolidColor(ID2DContextOwner const *, D2D_RECT_F const &, _D3DCOLORVALUE const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z
    virtual long FillRectangles(ID2DContextOwner const *, D2D_RECT_F const *, unsigned int, ID2D1Brush *, WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z
    virtual long FillShape(ID2DContextOwner const *, ID2D1Geometry const *, ID2D1Brush *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCurrentTargetOnPopForDImage@CD2DContext@@QEAAXXZ
    void FlushCurrentTargetOnPopForDImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z
    virtual long FlushD2D(ID2DContextOwner const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDrawList@CD2DContext@@QEAAJXZ
    long FlushDrawList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z
    virtual long GetCachedEffectNoRef(int, ID2D1Effect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@PEAUD2D_RECT_F@@PEAW4D2D1_ANTIALIAS_MODE@@@Z
    virtual void GetClip(ID2DContextOwner const *, D2D_RECT_F *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ
    CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z
    virtual long GetDirectInkFactory(IDCompositionDirectInkFactoryPartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ
    bool IsHardwareProtectionDisabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z
    virtual void PopLayer(ID2DContextOwner const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z
    virtual long PopTarget(ID2DContextOwner *, IDeviceTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z
    virtual void PushLayer(ID2DContextOwner const *, D2D_RECT_F const &, ID2D1Geometry *, D2D_MATRIX_3X2_F *, float, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z
    virtual long PushTarget(ID2DContextOwner *, IDeviceTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z
    virtual void SetClip(ID2DContextOwner const *, D2D_RECT_F const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DContext@@UEAA@XZ
    virtual ~CD2DContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHwProtectedResource@CD2DContext@@IEAAXXZ
    void AddHwProtectedResource();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD2DContext@@IEAA@XZ
    CD2DContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DRemoveClip@CD2DContext@@IEAAXXZ
    void D2DRemoveClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDeviceResources@CD2DContext@@IEAAJXZ
    long DestroyDeviceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z
    long EnsureDrawListBatch(CHwLightCollectionBuffer *, ClipPlaneInfoRef *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ
    CD2DTarget * GetCurrentTargetNoRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z
    long InitializeD2D(IDXGIDevice3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z
    virtual long IntersectGeometryWithSafeBounds(ID2D1Geometry *, ID2D1Geometry *, D2D_MATRIX_3X2_F const *, WindissectOpaque *, ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ
    void ReleaseCachedD2DTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ
    void RemoveHwProtectedResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z
    void SetPrimitiveBlend(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ
    void TempDisableHardwareProtection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z
    long DrawCustomCallbackRendererInternal(ID2D1PrivateCompositorRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@CD2DContext@@AEAAJXZ
    long EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBeginDraw@CD2DContext@@AEAAXXZ
    void EnsureBeginDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2DInternal@CD2DContext@@AEAAJXZ
    long FlushD2DInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ
    long LazyInitDirectInkFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateEffectTable@CD2DContext@@AEAAJXZ
    long PopulateEffectTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseEffectTable@CD2DContext@@AEAAXXZ
    void ReleaseEffectTable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z
    void SetCommonState(ID2DContextOwner const *, int, int const *, D2D_MATRIX_3X2_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z
    long TranslateDXGIorD3DErrorInContext(long, int);
};
