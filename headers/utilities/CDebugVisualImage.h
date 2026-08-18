#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CDebugVisualImage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z
    static long Create(CComposition *, CVisual *, CDebugVisualImage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockAndRead@CDebugVisualImage@@QEAAXXZ
    void LockAndRead();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderTargetSize@CDebugVisualImage@@SAXAEBUD2D_SIZE_U@@@Z
    static void SetRenderTargetSize(D2D_SIZE_U const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceTag@CDebugVisualImage@@EEBA?AVCResourceTag@@XZ
    virtual CResourceTag GetResourceTag() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z
    long Initialize(CVisual *);
};
