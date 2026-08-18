#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CEffectCompilationService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z
    long BeginCompile(CCompiledEffectTemplate *, ::Windows::UI::Composition::IEffectDescription *, CEffectCompilationTask * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z
    static long Create(void *, CEffectCompilationService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ
    void HandleCompletedTasks();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEffectCompilationService@@AEAA@PEAX@Z
    CEffectCompilationService(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z
    void OnTaskCompleted_AnyThread(CEffectCompilationTask *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z
    bool TryAddDeadTask(CEffectCompilationTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z
    void TryReviveDeadTask(CEffectCompilationTask const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEffectCompilationService@@EEAA@XZ
    virtual ~CEffectCompilationService();
};
