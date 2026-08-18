#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CScenePbrMaterial {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ
    void OnAlphaCutoffChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ
    void OnNormalScaleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ
    void OnOcclusionStrengthChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z
    virtual void IntializeSpectreResource(ISpectreMaterial *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z
    virtual void PreDrawSceneOnSpectreResource(ISpectreMaterial *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAlphaCutoffToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyAlphaCutoffToSpectreResource(ISpectreMaterial *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAlphaModeToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyAlphaModeToSpectreResource(ISpectreMaterial *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyEmissiveFactorToSpectreResource(ISpectreMaterial *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyIsDoubleSidedToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyIsDoubleSidedToSpectreResource(ISpectreMaterial *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyNormalScaleToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyNormalScaleToSpectreResource(ISpectreMaterial *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOcclusionStrengthToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z
    void ApplyOcclusionStrengthToSpectreResource(ISpectreMaterial *);
};
