#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CDDisplaySwapChainBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDDisplaySwapChainBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceNotify@CDDisplaySwapChainBuffer@@QEAAXPEAVIDeviceResourceNotify@@@Z
    void AddResourceNotify(IDeviceResourceNotify *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3D11Resource@CDDisplaySwapChainBuffer@@UEAAPEAUID3D11Resource@@XZ
    virtual ID3D11Resource * GetD3D11Resource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIResource@CDDisplaySwapChainBuffer@@UEAAPEAUIDXGIResource@@PEAI@Z
    virtual IDXGIResource * GetDXGIResource(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurface@CDDisplaySwapChainBuffer@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z
    virtual ::Windows::Devices::Display::Core::IDisplaySurface * GetDisplaySurface(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneResourceDesc@CDDisplaySwapChainBuffer@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z
    virtual long GetPlaneResourceDesc(DWM_PLANE_RESOURCE_DESC *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devices@Windows@@@Z
    long MarkTransitional(::Windows::Devices::Display::Core::IDisplaySurfacePrivate * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDDisplaySwapChainBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDDisplaySwapChainBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveResourceNotify@CDDisplaySwapChainBuffer@@QEAAXXZ
    void RemoveResourceNotify();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDisplaySwapChainBuffer@@MEAA@XZ
    virtual ~CDDisplaySwapChainBuffer();
};
