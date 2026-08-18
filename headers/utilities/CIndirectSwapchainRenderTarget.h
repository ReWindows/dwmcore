#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 38 member(s).
class CIndirectSwapchainRenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIndirectSwapchainRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CIndirectSwapchainRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOcclusionChange@CIndirectSwapchainRenderTarget@@UEAAJXZ
    virtual long NotifyOcclusionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z
    long ProcessUnregister(CResourceTable *, tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z
    long ProcessUpdateTargetBounds(CResourceTable *, tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIndirectSwapchainRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIndirectSwapchainRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTargets@CIndirectSwapchainRenderTarget@@MEAAJXZ
    virtual long EnsureRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CIndirectSwapchainRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CIndirectSwapchainRenderTarget@@MEAAJXZ
    virtual long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ
    virtual bool ReadyForRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderTargetDirty(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z
    virtual void UpdateTargetDirty(CTreeDirty const &, bool);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z
    CIndirectSwapchainRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ
    long CreateRenderTargetForAcquiredBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ
    long EnsureMetadataBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z
    void GetMetaData(void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ
    long ReleaseCurrentBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRenderTargets@CIndirectSwapchainRenderTarget@@EEAAXXZ
    virtual void ReleaseRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ
    long TryTargetNextBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ
    void Unregister();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIndirectSwapchainRenderTarget@@EEAA@XZ
    virtual ~CIndirectSwapchainRenderTarget();
};
