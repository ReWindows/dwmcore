#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CSceneComponent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z
    void AddDirtySceneObject(CSceneObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z
    void DehydrateSpectreResources(CSceneNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z
    long HydrateSpectreResources(CSceneNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneComponent@@MEAA@XZ
    virtual ~CSceneComponent();
};
