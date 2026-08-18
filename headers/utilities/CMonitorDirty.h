#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CMonitorDirty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z
    void AddDirtyRegion(CTreeDirty const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ
    virtual COcclusionContext const * GetOcclusionContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ
    void SetFullTightDirtyRegion();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void AddTightDirtyRect(WindissectOpaque const *);
};
