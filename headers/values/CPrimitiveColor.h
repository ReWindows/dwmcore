#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CPrimitiveColor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPrimitiveColor@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CPrimitiveColor@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z
    long ProcessSetValue(CResourceTable *, tagMILCMD_PRIMITIVECOLOR_SETVALUE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPrimitiveColor@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPrimitiveColor@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorChanged@CPrimitiveColor@@AEAAXXZ
    void OnColorChanged();
};
