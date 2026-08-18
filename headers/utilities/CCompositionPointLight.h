#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 24 member(s).
class CCompositionPointLight {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z
    CCompositionPointLight(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoordinateSpaceVisualNoRef@CCompositionPointLight@@UEBAPEAVCVisual@@XZ
    virtual CVisual * GetCoordinateSpaceVisualNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirection@CCompositionPointLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z
    virtual long GetLightInfo(CDrawingContext const *, CMILMatrix const *, LightInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightType@CCompositionPointLight@@UEBA?AW4LightType@@XZ
    virtual int GetLightType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CCompositionPointLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z
    virtual long GetSceneLightRealization(CMILMatrix const &, ISpectreLightNode * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackLight@CCompositionPointLight@@UEBA_NXZ
    virtual bool IsBlackLight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z
    virtual bool IsValid(CVisualTree const *, CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAttenuation0@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0@@@Z
    long ProcessSetAttenuation0(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAttenuation1@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1@@@Z
    long ProcessSetAttenuation1(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAttenuation2@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2@@@Z
    long ProcessSetAttenuation2(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColor@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR@@@Z
    long ProcessSetColor(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z
    long ProcessSetCoordinateSpace(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetIntensity@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETINTENSITY@@@Z
    long ProcessSetIntensity(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETINTENSITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMaxAttenuationCutoff@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETMAXATTENUATIONCUTOFF@@@Z
    long ProcessSetMaxAttenuationCutoff(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETMAXATTENUATIONCUTOFF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMinAttenuationCutoff@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF@@@Z
    long ProcessSetMinAttenuationCutoff(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionPointLight@@EEAA@XZ
    virtual ~CCompositionPointLight();
};
