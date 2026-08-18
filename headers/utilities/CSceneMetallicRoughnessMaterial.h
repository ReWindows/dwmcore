#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CSceneMetallicRoughnessMaterial {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSceneMetallicRoughnessMaterial@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z
    CSceneMetallicRoughnessMaterial(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ
    void OnMetallicFactorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRoughnessFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ
    void OnRoughnessFactorChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSceneMetallicRoughnessMaterial@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSceneMetallicRoughnessMaterial@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z
    virtual void IntializeSpectreResource(ISpectreMaterial *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z
    virtual void PreDrawSceneOnSpectreResource(ISpectreMaterial *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyBaseColorFactorToSpectreResource(ISpectreMaterial *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMetallicRoughnessFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyMetallicRoughnessFactorToSpectreResource(ISpectreMaterial *);
};
