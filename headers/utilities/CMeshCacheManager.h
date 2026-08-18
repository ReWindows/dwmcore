#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CMeshCacheManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ
    void ReleaseUnusedCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z
    WindissectOpaque * TryGetMeshAAOffsets(WindissectOpaque const &, CShape const *, ::D2D1::Matrix3x2F const &, bool);
};
