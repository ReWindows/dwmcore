#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CExternalD3DRenderer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z
    static long Create(CD3DDevice *, IUnknown *, CExternalD3DRenderer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CExternalD3DRenderer@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExternalD3DRenderer@@UEAA@XZ
    virtual ~CExternalD3DRenderer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD3DResources@CExternalD3DRenderer@@EEAAXXZ
    virtual void ReleaseD3DResources();
};
