#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CKst {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z
    static long Create(CComposition *, CKst * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerMmcss@CKst@@QEAAJXZ
    long TriggerMmcss();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKst@@QEAA@XZ
    ~CKst();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CKst@@EEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMmcssTask@CKst@@AEAAJXZ
    long InitializeMmcssTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMMCSSTask@CKst@@EEAAJXZ
    virtual long UpdateMMCSSTask();
};
