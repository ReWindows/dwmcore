#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CGeometryGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGeometryGroup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CGeometryGroup@@UEAAPEAVCResource@@XZ
    virtual CResource * GetResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z
    long ProcessAppend(CResourceTable *, tagMILCMD_GEOMETRYGROUP const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_GEOMETRYGROUP const *, void const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGeometryGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGeometryGroup@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ
    virtual void UnRegisterNotifiers();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z
    CGeometryGroup(CComposition *, CChannelContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGeometryGroup@@MEAA@XZ
    virtual ~CGeometryGroup();
};
