#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CLineGeometry {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLineGeometry@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLineGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEndPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEGEOMETRY_SETENDPOINT@@@Z
    long ProcessSetEndPoint(CResourceTable *, tagMILCMD_LINEGEOMETRY_SETENDPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStartPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEGEOMETRY_SETSTARTPOINT@@@Z
    long ProcessSetStartPoint(CResourceTable *, tagMILCMD_LINEGEOMETRY_SETSTARTPOINT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLineGeometry@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLineGeometry@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CLineGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
};
