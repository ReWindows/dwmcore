#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CLegacySwapChainBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacySwapChainBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLegacySwapChainBuffer@@SAJPEAVCLegacySwapChain@@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z
    static long Create(CLegacySwapChain *, D2D_SIZE_U const &, unsigned int, CLegacySwapChainBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3D11Resource@CLegacySwapChainBuffer@@UEAAPEAUID3D11Resource@@XZ
    virtual ID3D11Resource * GetD3D11Resource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIResource@CLegacySwapChainBuffer@@UEAAPEAUIDXGIResource@@PEAI@Z
    virtual IDXGIResource * GetDXGIResource(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurface@CLegacySwapChainBuffer@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z
    virtual ::Windows::Devices::Display::Core::IDisplaySurface * GetDisplaySurface(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneResourceDesc@CLegacySwapChainBuffer@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z
    virtual long GetPlaneResourceDesc(DWM_PLANE_RESOURCE_DESC *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacySwapChainBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacySwapChainBuffer@@UEAAKXZ
    virtual unsigned long Release();
};
