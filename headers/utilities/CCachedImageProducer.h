#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 27 member(s).
class CCachedImageProducer {
public:
    class CCachedRealization;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CCachedImageProducer@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCachedImageProducer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long EnsureDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z
    virtual long GetCurrentRenderingRealization(IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CCachedImageProducer@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CCachedImageProducer@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CCachedImageProducer@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CCachedImageProducer@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingColorSpace@CCachedImageProducer@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual bool IsMatchingColorSpace(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CCachedImageProducer@@UEBA_NXZ
    virtual bool IsOpaque() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CCachedImageProducer@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CCachedImageProducer@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCachedImageProducer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RecordUse(CDrawingContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCachedImageProducer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CCachedImageProducer@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedImageProducer@@IEAA@XZ
    CCachedImageProducer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z
    long EnsureRealizationInternal(CDrawingContext *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z
    WindissectOpaque * FindRealizationInternal(RenderTargetInfo const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCachedImageProducer@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ
    bool IsInitialRender() const;
};
