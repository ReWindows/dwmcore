#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 20 member(s).
class CSceneMeshRendererComponent {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSceneMeshRendererComponent@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneMeshRendererComponent@@QEAA@PEAVCComposition@@@Z
    CSceneMeshRendererComponent(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSceneMeshRendererComponent@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CSceneMeshRendererComponent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL@@@Z
    long ProcessSetMaterial(CResourceTable *, tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMesh@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH@@@Z
    long ProcessSetMesh(CResourceTable *, tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS@@PEBXI@Z
    long ProcessSetUVMappings(CResourceTable *, tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS const *, void const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSceneMeshRendererComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSceneMeshRendererComponent@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z
    long SetMaterial(CSceneMaterial *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z
    long SetOrAppendUVMappings(WindissectOpaque const &, bool);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpectreComponentGuid@CSceneMeshRendererComponent@@MEBAAEBU_GUID@@XZ
    virtual _GUID const & GetSpectreComponentGuid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z
    virtual long InitializeSpectreComponent(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneMeshRendererComponent@@MEAA@XZ
    virtual ~CSceneMeshRendererComponent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z
    void ApplyMaterialToMeshComponent(ISpectreMeshComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ
    void ApplyMaterialToSpectreResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z
    void ApplyMeshToMeshComponent(ISpectreMeshComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ
    void ApplyMeshToSpectreResources();
};
