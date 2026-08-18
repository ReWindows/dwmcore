#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CEllipseGeometry {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEllipseGeometry@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedForCpuClipping@CEllipseGeometry@@UEBA_NPEA_N@Z
    virtual bool IsSupportedForCpuClipping(bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCenterPoint@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT@@@Z
    long ProcessSetCenterPoint(CResourceTable *, tagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRadius@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETRADIUS@@@Z
    long ProcessSetRadius(CResourceTable *, tagMILCMD_ELLIPSEGEOMETRY_SETRADIUS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEllipseGeometry@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEllipseGeometry@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
};
