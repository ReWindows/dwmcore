#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 40 member(s).
class CLegacyRemotingSwapChain {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacyRemotingSwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CLegacyRemotingSwapChain@@UEBAJXZ
    virtual long CheckOcclusionState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrontToBackBuffer@CLegacyRemotingSwapChain@@UEAAJXZ
    virtual long CopyFrontToBackBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CLegacyRemotingSwapChain@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBuffer@CLegacyRemotingSwapChain@@UEBAPEAVIDeviceTarget@@XZ
    virtual IDeviceTarget * GetBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CLegacyRemotingSwapChain@@UEBAIXZ
    virtual unsigned int GetBufferCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CLegacyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNominalRefreshRate@CLegacyRemotingSwapChain@@UEBA?AUDXGI_RATIONAL@@XZ
    virtual DXGI_RATIONAL GetNominalRefreshRate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CLegacyRemotingSwapChain@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CLegacyRemotingSwapChain@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatistics@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetPresentStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatisticsDWM@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z
    virtual long GetPresentStatisticsDWM(DXGI_FRAME_STATISTICS_DWM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@CLegacyRemotingSwapChain@@UEBA_KXZ
    virtual uint64_t GetVBlankDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CLegacyRemotingSwapChain@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CLegacyRemotingSwapChain@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CLegacyRemotingSwapChain@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMetaData@CLegacyRemotingSwapChain@@UEAAJAEBU_DWMIndirectMetaData@@@Z
    virtual long NotifyMetaData(_DWMIndirectMetaData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual void NotifyRenderedRect(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z
    virtual long Present(CRegion const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacyRemotingSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual long RailAppPresent(uint64_t, WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacyRemotingSwapChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CLegacyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CLegacyRemotingSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CLegacyRemotingSwapChain@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CLegacyRemotingSwapChain@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlank@CLegacyRemotingSwapChain@@UEBAJXZ
    virtual long WaitForVBlank() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z
    CLegacyRemotingSwapChain(CD3DDevice *, _UNSIGNED_RATIO const &, IRenderTargetBitmap *, void *, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z
    static long Create(CD3DDevice *, unsigned short const *, _UNSIGNED_RATIO const &, IRenderTargetBitmap *, void *, ILegacyRemotingSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ
    long EnsureBitmapDest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z
    long Initialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ
    long UpdateSectionBits();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyRemotingSwapChain@@MEAA@XZ
    virtual ~CLegacyRemotingSwapChain();
};
