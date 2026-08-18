#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CWarpLockSubresource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWarpLockSubresource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z
    static long Create(IWarpPalLockSubresourceExtension *, ID3D11Texture2D *, unsigned int, CWarpLockSubresource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CWarpLockSubresource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWarpLockSubresource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWarpLockSubresource@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWarpLockSubresource@@IEAA@PEAVIWarpPalLockSubresourceExtension@@@Z
    CWarpLockSubresource(IWarpPalLockSubresourceExtension *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z
    long Initialize(ID3D11Texture2D *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CWarpLockSubresource@@IEAAJXZ
    long Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CWarpLockSubresource@@IEAAJXZ
    long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWarpLockSubresource@@MEAA@XZ
    virtual ~CWarpLockSubresource();
};
