#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CComponentTransform3D {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CComponentTransform3D@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    virtual void GetRealization(D2D_SIZE_F const *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@@Z
    long ProcessSetAnchorPoint(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT@@@Z
    long ProcessSetCenterPoint(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z
    long ProcessSetOrientation(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@@Z
    long ProcessSetRotationAngle(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z
    long ProcessSetRotationAxis(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETSCALE@@@Z
    long ProcessSetScale(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETSCALE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z
    long ProcessSetTransformMatrix(CResourceTable *, tagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CComponentTransform3D@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CComponentTransform3D@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z
    CComponentTransform3D(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z
    void GetScaleRotationTranslationRealization(CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetOrientation(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetRotationAngle(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetRotationAxis(WindissectOpaque const *, void const *);
};
