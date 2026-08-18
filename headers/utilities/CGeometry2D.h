#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
class CGeometry2D {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z
    long GetMeshData(MilVertexXYZDUV2const * * const, unsigned int *, unsigned int const * * const, unsigned int *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGeometry2D@@MEAA@XZ
    virtual ~CGeometry2D();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeCaches@CGeometry2D@@AEAAXXZ
    void FreeCaches();
};
