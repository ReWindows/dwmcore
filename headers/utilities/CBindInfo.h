#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 33 member(s).
namespace CGlobalCompositionSurfaceInfo {
class CBindInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRecordedStatistics@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAJXZ
    long CommitRecordedStatistics() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmIndependentFlipEntry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ
    long ConfirmIndependentFlipEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z
    void DisableDirectFlip(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ
    long DisableIndependentFlip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ
    void DisableOverlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z
    long EnableDirectFlip(bool, IOverlaySwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z
    long EnableIndependentFlip(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z
    long EnableOverlay(IOverlaySwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ
    long EnsureHDRMetaData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z
    ISwapChainRealization * FindRealization(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z
    long Initialize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@I@Z
    long PinResources(_LUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ
    bool RecentlyComposed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z
    void Reset(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z
    long SetIndependentFlipDuration(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z
    long SetIndependentFlipNotify(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ
    void SetRecentlyComposed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z
    void UnpinResources(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z
    void UpdateSwapChainTelemetry(int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ
    ~CBindInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z
    void AddRealization(ISwapChainRealization *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBufferHomogeneity@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ
    void CheckBufferHomogeneity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z
    long CreateAndAddSingleBuffer(CSM_BUFFER_ATTRIBUTES const &, CSM_SINGLE_BUFFER_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z
    long CreateAndAddSwapChainBuffers(CSM_BUFFER_ATTRIBUTES const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z
    long CreateNewRealization(CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, bool, ISwapChainRealization * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DxFlipConsumedTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z
    void DxFlipConsumedTelemetry(tagCOMPOSITION_TARGET_ID const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ
    long EnsureDecodeBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z
    long EnsureOverlaySwapChainWeakRef(IOverlaySwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z
    void EnsureSwapChainTelemetryInitialized(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealization@@XZ
    IYUVSwapChainRealization * GetPrimaryYUVRealization() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ
    void ResetCustomDuration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ
    void TraceSwapChainTelemetry();
};
} // namespace CGlobalCompositionSurfaceInfo
