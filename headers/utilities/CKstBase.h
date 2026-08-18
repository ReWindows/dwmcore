#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CKstBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CKstBase@@QEAAJPEBG@Z
    long Reset(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CKstBase@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKstBase@@QEAA@XZ
    ~CKstBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CKstBase@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFailFastOnFailureToStart@CKstBase@@MEAA_NXZ
    virtual bool ShouldFailFastOnFailureToStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMMCSSTask@CKstBase@@MEAAJXZ
    virtual long UpdateMMCSSTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CKstBase@@AEAAKXZ
    unsigned long Run();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z
    static unsigned long RunKernelThreadStatic(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CKstBase@@AEAAJPEBG@Z
    long Start(unsigned short const *);
};
