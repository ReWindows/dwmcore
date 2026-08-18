#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
class CComponentTransform2D {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CComponentTransform2D@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetRealization(D2D_SIZE_F const &, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdentity@CComponentTransform2D@@QEBA_NXZ
    bool IsIdentity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CComponentTransform2D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CComponentTransform2D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@@Z
    long ProcessSetAnchorPoint(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT@@@Z
    long ProcessSetCenterPoint(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@@Z
    long ProcessSetRotationAngle(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetScale@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETSCALE@@@Z
    long ProcessSetScale(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM2D_SETSCALE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z
    long ProcessSetTransformMatrix(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CComponentTransform2D@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CComponentTransform2D@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z
    long SetTransform(D2D_MATRIX_3X2_F const &);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CComponentTransform2D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    virtual void GetRealization(D2D_SIZE_F const *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetRotationAngle(WindissectOpaque const *, void const *);
};
