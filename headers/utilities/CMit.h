#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CMit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z
    static long Create(CComposition *, CMit * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z
    static long GetInkCanvasInputHost(IInkCanvasInputHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMit@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInputThreadStatic@CMit@@SAKPEAX@Z
    static unsigned long RunInputThreadStatic(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CMit@@QEAAJXZ
    long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CMit@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMit@@UEAA@XZ
    virtual ~CMit();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMit@@IEAAJXZ
    long Initialize();
};
