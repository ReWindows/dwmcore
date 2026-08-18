#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class QpcTimeConverter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QpcTimeConverter@@QEAA@XZ
    QpcTimeConverter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z
    int QpcToMicroSec(uint64_t, uint64_t *) const;
};
