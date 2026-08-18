#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CCombinedGeometry {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCombinedGeometry@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CCombinedGeometry@@UEAAPEAVCResource@@XZ
    virtual CResource * GetResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_COMBINEDGEOMETRY const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCombinedGeometry@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNotifiers@CCombinedGeometry@@QEAAJPEAVCResourceTable@@@Z
    long RegisterNotifiers(CResourceTable *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCombinedGeometry@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ
    virtual void UnRegisterNotifiers();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z
    CCombinedGeometry(CComposition *, CChannelContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCombinedGeometry@@MEAA@XZ
    virtual ~CCombinedGeometry();
};
