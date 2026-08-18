#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 36 member(s).
class CDummyRemotingSwapChain {
public:
    class CPresentStats;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDummyRemotingSwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CDummyRemotingSwapChain@@UEBAJXZ
    virtual long CheckOcclusionState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrontToBackBuffer@CDummyRemotingSwapChain@@UEAAJXZ
    virtual long CopyFrontToBackBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CDummyRemotingSwapChain@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBuffer@CDummyRemotingSwapChain@@UEBAPEAVIDeviceTarget@@XZ
    virtual IDeviceTarget * GetBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CDummyRemotingSwapChain@@UEBAIXZ
    virtual unsigned int GetBufferCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CDummyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNominalRefreshRate@CDummyRemotingSwapChain@@UEBA?AUDXGI_RATIONAL@@XZ
    virtual DXGI_RATIONAL GetNominalRefreshRate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CDummyRemotingSwapChain@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CDummyRemotingSwapChain@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatistics@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetPresentStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z
    virtual long GetPresentStatisticsDWM(DXGI_FRAME_STATISTICS_DWM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@CDummyRemotingSwapChain@@UEBA_KXZ
    virtual uint64_t GetVBlankDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CDummyRemotingSwapChain@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CDummyRemotingSwapChain@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CDummyRemotingSwapChain@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMetaData@CDummyRemotingSwapChain@@UEAAJAEBU_DWMIndirectMetaData@@@Z
    virtual long NotifyMetaData(_DWMIndirectMetaData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CDummyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual void NotifyRenderedRect(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z
    virtual long Present(CRegion const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDummyRemotingSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RailAppPresent@CDummyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual long RailAppPresent(uint64_t, WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDummyRemotingSwapChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CDummyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CDummyRemotingSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CDummyRemotingSwapChain@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CDummyRemotingSwapChain@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlank@CDummyRemotingSwapChain@@UEBAJXZ
    virtual long WaitForVBlank() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z
    static long Create(IDXGIOutputDWM *, ILegacyRemotingSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDummyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z
    long Initialize(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDummyRemotingSwapChain@@MEAA@XZ
    virtual ~CDummyRemotingSwapChain();
};
