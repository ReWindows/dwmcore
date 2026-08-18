#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CFlipExSwapchainStatistics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRecordedStatistics@CFlipExSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z
    virtual long CommitRecordedStatistics(IOverlaySwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z
    static long Create(CGlobalCompositionSurfaceInfo const *, CFlipExSwapchainStatistics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual bool RecordCompositionStats(bool, int, bool, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CFlipExSwapchainStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
