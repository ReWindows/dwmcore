#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CMonitorTransform {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMonitorTransform@@QEAA@XZ
    CMonitorTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z
    WindissectOpaque GetClipBox(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInflationScale@CMonitorTransform@@QEBAM_N@Z
    float GetInflationScale(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CMonitorTransform@@QEBAAEBVCMILMatrix@@_N@Z
    CMILMatrix const & GetTransform(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z
    void Initialize(D2D_SIZE_U const &, WindissectOpaque const &, float, float, int, WindissectOpaque const *);
};
