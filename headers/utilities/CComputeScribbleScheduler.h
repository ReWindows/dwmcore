#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CComputeScribbleScheduler {
public:
    class ThreadSharedData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAPEAV1@@Z
    static long Create(CComputeScribbleRenderer *, IOverlaySwapChain *, ID3D12CommandQueue *, IDCompositionDirectInkSuperWetRenderer *, CComputeScribbleScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z
    long ScheduleScribbleFrame(CComputeScribbleFramebuffer *, CComputeScribble *, uint64_t, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z
    void SetScannedOutBuffer(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComputeScribbleScheduler@@QEAA@XZ
    ~CComputeScribbleScheduler();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComputeScribbleScheduler@@AEAA@PEAVCComputeScribbleRenderer@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@@Z
    CComputeScribbleScheduler(CComputeScribbleRenderer *, ID3D12CommandQueue *, IDCompositionDirectInkSuperWetRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z
    long CreateWakeupFence(WindissectOpaque const &, ID3D12Fence * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z
    long DecideBufferToDispatch(CComputeScribbleFramebuffer * *, CComputeScribbleFramebuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXPEAVCComputeScribble@@PEAN1@Z
    void GetWakeupTimeBeforeVBlank(CComputeScribble *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z
    long Initialize(IOverlaySwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ
    long ProcessScribbleFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z
    long ReadyWakeupFence(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresNewWakeupFence@CComputeScribbleScheduler@@AEBA_NAEBUScribbleFrame@1@@Z
    bool RequiresNewWakeupFence(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z
    long Schedule(WindissectOpaque const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z
    long SetupWakeupFence(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ
    long StartWorkerThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ
    void StopInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ
    unsigned long WorkerThreadMain();
};
