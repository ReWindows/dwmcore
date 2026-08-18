#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CReconstructableDrawListEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z
    static long Create(ReconstructableDrawListEntryParams const &, CReconstructableDrawListEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CReconstructableDrawListEntry@@UEBA?AW4DrawListEntryType@@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReconstructableDrawListEntry@@UEAA@XZ
    virtual ~CReconstructableDrawListEntry();
};
