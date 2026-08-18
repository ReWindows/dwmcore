#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CScribbleSwapChain {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z
    virtual long EnableComputeScribble(IMonitorTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z
    virtual long GetComputeScribbleInvalidRects(CMILMatrix const &, WindissectOpaque const &, CMergedRect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComputeScribbleRenderer@CScribbleSwapChain@@UEAAPEAVCComputeScribbleRenderer@@XZ
    virtual CComputeScribbleRenderer * GetComputeScribbleRenderer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentScanoutBuffer@CScribbleSwapChain@@UEAAPEAVISwapChainBuffer@@XZ
    virtual ISwapChainBuffer * GetCurrentScanoutBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTransientInkDirtyRegion@CScribbleSwapChain@@UEAAXAEBVCRegion@@@Z
    virtual void HandleTransientInkDirtyRegion(CRegion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPendingScribble@CScribbleSwapChain@@UEBA_NXZ
    virtual bool HasPendingScribble() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComputeScribbleSupported@CScribbleSwapChain@@UEBA_NXZ
    virtual bool IsComputeScribbleSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrontBufferRenderingEnabled@CScribbleSwapChain@@UEBA_NXZ
    virtual bool IsFrontBufferRenderingEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrontBufferRenderingOnNextFrame@CScribbleSwapChain@@UEAAX_N@Z
    virtual void SetFrontBufferRenderingOnNextFrame(bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z
    CScribbleSwapChain(CD3DDevice *, PixelFormatInfo const &, RenderTargetInfo const &, RefreshRateInfo const &, unsigned int, unsigned int, _LUID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CScribbleSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z
    void PostPresentForComputeScribble(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ
    void ReleaseComputeScribbleResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScribbleSwapChain@@MEAA@XZ
    virtual ~CScribbleSwapChain();
};
