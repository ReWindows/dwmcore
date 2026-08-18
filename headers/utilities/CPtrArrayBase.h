#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CPtrArrayBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CPtrArrayBase@@IEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPtrArrayBase@@IEBA_KXZ
    uint64_t GetCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z
    long InsertAt(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CPtrArrayBase@@IEAA_N_K@Z
    bool Remove(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z
    void RemoveAt(uint64_t, uint64_t);
};
