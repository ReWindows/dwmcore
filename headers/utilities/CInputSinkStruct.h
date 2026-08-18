#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CInputSinkStruct {
public:
    class InputQueueInfo;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputSinkStruct@@QEAA@XZ
    CInputSinkStruct();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z
    static int GetInputType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z
    long ReplaceInputHandle(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z
    long InitializeQueueInfo(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeQueues@CInputSinkStruct@@AEAAXXZ
    void InitializeQueues();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z
    void SetCompositionInputHandle(void *);
};
