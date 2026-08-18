#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CSceneNode {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSceneNode@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneNode@@QEAA@PEAVCComposition@@@Z
    CSceneNode(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ
    void DehydrateSpectreResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z
    long HydrateSpectreResources(CSceneWorld *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSceneNode@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSceneNode@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z
    long SetChildren(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z
    long SetComponents(WindissectOpaque const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneNode@@MEAA@XZ
    virtual ~CSceneNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ
    void ApplyTransformToSpectreResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CSceneNode@@AEAAXPEAV1@@Z
    void SetParent(CSceneNode *);
};
