#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CVectorShape {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CVectorShape@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CVectorShape@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CVectorShape@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z
    long ProcessSetTransform(CResourceTable *, tagMILCMD_VECTORSHAPE_SETTRANSFORM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z
    long SetTransform(CComponentTransform2D *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVectorShape@@MEAA@XZ
    virtual ~CVectorShape();
};
