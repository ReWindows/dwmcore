#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CCyclicResourceListEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLinksForCycles@CCyclicResourceListEntry@@UEAAXXZ
    virtual void BreakLinksForCycles();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z
    CCyclicResourceListEntry(CResourceTable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCyclicResourceListEntry@@IEAA@XZ
    ~CCyclicResourceListEntry();
};
