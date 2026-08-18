#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CGlobalManipulationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGlobalManipulationManager@@SAJPEAVCComposition@@PEAPEAVCManipulationManager@@@Z
    static long Create(CComposition *, CManipulationManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ
    virtual long UpdateMMCSSTask();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z
    CGlobalManipulationManager(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ
    virtual long InitializeMMCSSTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ
    virtual long ManipulationThreadMain();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalManipulationManager@@EEAA@XZ
    virtual ~CGlobalManipulationManager();
};
