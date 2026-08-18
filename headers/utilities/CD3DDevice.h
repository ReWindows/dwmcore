#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 97 member(s).
class CD3DDevice {
public:
    class CDelayUnpin;
    class D3D12Resources;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z
    void AddCheckMPOCache(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const *, unsigned int, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CD3DDevice@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceFrame@CD3DDevice@@QEAAJXZ
    long AdvanceFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z
    static void CalcHDRConvertUVTransform(D2D_SIZE_U const &, D2D_SIZE_U const &, WindissectOpaque const &, int, WindissectOpaque const &, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z
    bool CheckMPOCache(DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const *, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z
    long CheckOcclusionState(IDXGISwapChainDWM1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ
    bool ClearProtectedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z
    void CopySubresourceRegion(ID3D11Resource *, unsigned int, WindissectOpaque const &, ID3D11Resource *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z
    long CopyTexture2D(ID3D11Texture2D *, unsigned int, PixelFormatInfo const &, WindissectOpaque const &, IBitmapDest *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z
    long CreateBuffer(D3D11_BUFFER_DESC const &, D3D11_SUBRESOURCE_DATA const *, ID3D11Buffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCCompSwapChain@@@Z
    long CreateCompositionSwapChain(D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, unsigned int, CCompSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z
    long CreateConversionSwapChain(IDXGIOutput *, D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, unsigned int, CLegacySwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCDDASwapChain@@@Z
    long CreateDDASwapChain(IDXGIOutput *, D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, CDDASwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z
    long CreateDeviceTextureTarget(CResourceTag const &, D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, IDeviceTextureTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z
    long CreateDeviceTextureTarget(ID3D11Texture2D *, int, int, DisplayId, float, bool, IDeviceTextureTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z
    long CreateFence(CResourceTag const &, uint64_t, ID3D11Fence * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z
    long CreateLegacyRemotingSwapChain(IDXGIOutputDWM *, D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, ILegacyRemotingSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z
    long CreateLegacyStereoSwapChain(IDXGIOutput *, D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, unsigned int, CLegacyStereoSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z
    long CreateLegacySwapChain(IDXGIOutput *, D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, unsigned int, bool, CLegacySwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z
    long CreatePixelShader(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11PixelShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z
    long CreateRenderTargetBitmap(CResourceTag const &, D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, int, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z
    long CreateRenderTargetBitmap(ID3D11Texture2D *, int, int, DisplayId, float, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z
    long CreateRenderTargetBitmap(void *, bool, int, int, DisplayId, float, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z
    long CreateRenderTargetView(ID3D11Resource *, D3D11_RENDER_TARGET_VIEW_DESC const *, ID3D11RenderTargetView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z
    long CreateSecondaryD2DBitmap(CResourceTag const &, ID2DBitmapCacheSource *, CSecondaryD2DBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z
    long CreateShaderResourceView(ID3D11Resource *, D3D11_SHADER_RESOURCE_VIEW_DESC const *, ID3D11ShaderResourceView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z
    long CreateSharedHandleFence(CResourceTag const &, uint64_t, ID3D11Fence * *, void * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z
    long CreateStereoRenderTargetBitmap(ID3D11Texture2D *, int, int, DisplayId, float, IStereoRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z
    long CreateTexture(DWM_TEXTURE2D_DESC const &, D3D11_SUBRESOURCE_DATA *, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@U_LUID@@II@Z
    void DelayUnpinResources(WindissectOpaque, _LUID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardView@CD3DDevice@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z
    void DiscardView(ID3D11View *, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z
    long EnqueueSetEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CD3DDevice@@QEAAXXZ
    void Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z
    int GetCompatibleTextureFormat(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z
    long GetD3D12DeviceNoRef(ID3D12Device * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z
    long GetD3DSamplerStateNoRef(SamplerMode, ID3D11SamplerState * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z
    long GetDirectInkSuperWetRendererNoRef(IDCompositionDirectInkSuperWetRenderer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z
    long GetHighPriorityComputeCommandQueueNoRef(ID3D12CommandQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKernelDeviceHandle@CD3DDevice@@QEBAIXZ
    unsigned int GetKernelDeviceHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentError@CD3DDevice@@SAJI_N@Z
    static long GetPresentError(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z
    static long GetSwapChainCreationError(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z
    unsigned int GetSwapchainBufferUsage(bool, bool, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z
    ID3D11VertexShader * GetVertexShaderNoRef(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z
    long HDRConvert(ID3D11ShaderResourceView *, D2D_SIZE_U const &, PixelFormatInfo const &, WindissectOpaque const &, int, WindissectOpaque const &, ID3D11RenderTargetView *, D2D_SIZE_U const &, int, float, bool, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z
    long HDRConvertWithFakeOverlay(ID3D11ShaderResourceView *, PixelFormatInfo const &, ID3D11ShaderResourceView *, D2D_SIZE_U const &, PixelFormatInfo const &, WindissectOpaque const &, int, WindissectOpaque const &, ID3D11RenderTargetView *, D2D_SIZE_U const &, int, float, bool, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmediateUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z
    void ImmediateUnpinResources(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z
    bool IsFrontBufferRenderingSupported(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CD3DDevice@@QEBAJXZ
    long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z
    long Map(ID3D11Resource *, unsigned int, int, unsigned int, D3D11_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z
    void NotifyNoSequencePresent(_LUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z
    long OpenIndirectSwapchain(void *, void *, int, unsigned long, IDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ
    void * OpenRenderFence() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z
    long OpenSharedTexture(D3D11_TEXTURE2D_DESC *, D3D11_SUBRESOURCE_DATA *, void *, bool, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@U_LUID@@I@Z
    long PinResources(WindissectOpaque, _LUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z
    long Present(IDXGISwapChainDWM1*, unsigned int, unsigned int, unsigned int, IDXGIResource *, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z
    long Present(IDXGISwapChain1*, unsigned int, unsigned int, DXGI_PRESENT_PARAMETERS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z
    long PresentMPO(IDXGISwapChainDWM1*, unsigned int, unsigned int, int, void const *, _DXGI_PRESENT_MULTIPLANE_OVERLAY const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z
    void ProcessDelayUnpinForTarget(_LUID, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CD3DDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CD3DDevice@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z
    long ShareToD3D12(IUnknown *, ID3D12Resource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z
    long SignalRenderFence(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z
    long TranslateDXGIorD3DErrorInContext(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@CD3DDevice@@QEAAXXZ
    void Trim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z
    long TryGetD3D12Device(ID3D12Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CD3DDevice@@QEAAXPEAUID3D11Resource@@I@Z
    void Unmap(ID3D11Resource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z
    void UpdateSubresource(ID3D11Resource *, tagRECT const *, void const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ
    bool UseSwapchainAsShaderInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z
    long VideoProcessorBlt(ID3D11Resource *, unsigned int, int, unsigned int, unsigned int, tagRECT const &, int, DXGI_HDR_METADATA_HDR10*, ID3D11Resource *, unsigned int, unsigned int, tagRECT const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z
    static long Create(IDXGIAdapter *, CD3DDevice * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z
    static long CreateD3D11Device(IDXGIAdapter *, bool *, int *, int *, _LARGE_INTEGER *, ID3D11Device1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z
    long CreateScratchRenderTargetBitmap(D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &, CScratchRenderTargetBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAUDXGI_ADAPTER_DESC@@@Z
    static long GetAdapterInfo(IDXGIAdapter *, bool *, int *, int *, _LARGE_INTEGER *, DXGI_ADAPTER_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ
    void ProcessDeviceLost();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3DDevice@@MEAA@XZ
    virtual ~CD3DDevice();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3DDevice@@AEAA@_NW4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z
    CD3DDevice(bool, int, int, _LARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ
    void CalcMaxTextureSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForDeviceLost@CD3DDevice@@AEAAXXZ
    void CheckForDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z
    static void CheckForLeakedDWMSwapChain(IDXGISwapChainDWM1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z
    bool CheckTextureFormatSupported(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ
    void CleanupDelayUnpin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyAllResources@CD3DDevice@@AEAAXXZ
    void DestroyAllResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ
    long EnsureBeginCreateD3D12Resources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z
    long EnsureVideoProcessor(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ
    long GatherSupportedTextureFormats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateShaders@CD3DDevice@@AEAAJXZ
    long GenerateShaders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CD3DDevice@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z
    long Init(IDXGIAdapter *, ID3D11Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z
    long InitSystemDevice(IDXGIAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryWarpExtension@CD3DDevice@@AEAAJXZ
    long QueryWarpExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ
    void RemoveStaleCheckMPOCaches();
};
