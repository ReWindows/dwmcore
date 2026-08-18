#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class ScanPipelineBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z
    long AddOp_Binary(void ( *)(PipelineParams const *, ScanOpParams const *), OpSpecificData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z
    long Append_Convert(PixelFormatInfo const &, PixelFormatInfo const &, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z
    long AddBufferReference(void const * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOperation@ScanPipelineBuilder@@IEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@IPEAPEAUPipelineItem@@@Z
    long AddOperation(void ( *)(PipelineParams const *, ScanOpParams const *), OpSpecificData *, unsigned int, PipelineItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z
    long Append_Convert_BetweenInterchange(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ
    long ConvertDestBufferReferences();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA?AW4BufferLocation@@XZ
    int GetFreeIntermediateBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingPongBuffer@ScanPipelineBuilder@@IEAAXW4Subpipe@1@@Z
    void PingPongBuffer(int);
};
