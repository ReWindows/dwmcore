#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 24 member(s).
class COverlaySwapChain {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupportsConvertPresentToMPO@COverlaySwapChain@@UEBA_NXZ
    virtual bool CheckSupportsConvertPresentToMPO() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ
    virtual long CopyFrontToBackBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@COverlaySwapChain@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@COverlaySwapChain@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayAdapterLuid@COverlaySwapChain@@UEBA?AU_LUID@@XZ
    virtual _LUID GetDisplayAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentFlipApprovedDuration@COverlaySwapChain@@UEBA_KXZ
    virtual uint64_t GetIndependentFlipApprovedDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNominalRefreshRate@COverlaySwapChain@@UEBA?AUDXGI_RATIONAL@@XZ
    virtual DXGI_RATIONAL GetNominalRefreshRate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@COverlaySwapChain@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatistics@COverlaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetPresentStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@COverlaySwapChain@@UEBA_KXZ
    virtual uint64_t GetVBlankDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVidPnSourceId@COverlaySwapChain@@UEBAIXZ
    virtual unsigned int GetVidPnSourceId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVidPnTargetId@COverlaySwapChain@@UEBAIXZ
    virtual unsigned int GetVidPnTargetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@COverlaySwapChain@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@COverlaySwapChain@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVRRMaxDuration@COverlaySwapChain@@UEBA_NXZ
    virtual bool IsVRRMaxDuration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@COverlaySwapChain@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVariableRefreshRate@COverlaySwapChain@@UEBA_NPEAI@Z
    virtual bool IsVariableRefreshRate(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual void NotifyRenderedRect(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentFlipApprovedDuration@COverlaySwapChain@@UEAAX_K@Z
    virtual void SetIndependentFlipApprovedDuration(uint64_t);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@@Z
    COverlaySwapChain(CD3DDevice *, PixelFormatInfo const &, RenderTargetInfo const &, RefreshRateInfo const &, unsigned int, unsigned int, _LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVRRPresentDurationSupport@COverlaySwapChain@@IEBAJIPEAI0@Z
    long CheckVRRPresentDurationSupport(unsigned int, unsigned int *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectFlipRectRequiresPanelFitter@COverlaySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z
    bool DirectFlipRectRequiresPanelFitter(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@COverlaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COverlaySwapChain@@MEAA@XZ
    virtual ~COverlaySwapChain();
};
