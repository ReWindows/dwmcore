#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CComputeScribbleStopwatch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z
    static long Create(ID3D12CommandQueue *, CComputeScribbleStopwatch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ
    float GetElapsedTimeMs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z
    void StopOnGpu(ID3D12GraphicsCommandList *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComputeScribbleStopwatch@@QEAA@XZ
    ~CComputeScribbleStopwatch();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Calibrate@CComputeScribbleStopwatch@@AEAAJXZ
    long Calibrate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z
    long Initialize(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ
    long ResolveDelayedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ
    long ResolveGpuTimestamp();
};
