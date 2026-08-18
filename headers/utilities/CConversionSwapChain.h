#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 49 member(s).
class CConversionSwapChain {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConversionSwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIndependentFlipSupport@CConversionSwapChain@@UEBA_NXZ
    virtual bool CheckIndependentFlipSupport() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z
    virtual bool CheckMultiplaneOverlaySupport(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const *, unsigned int, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CConversionSwapChain@@UEBAJIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ
    virtual long CopyFrontToBackBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ
    virtual IDeviceTarget * GetBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayPixelFormatInfo@CConversionSwapChain@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetDisplayPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    virtual long GetMultiplaneOverlayCaps(DXGI_MULTIPLANE_OVERLAY_CAPS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CConversionSwapChain@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool IsSupportedFakeOverlayColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVariableRefreshRate@CConversionSwapChain@@UEBA_NPEAI@Z
    virtual bool IsVariableRefreshRate(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual void NotifyRenderedRect(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z
    virtual long PresentMPO(unsigned int, unsigned int, int, void const *, DWM_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConversionSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConversionSwapChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CConversionSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z
    virtual long SetHardwareProtection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentFlipApprovedDuration@CConversionSwapChain@@UEAAX_K@Z
    virtual void SetIndependentFlipApprovedDuration(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CConversionSwapChain@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVBlankDuration@CConversionSwapChain@@UEAA_NI_K@Z
    virtual bool SetVBlankDuration(unsigned int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConversionSwapChain@@UEAA@XZ
    virtual ~CConversionSwapChain();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@U_LUID@@III@Z
    CConversionSwapChain(CD3DDevice *, IDXGISwapChainDWM1*, PixelFormatInfo const &, RenderTargetInfo const &, RefreshRateInfo const &, _LUID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z
    long CalcPresentMode(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z
    long ConvertDesktopAndAppPlanes(DWM_PRESENT_MULTIPLANE_OVERLAY const &, DWM_PRESENT_MULTIPLANE_OVERLAY const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z
    long ConvertSingleAppPlane(DWM_PRESENT_MULTIPLANE_OVERLAY const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ
    long ConvertSingleDesktopPlane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z
    long ConvertSingleResource(ID3D11ShaderResourceView *, D2D_SIZE_U const &, PixelFormatInfo const &, WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCLegacySwapChain@@@Z
    static long Create(CD3DDevice *, DXGI_OUTPUT_DWM_DESC const &, IDXGISwapChainDWM1*, PixelFormatInfo const &, RenderTargetInfo const &, CLegacySwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ
    long EnsureTargetBitmap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z
    long GetAppOverlayShaderResourceView(IOverlayPlaneResource *, D2D_SIZE_U *, int *, ID3D11ShaderResourceView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CConversionSwapChain@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z
    bool IsDesktopRect(tagRECT const &) const;
};
