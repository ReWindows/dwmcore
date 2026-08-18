#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 63 member(s).
class CCachedVisualImage {
public:
    class CCachedTarget;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CCachedVisualImage@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCachedVisualImage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z
    static long CreateForVisualSurface(CComposition *, CCachedVisualImage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z
    virtual long GetCurrentRenderingRealization(IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CCachedVisualImage@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingColorSpace@CCachedVisualImage@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsMatchingColorSpace(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CCachedVisualImage@@UEBA_NXZ
    virtual bool IsOpaque() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CCachedVisualImage@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z
    bool IsSameVisualTree(CVisualTree const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ
    void MarkAllTargetsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CCachedVisualImage@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFreeze@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_FREEZE@@@Z
    long ProcessFreeze(CResourceTable *, tagMILCMD_CACHEDVISUALIMAGE_FREEZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSnapshot@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z
    long ProcessSnapshot(CResourceTable *, tagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_CACHEDVISUALIMAGE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RecordUse(CDrawingContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCachedVisualImage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CCachedVisualImage@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z
    CCachedVisualImage(CComposition *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z
    virtual COcclusionContext * CalcOcclusion(WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ
    void ChoosePixelFormat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z
    long CreateCachedTarget(D2D_SIZE_U, RenderTargetInfo const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z
    virtual void CreateDrawingContext(CDrawingContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z
    long EnsureRenderTargetBitmap(RenderTargetInfo const &, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CCachedVisualImage@@MEAAXXZ
    virtual void FinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z
    WindissectOpaque * FindExistingCachedTarget(RenderTargetInfo const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z
    long GetRenderTargetBitmap(RenderTargetInfo const &, IRenderTargetBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceTag@CCachedVisualImage@@MEBA?AVCResourceTag@@XZ
    virtual CResourceTag GetResourceTag() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTree@CCachedVisualImage@@MEBAPEAVCVisualTree@@XZ
    virtual CVisualTree * GetVisualTree() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCachedVisualImage@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackdropVisualImage@CCachedVisualImage@@MEBA_NXZ
    virtual bool IsBackdropVisualImage() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCachedVisualImage@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCachedTargetInvalidated@CCachedVisualImage@@MEAAXPEBVCCachedTarget@1@@Z
    virtual void OnCachedTargetInvalidated(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CCachedVisualImage@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNotifiers@CCachedVisualImage@@IEAAJPEAVCResourceTable@@@Z
    long RegisterNotifiers(CResourceTable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAJXZ
    virtual long RegisterRootVisualAsNotifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z
    bool RemoveInvalidTargets(D2D_SIZE_U);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z
    long SetForDCompSnapshot(CVisual *, D2D_SIZE_U const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderTransform@CCachedVisualImage@@IEAAJAEBU_D3DMATRIX@@@Z
    long SetRenderTransform(_D3DMATRIX const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z
    long SetRootVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Snapshot@CCachedVisualImage@@IEAAJXZ
    long Snapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ
    virtual void UnRegisterNotifiers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAXXZ
    virtual void UnRegisterRootVisualAsNotifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z
    long UpdateFromVisualSurface(CVisualTree *, D2D_VECTOR_2F const &, D2D_VECTOR_2F const &, D2D_VECTOR_2F const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ
    virtual long UpdateVisualTree();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCachedVisualImage@@MEAA@XZ
    virtual ~CCachedVisualImage();
};
