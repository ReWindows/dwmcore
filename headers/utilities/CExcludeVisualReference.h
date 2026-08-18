#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CExcludeVisualReference {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z
    CExcludeVisualReference(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z
    static long Create(CVisual *, CExcludeVisualReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ
    CVisual * GetVisualNoRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CExcludeVisualReference@@QEAAJXZ
    long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restore@CExcludeVisualReference@@UEAAJXZ
    virtual long Restore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CExcludeVisualReference@@UEAAJXZ
    virtual long Show();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExcludeVisualReference@@QEAA@XZ
    ~CExcludeVisualReference();
};
