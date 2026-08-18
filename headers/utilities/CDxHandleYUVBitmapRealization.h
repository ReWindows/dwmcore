#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 85 member(s).
class CDxHandleYUVBitmapRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDxHandleYUVBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z
    static long Create(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CDecodeBitmap *, ISwapChainRealization * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z
    static long CreateSubResource(IYUVSwapChainRealization *, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CDecodeBitmap *, ISwapChainRealization * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D3DSurfaceDesc@CDxHandleYUVBitmapRealization@@UEBAAEBUD3D11_TEXTURE2D_DESC@@XZ
    virtual D3D11_TEXTURE2D_DESC const & D3DSurfaceDesc() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesiresTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool DesiresTearing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderColor@CDxHandleYUVBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@XZ
    virtual _D3DCOLORVALUE GetBorderColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentType@CDxHandleYUVBitmapRealization@@UEBA?AW4BufferContentType@@XZ
    virtual int GetContentType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z
    virtual IDXGIResource * GetDXGIResource(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurface@CDxHandleYUVBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z
    virtual ::Windows::Devices::Display::Core::IDisplaySurface * GetDisplaySurface(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAUD2D_RECT_F@@@Z
    virtual bool GetLetterboxingMargins(D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z
    virtual void GetMPORects(CMILMatrix const &, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CDxHandleYUVBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneResourceDesc@CDxHandleYUVBitmapRealization@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z
    virtual long GetPlaneResourceDesc(DWM_PLANE_RESOURCE_DESC *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool GetPresentAllowedTearing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentDuration@CDxHandleYUVBitmapRealization@@UEBAIXZ
    virtual unsigned int GetPresentDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentDurationTolerance@CDxHandleYUVBitmapRealization@@UEBA_NPEAI@Z
    virtual bool GetPresentDurationTolerance(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentInterval@CDxHandleYUVBitmapRealization@@UEBAIXZ
    virtual unsigned int GetPresentInterval() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationIndex@CDxHandleYUVBitmapRealization@@UEBAIXZ
    virtual unsigned int GetRealizationIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@CDxHandleYUVBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ
    virtual int GetRotation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetScaledLetterboxingMargins(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizePreference@CDxHandleYUVBitmapRealization@@UEBA?AW4SizePreference@@XZ
    virtual int GetSizePreference() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceRect@CDxHandleYUVBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetSourceRect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubResourceIndex@CDxHandleYUVBitmapRealization@@UEBAIXZ
    virtual unsigned int GetSubResourceIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ
    virtual _LUID GetSurfaceLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@CDxHandleYUVBitmapRealization@@UEBA_KXZ
    virtual uint64_t GetUniqueId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsCompositionSwapchainScaleMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectFlipCompatible@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsDirectFlipCompatible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDRContent@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsHDRContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsOverlayCompatible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsOverlayRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayRevokable@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsOverlayRevokable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsPinned() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStereo@CDxHandleYUVBitmapRealization@@UEBA_NXZ
    virtual bool IsStereo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CDxHandleYUVBitmapRealization@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ
    virtual void NotifyPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ
    virtual void NotifyUnPinned();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDxHandleYUVBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReuseRealization@CDxHandleYUVBitmapRealization@@UEAAXAEAUCSM_REALIZATION_INFO@@@Z
    virtual void ReuseRealization(CSM_REALIZATION_INFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z
    virtual void UpdateAttributes(CSM_BUFFER_ATTRIBUTES const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z
    CDxHandleYUVBitmapRealization(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CDecodeBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z
    void CalcDecodedSourceRectAndTransform(CMILMatrix *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ
    long EnsureDisplaySurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ
    long EnsureTexture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextureSize@CDxHandleYUVBitmapRealization@@MEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetTextureSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z
    long Initialize(IYUVSwapChainRealization *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ
    void ReleaseTexture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ
    long VPBltToDecodeBitmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDxHandleYUVBitmapRealization@@MEAA@XZ
    virtual ~CDxHandleYUVBitmapRealization();
};
