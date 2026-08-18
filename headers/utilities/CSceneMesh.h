#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CSceneMesh {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSceneMesh@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z
    CSceneMesh(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CSceneMesh@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSceneMesh@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSceneMesh@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CSceneMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneMesh@@MEAA@XZ
    virtual ~CSceneMesh();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z
    virtual long OnSceneFrameTick(ISpectreRenderer *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneLost(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneReady@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneReady(ISpectreRenderer *);
};
