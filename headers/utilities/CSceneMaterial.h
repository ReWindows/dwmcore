#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CSceneMaterial {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z
    long ApplyTexCoordsToSpectreResource(CSceneMeshRendererComponent *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z
    CSceneMaterial(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CSceneMaterial@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreDrawScene@CSceneMaterial@@UEAAXXZ
    virtual void PreDrawScene();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntializeSpectreResource@CSceneMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z
    virtual void IntializeSpectreResource(ISpectreMaterial *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreDrawSceneOnSpectreResource@CSceneMaterial@@MEAAXPEAUISpectreMaterial@@@Z
    virtual void PreDrawSceneOnSpectreResource(ISpectreMaterial *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneMaterial@@MEAA@XZ
    virtual ~CSceneMaterial();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z
    virtual long OnSceneFrameTick(ISpectreRenderer *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneLost@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneLost(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneReady@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneReady(ISpectreRenderer *);
};
