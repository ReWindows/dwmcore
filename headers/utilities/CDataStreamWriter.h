#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CDataStreamWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z
    long AddBlockData(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z
    long AddItemData(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginItem@CDataStreamWriter@@QEAAJXZ
    long BeginItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndItem@CDataStreamWriter@@QEAAJXZ
    long EndItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ
    _LIST_ENTRY * FlushData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z
    long GetItemDataWritePointer(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDataStreamWriter@@QEAAJI@Z
    long Initialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CDataStreamWriter@@QEAAXXZ
    void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataStreamWriter@@QEAA@XZ
    ~CDataStreamWriter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z
    long AllocateNewBlock(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSize@CDataStreamWriter@@IEAAJI@Z
    long EnsureSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeResources@CDataStreamWriter@@IEAAXXZ
    void FreeResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z
    long IncreaseWrittenByteCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWithinItem@CDataStreamWriter@@IEAA_NXZ
    bool IsWithinItem();
};
