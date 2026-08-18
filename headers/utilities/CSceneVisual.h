#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CSceneVisual {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z
    CSceneVisual(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootChanged@CSceneVisual@@QEAAJXZ
    long OnRootChanged();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CSceneVisual@@MEAAJPEAVCContent@@@Z
    virtual long SetContent(CContent *);
};
