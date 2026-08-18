#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CCompositionAmbientLight {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z
    CCompositionAmbientLight(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirection@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightInfo@CCompositionAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z
    virtual long GetLightInfo(CDrawingContext const *, CMILMatrix const *, LightInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightType@CCompositionAmbientLight@@UEBA?AW4LightType@@XZ
    virtual int GetLightType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSceneLightRealization@CCompositionAmbientLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z
    virtual long GetSceneLightRealization(CMILMatrix const &, ISpectreLightNode * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ
    virtual bool IsBlackLight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColor@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR@@@Z
    long ProcessSetColor(CResourceTable *, tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetIntensity@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY@@@Z
    long ProcessSetIntensity(CResourceTable *, tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CCompositionAmbientLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightToWorldForScene@CCompositionAmbientLight@@EEAAJPEBVCDrawingContext@@@Z
    virtual long UpdateLightToWorldForScene(CDrawingContext const *);
};
