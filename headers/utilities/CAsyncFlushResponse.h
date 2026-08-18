#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CAsyncFlushResponse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ
    virtual long OnPresentComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z
    virtual long SendResponse(long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z
    static long SendResponseWorker(CChannelContext *, unsigned int, long);
};
