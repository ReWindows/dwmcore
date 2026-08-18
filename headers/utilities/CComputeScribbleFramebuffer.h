#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CComputeScribbleFramebuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ
    void ClearScribbles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z
    static long Create(CD3DDevice *, ID3D12Resource *, unsigned int, CComputeScribbleFramebuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z
    long DispatchScribbles(ID3D12CommandQueue *, CComputeScribbleStopwatch *, uint64_t, IDCompositionDirectInkSuperWetRenderer *, ComputeScribbleLatencyData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z
    void PreRender(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ
    void SaveDirtyForPreRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScribble@CComputeScribbleFramebuffer@@QEAAXPEAVCComputeScribble@@@Z
    void SetScribble(CComputeScribble *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComputeScribbleFramebuffer@@UEAA@XZ
    virtual ~CComputeScribbleFramebuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z
    long BuildCommandList(CComputeScribbleStopwatch *, IDCompositionDirectInkSuperWetRenderer *, ComputeScribbleLatencyData *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z
    CComputeScribbleFramebuffer(CD3DDevice *, ID3D12Resource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z
    long WaitForCommandList(ID3D12CommandQueue *);
};
