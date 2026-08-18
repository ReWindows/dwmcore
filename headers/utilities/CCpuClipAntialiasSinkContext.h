#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CCpuClipAntialiasSinkContext {
public:
    class SinkEntry;
    class SinkRenderParameters;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z
    static long Create(CCpuClipAntialiasSinkContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z
    long FlushDrawList(CDrawingContext *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z
    long PushSink(CShape const *, CCpuClipAntialiasSink *);
};
