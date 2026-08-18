#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CCompositionEnvironmentLight {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirection@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightInfo@CCompositionEnvironmentLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z
    virtual long GetLightInfo(CDrawingContext const *, CMILMatrix const *, LightInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightType@CCompositionEnvironmentLight@@UEBA?AW4LightType@@XZ
    virtual int GetLightType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSceneLightRealization@CCompositionEnvironmentLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z
    virtual long GetSceneLightRealization(CMILMatrix const &, ISpectreLightNode * *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightToWorldForScene@CCompositionEnvironmentLight@@EEAAJPEBVCDrawingContext@@@Z
    virtual long UpdateLightToWorldForScene(CDrawingContext const *);
};
