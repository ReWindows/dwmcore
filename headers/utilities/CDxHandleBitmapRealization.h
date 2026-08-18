#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 77 member(s).
class CDxHandleBitmapRealization {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDxHandleBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z
    static long Create(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, bool, ISwapChainRealization * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D3DSurfaceDesc@CDxHandleBitmapRealization@@UEBAAEBUD3D11_TEXTURE2D_DESC@@XZ
    virtual D3D11_TEXTURE2D_DESC const & D3DSurfaceDesc() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesiresTearing@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool DesiresTearing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CDxHandleBitmapRealization@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderColor@CDxHandleBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@XZ
    virtual _D3DCOLORVALUE GetBorderColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentType@CDxHandleBitmapRealization@@UEBA?AW4BufferContentType@@XZ
    virtual int GetContentType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z
    virtual IDXGIResource * GetDXGIResource(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CDxHandleBitmapRealization@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurface@CDxHandleBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z
    virtual ::Windows::Devices::Display::Core::IDisplaySurface * GetDisplaySurface(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAUD2D_RECT_F@@@Z
    virtual bool GetLetterboxingMargins(D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z
    virtual void GetMPORects(CMILMatrix const &, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneResourceDesc@CDxHandleBitmapRealization@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z
    virtual long GetPlaneResourceDesc(DWM_PLANE_RESOURCE_DESC *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentAllowedTearing@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool GetPresentAllowedTearing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentDuration@CDxHandleBitmapRealization@@UEBAIXZ
    virtual unsigned int GetPresentDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentDurationTolerance@CDxHandleBitmapRealization@@UEBA_NPEAI@Z
    virtual bool GetPresentDurationTolerance(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentInterval@CDxHandleBitmapRealization@@UEBAIXZ
    virtual unsigned int GetPresentInterval() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationIndex@CDxHandleBitmapRealization@@UEBAIXZ
    virtual unsigned int GetRealizationIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ
    virtual int GetRotation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetScaledLetterboxingMargins(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDxHandleBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizePreference@CDxHandleBitmapRealization@@UEBA?AW4SizePreference@@XZ
    virtual int GetSizePreference() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetSourceRect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceLuid@CDxHandleBitmapRealization@@UEBA?AU_LUID@@XZ
    virtual _LUID GetSurfaceLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@CDxHandleBitmapRealization@@UEBA_KXZ
    virtual uint64_t GetUniqueId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsDirectFlipCompatible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDRContent@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsHDRContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsOverlayCompatible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsOverlayRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayRevokable@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsOverlayRevokable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsPinned() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStereo@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsStereo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CDxHandleBitmapRealization@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidUseAsSwapChain@CDxHandleBitmapRealization@@UEBA_NXZ
    virtual bool IsValidUseAsSwapChain() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPinned@CDxHandleBitmapRealization@@UEAAXXZ
    virtual void NotifyPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnPinned@CDxHandleBitmapRealization@@UEAAXXZ
    virtual void NotifyUnPinned();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDxHandleBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDxHandleBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReuseRealization@CDxHandleBitmapRealization@@UEAAXAEAUCSM_REALIZATION_INFO@@@Z
    virtual void ReuseRealization(CSM_REALIZATION_INFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z
    virtual void UpdateAttributes(CSM_BUFFER_ATTRIBUTES const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z
    CDxHandleBitmapRealization(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, bool, bool, CDecodeBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ
    virtual long EnsureD2DBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ
    long EnsureDisplaySurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ
    virtual void ReleaseD2DBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ
    void ReleaseDisplaySurface();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDxHandleBitmapRealization@@MEAA@XZ
    virtual ~CDxHandleBitmapRealization();
};
