#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CCompositionSwapchainStatistics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z
    virtual long CommitRecordedStatistics(IOverlaySwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmRecordedStatistics@CCompositionSwapchainStatistics@@UEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void ConfirmRecordedStatistics(tagCOMPOSITION_TARGET_ID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z
    static long Create(CCompositionSurfaceInfo const *, void *, uint64_t, CCompositionSwapchainStatistics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOverlayFrame@CCompositionSwapchainStatistics@@UEAA_NAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z
    virtual bool NotifyOverlayFrame(tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual bool RecordCompositionStats(bool, int, bool, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotifyOfFlipAway@CCompositionSwapchainStatistics@@UEAA_NXZ
    virtual bool ShouldNotifyOfFlipAway();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCompositionSwapchainStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z
    long Initialize(void *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionSwapchainStatistics@@MEAA@XZ
    virtual ~CCompositionSwapchainStatistics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUtagCOMPOSITION_TARGET_ID@@@Z
    static bool OutputMatchesMonitorTarget(PresentationOutputID const &, tagCOMPOSITION_TARGET_ID const &);
};
