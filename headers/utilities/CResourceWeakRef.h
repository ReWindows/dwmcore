#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CResourceWeakRef {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z
    void AddListener(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateWeakRef@CResourceWeakRef@@UEAAXXZ
    virtual void InvalidateWeakRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z
    void RemoveListener(CResource const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceWeakRef@@IEAA@PEAVCResource@@@Z
    CResourceWeakRef(CResource *);
};
