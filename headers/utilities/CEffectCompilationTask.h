#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CEffectCompilationTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEffectCompilationTask@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z
    static long GetRestrictedErrorDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CEffectCompilationTask@@QEAAPEAVCCompiledEffectCache@@XZ
    CCompiledEffectCache * GetResults();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEffectCompilationTask@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEffectCompilationTask@@QEAA@XZ
    ~CEffectCompilationTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTemplate_RenderThread@CEffectCompilationTask@@AEAAJPEAVCCompiledEffectTemplate@@@Z
    long AddTemplate_RenderThread(CCompiledEffectTemplate *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z
    CEffectCompilationTask(CEffectCompilationService *, ::Windows::UI::Composition::IEffectDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ
    void Cancel_RenderThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ
    void Compile_WorkerThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEffectCompilationTask@@AEAAJXZ
    long Initialize();
};
