#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CHoverPointerSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHoverPointerSource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CHoverPointerSource@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHoverPointerSource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z
    virtual long PushHoverPointer(D2D_POINT_2F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHoverPointerSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHoverPointerSource@@UEAAKXZ
    virtual unsigned long Release();
};
