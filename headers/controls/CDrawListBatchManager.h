#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CDrawListBatchManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z
    long CreateBatchCommand(CBatchCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z
    void FreeBatchResources(CDrawListEntryBatch *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ
    long CreateRenderingResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ
    void DestroyDeviceResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawListBatchManager@@IEAA@XZ
    ~CDrawListBatchManager();
};
