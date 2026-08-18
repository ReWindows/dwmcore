#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CTransform3D {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z
    CMILMatrix const & GetMatrix(D2D_SIZE_F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z
    CTransform3D(CComposition *, bool);
};
