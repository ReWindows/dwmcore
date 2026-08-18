#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CSceneResourceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z
    static long Create(CComposition *, CSceneResourceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameTick@CSceneResourceManager@@QEAAXXZ
    void FrameTick();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ
    ISpectreRenderer * GetSpectreRenderer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z
    long GetSpectreTexture(CResource *, ISpectreTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z
    void RegisterSceneListener(ISceneNotificationListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z
    void UnregisterSceneListener(ISceneNotificationListener *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneResourceManager@@QEAA@XZ
    ~CSceneResourceManager();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z
    CSceneResourceManager(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ
    long EnsureSceneCompositor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ
    void ReleaseSceneCompositor();
};
