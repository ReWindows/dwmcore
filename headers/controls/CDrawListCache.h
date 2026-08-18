#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CDrawListCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CDrawListCache@@QEAAXXZ
    void Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z
    long Render(CDrawingContext *, CMILMatrix const &, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z
    void Update(CDrawingContext *, CDrawListEntryBuilder *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z
    static long InternalCreate(bool, CDrawListCache * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ
    void ReleaseDrawListEntries();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawListCache@@EEAA@XZ
    virtual ~CDrawListCache();
};
