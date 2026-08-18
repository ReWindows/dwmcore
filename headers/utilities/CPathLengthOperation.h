#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CPathLengthOperation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPathLengthOperation@@QEAA@XZ
    CPathLengthOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z
    float GetLength(CPathData const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z
    float SumPointDistances(unsigned int) const;
};
