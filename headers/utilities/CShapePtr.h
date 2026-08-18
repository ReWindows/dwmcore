#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CShapePtr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z
    long FillContainsPoint(D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@CShapePtr@@QEBAAEBVCShape@@XZ
    CShape const & Get() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z
    long GetD2DGeometry(CMILMatrix const *, ID2D1Geometry * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    long GetTightBounds(WindissectOpaque *, CMILMatrix const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ
    bool IsAxisAlignedRectangle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CShapePtr@@QEBA_NXZ
    bool IsEmpty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CShapePtr@@QEBA_NXZ
    bool IsValid() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShapePtr@@QEAAXXZ
    void Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShapePtr@@QEAA@XZ
    ~CShapePtr();
};
