#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CCompositionMipmapSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionMipmapSurface@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionMipmapSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z
    long ProcessSetCreationParams(CResourceTable *, tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z
    long ProcessSetSurfaces(CResourceTable *, tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES const *, void const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionMipmapSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionMipmapSurface@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionMipmapSurface@@UEAA@XZ
    virtual ~CCompositionMipmapSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ
    long EnsureMipmapSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z
    virtual long OnSceneFrameTick(ISpectreRenderer *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneLost@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneLost(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneReady(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ
    long UpdateMipmapSurface();
};
